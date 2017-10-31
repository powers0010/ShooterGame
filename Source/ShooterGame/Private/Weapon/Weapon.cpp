// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon.h"
#include "ShooterGame.h"
#include "ShooterCharacter.h"
#include "ShooterPlayerController.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "ExplosionEffect.h"


// Sets default values
AWeapon::AWeapon() : AmmoCount(50)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh1P"));
	RootComponent = Mesh1P;
	Mesh1P->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Mesh1P->SetCollisionObjectType(ECC_WorldDynamic);
	Mesh1P->SetCollisionResponseToChannels(ECR_Ignore);
	Mesh1P->CastShadow = false;
	Mesh1P->MeshComponentUpdateFlag = EMeshComponentUpdateFlag::OnlyTickPoseWhenRendered;
	Mesh1P->SetRelativeTransform(FTransform(FRotator(0.f, 0.f, -90.f)));

	FireSound = nullptr;
	PawnOwner = nullptr;

	PreWeaponState = WeaponState::Idle;
	CurWeaponState = WeaponState::Idle;
	bIsEquipped = false;
	bWantToReload = false;
	bWantToFiring = false;
	bWantToEquip = false;
	bReFiring = false;
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	ClipCount = WeaponConfig.ClipAmount;
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeapon::AttachWeaponToPawn()
{
	if (PawnOwner)
	{
		USkeletalMeshComponent* PawnMesh1P = PawnOwner->GetMesh1P();
		FName WeaponPoint = PawnOwner->GetWeaponAttachPoint();
		if (PawnMesh1P)
		{
			Mesh1P->SetHiddenInGame(false);
			Mesh1P->AttachToComponent(PawnMesh1P, FAttachmentTransformRules::KeepRelativeTransform, WeaponPoint);
		}
	}
}

void AWeapon::DetachWeaponFromPawn()
{
	Mesh1P->DetachFromComponent(FDetachmentTransformRules::KeepRelativeTransform);
	Mesh1P->SetHiddenInGame(true);
}


void AWeapon::SetPawnOwner(AShooterCharacter* Pawn)
{
	if (Pawn)
	{
		PawnOwner = Pawn;
	}
}

void AWeapon::OnEquip(const AWeapon* _LastWeapon)
{
	LastWeapon = (AWeapon*)_LastWeapon;
	if (!bWantToEquip)
	{
		bWantToEquip = true;
		CaculateEquipState();
		DependOnCurrentWeaponState();
	}
}

void AWeapon::OnUnEquip()
{
	//卸载mesh
	DetachWeaponFromPawn();
	bIsEquipped = false;
	StopFire();

	if (bWantToReload)
	{
		bWantToReload = false;

		//停止播放装弹动画

		GetWorldTimerManager().ClearTimer(TimerHandle_StopReload);
		GetWorldTimerManager().ClearTimer( TimerHandle_ReloadWeapon);
	}

	if (bWantToEquip)
	{
		bWantToEquip = false;
		//停止播放 装备动画

		GetWorldTimerManager().ClearTimer( TimerHandle_OnEquipFinish);
	}

	DependOnCurrentWeaponState();
}

FVector AWeapon::GetAdjustAim()
{
	FVector AimDir = FVector::ZeroVector;
	AShooterPlayerController* PlayerController = Instigator ? Cast<AShooterPlayerController>(Instigator->GetController()) : nullptr;
	if (PlayerController)
	{
		FVector Location;
		FRotator Rotation;
		//获取 发射方向
		PlayerController->GetPlayerViewPoint(Location, Rotation);
		AimDir = Rotation.Vector();
	}
//	UE_LOG(LogTemp, Warning, TEXT("AimDir: %s"), *AimDir.ToString());
	return AimDir;
}

FHitResult AWeapon::WeaponTrace(FVector TraceFrom, FVector TraceTo) const
{
	static FName weapontag = FName(TEXT("Weapontag"));
	FCollisionQueryParams TraceParams(weapontag, true, Instigator);
	TraceParams.bTraceAsyncScene = true;
	TraceParams.bReturnPhysicalMaterial = true;

	FHitResult HitResult(ForceInit);
	GetWorld()->LineTraceSingleByChannel(HitResult, TraceFrom, TraceTo, COLLISION_WEAPON, TraceParams);

	return HitResult;
}

FVector AWeapon::GetMuzzleLocation()
{
	if (Mesh1P)
	{
		return Mesh1P->GetSocketLocation(MuzzleAttachPoint);
	}
	return FVector::ZeroVector;
}


void AWeapon::StartFire()
{
	if (!bWantToFiring)
	{
		bWantToFiring = true;
		CaculateEquipState();
		DependOnCurrentWeaponState();
	}
}

void AWeapon::StopFire()
{
	if (bWantToFiring)
	{
		bWantToFiring = false;
		CaculateEquipState();
		DependOnCurrentWeaponState();
	}
}

void AWeapon::HandleFiring()
{
	if (AmmoCount > 0)
	{
		SimulateWeaponFire();
		FireWeapon();
		AmmoCount--;

		bReFiring = (CurWeaponState == WeaponState::Firing) && WeaponConfig.FireCD > 0.f;
		if (bReFiring)
		{
			GetWorldTimerManager().SetTimer(TimerHandle_HandleReFiring, this, &AWeapon::HandleFiring, WeaponConfig.FireCD, false);
		}
	}
	else
	{
		//提示子弹不足
	}
}


void AWeapon::SimulateWeaponFire()
{
	if (FireSound)
	{
		PlayWeaponSound(FireSound);
	}
// 	if (FireEffect)
// 	{
// 		UGameplayStatics::SpawnEmitterAttached(FireEffect, Mesh1P,MuzzleAttachPoint);
// 	}
	//开火动画

}

void AWeapon::StopSimulateWeaponFire()
{
	//todo
}

void AWeapon::FireWeapon()
{

}
UAudioComponent* AWeapon::PlayWeaponSound(USoundCue* FireSound)
{
	UAudioComponent* AC = nullptr;
	if (FireSound)
	{
		AC = UGameplayStatics::SpawnSoundAttached(FireSound, PawnOwner->GetRootComponent());
	}
	return AC;
}

int32 AWeapon::GetCurrentAmmoAmount() const
{
	return AmmoCount;
}

int32 AWeapon::GetMaxAmmoAmount() const
{
	return GetClass()->GetDefaultObject<AWeapon>()->AmmoCount;
}

int32 AWeapon::GetClipAmount() const
{
	return ClipCount;
}

void AWeapon::CaculateEquipState()
{
	WeaponState::Type NewState = WeaponState::Idle;
	if (bIsEquipped)
	{
		if (bWantToReload && CanRealod())
		{
			NewState = WeaponState::Reloading;
		}
		else 
		{
			if (bWantToFiring && CanFire())
			{
				NewState = WeaponState::Firing;
			}
			else
			{
				NewState = WeaponState::Idle;
			}
		}
	}
	else 
	{
		if (bWantToEquip)
		{
			NewState = WeaponState::Equiping;
		}	
	}
//	UE_LOG(LogTemp, Warning, TEXT(" Caculate WeaponState"));
	
	SetWeaponState(NewState);
}

void AWeapon::DependOnCurrentWeaponState()
{
	if (PreWeaponState == WeaponState::Idle && CurWeaponState == WeaponState::Firing)
	{
		//处理开始开火
		HandleStartFire();
	}
	else if(PreWeaponState == WeaponState::Firing && (CurWeaponState == WeaponState::Idle || CurWeaponState == WeaponState::Reloading))
	{
		//处理结束开火
		HandleEndFire();
	}

	if ((PreWeaponState == WeaponState::Idle || PreWeaponState == WeaponState::Firing) && CurWeaponState == WeaponState::Reloading)
	{
		//开始装弹
		HandleStartReload();
	} 
	else if(PreWeaponState == WeaponState::Reloading && CurWeaponState == WeaponState::Idle)
	{
		//结束装弹
		HandleEndReload();
	}

	if (PreWeaponState == WeaponState::Idle && CurWeaponState == WeaponState::Equiping)
	{
		//开始更换装备
		HandleStartEquip();
	} 
	else if(PreWeaponState == WeaponState::Equiping && CurWeaponState == WeaponState::Idle)
	{
		//结束更换装备
		HandleEndEquip();
	}
}

void AWeapon::SetWeaponState(WeaponState::Type NewWeaponState)
{
	PreWeaponState = CurWeaponState;
	CurWeaponState = NewWeaponState;
}

bool AWeapon::CanFire() const
{
	bool LocalCanFire = PawnOwner && PawnOwner->CanFire();
	return LocalCanFire;
}

bool AWeapon::CanRealod()
{
	return (GetCurrentAmmoAmount() < GetMaxAmmoAmount())&&(ClipCount > 0);
}

void AWeapon::HandleStartFire()
{
	HandleFiring();
}

void AWeapon::HandleEndFire()
{
	StopSimulateWeaponFire();
	bReFiring = false;
	GetWorldTimerManager().ClearTimer(TimerHandle_HandleReFiring);


}

void AWeapon::HandleStartReload()
{
	float AnimDurTime = 0.f;

	if (AnimDurTime<=0.f)
	{
		AnimDurTime = 2.f;
	}
	//PlayAnim

	GetWorldTimerManager().SetTimer( TimerHandle_StopReload, this, &AWeapon::StopReload, AnimDurTime, false);
	GetWorldTimerManager().SetTimer( TimerHandle_ReloadWeapon, this, &AWeapon::ReloadWeapon, FMath::Max(0.1f, AnimDurTime - 0.1f), false);

	if (PawnOwner)
	{
		PlayWeaponSound(ReloadSound);
	}
}

void AWeapon::HandleEndReload()
{
	//停止动画

	GetWorldTimerManager().ClearTimer(TimerHandle_StopReload);
	GetWorldTimerManager().ClearTimer( TimerHandle_ReloadWeapon);

	AmmoCount = FMath::Min(AmmoCount+WeaponConfig.AmmoPerClip ,GetMaxAmmoAmount());
	ClipCount--;
//	UE_LOG(LogTemp, Warning, TEXT("ClipCount %d"), ClipCount);
}

void AWeapon::HandleStartEquip()
{
	AttachWeaponToPawn();

	if (LastWeapon)	//换枪
	{
		float AnimDurTime = 2.f;
		//PlayAnim

		GetWorldTimerManager().SetTimer(TimerHandle_OnEquipFinish, this, &AWeapon::OnEquipFinish, AnimDurTime, false);
	}
	else			//角色生成时进行
	{
		OnEquipFinish();
	}
	
	if (PawnOwner)
	{
		PlayWeaponSound(EquipSound);
	}
	bIsEquipped = true;
}

void AWeapon::HandleEndEquip()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_OnEquipFinish);

	//停止武器动画
}

void AWeapon::OnEquipFinish()
{
	if (!bIsEquipped)
	{
		bIsEquipped = true;
	}
	if (bWantToEquip)
	{
		bWantToEquip = false;
	}
	CaculateEquipState();
	DependOnCurrentWeaponState();
}

void AWeapon::StartReload()
{
	if (!bWantToReload && CanRealod())
	{
		bWantToReload = true;
		CaculateEquipState();
		DependOnCurrentWeaponState();
//		UE_LOG(LogTemp, Warning, TEXT("StartReload"));
	}
}

void AWeapon::StopReload()
{
	if (bWantToReload)
	{
		bWantToReload = false;
		CaculateEquipState();
		DependOnCurrentWeaponState();
	}
}

void AWeapon::ReloadWeapon()
{

}

WeaponState::Type AWeapon::GetCurrentWeaponState()
{
	return CurWeaponState;
}

