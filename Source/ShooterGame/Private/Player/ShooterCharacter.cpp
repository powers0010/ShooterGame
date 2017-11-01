// Fill out your copyright notice in the Description page of Project Settings.

#include "ShooterCharacter.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "ShooterGame.h"
#include "Weapon.h"
#include "ShooterPlayerController.h"


// Sets default values
AShooterCharacter::AShooterCharacter():Health(1000)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Camera
// 	Camera1P = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera1P"));
// 	Camera1P->SetupAttachment(GetCapsuleComponent());
// 	Camera1P->SetRelativeLocation(FVector(0.f, 0.f, BaseEyeHeight));
	
	//Mesh碰撞	//第三人称模型
	//自己不可见 //不接受 贴花投射
	GetMesh()->bOnlyOwnerSee = false;
	GetMesh()->bOwnerNoSee = true;
	GetMesh()->bReceivesDecals = false;
	//碰撞设置
	GetMesh()->SetCollisionObjectType(ECC_Pawn);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GetMesh()->SetCollisionResponseToChannel(COLLISION_PROJECTILE, ECR_Block);
	GetMesh()->SetCollisionResponseToChannel(COLLISION_WEAPON, ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel(COLLISION_PICKUP, ECR_Ignore);

	//设置胶囊体碰撞通道
	GetCapsuleComponent()->SetCollisionResponseToChannel(COLLISION_PROJECTILE, ECR_Block);
	GetCapsuleComponent()->SetCollisionResponseToChannel(COLLISION_WEAPON, ECR_Ignore);
	GetCapsuleComponent()->SetCollisionResponseToChannel(COLLISION_PICKUP, ECR_Ignore);
	
	//第一人称 模型
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh1P"));
	/*	Mesh1P->SetupAttachment(Camera1P);*/
	Mesh1P->SetupAttachment(GetCapsuleComponent());
	//仅自己可见 //不接受 贴花投射	//不投影
	Mesh1P->bOnlyOwnerSee = true;
	Mesh1P->bOwnerNoSee = false;
	Mesh1P->bReceivesDecals = false;
	Mesh1P->bCastDynamicShadow = false;
	//骨骼动画的pose更新 只发生在渲染时
	Mesh1P->MeshComponentUpdateFlag = EMeshComponentUpdateFlag::OnlyTickPoseWhenRendered;
	//Mesh1P 更新组 设置为 在物理之前更新的更新组
	Mesh1P->PrimaryComponentTick.TickGroup = TG_PrePhysics;
	//关闭 第一人称碰撞
	Mesh1P->SetCollisionObjectType(ECC_Pawn);
	Mesh1P->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Mesh1P->SetCollisionResponseToChannels(ECR_Ignore);
	//	Mesh1P->SetRelativeLocation(FVector(0.f, 0.f, 0.f));

	bIsTargeting = false;
}

// Called when the game starts or when spawned
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShooterCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	//构造武器绑定
// 	FActorSpawnParameters SpawnParameter;
// 	SpawnParameter.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
// 	CurrentWeapon = GetWorld()->SpawnActor<AWeapon>(WeaponClass, SpawnParameter);
// 	if (CurrentWeapon)
// 	{
// 		CurrentWeapon->SetPawnOwner(this);
// //		CurrentWeapon->AttachWeaponToPawn();
// 		CurrentWeapon->OnEquip(nullptr);
// 		CurrentWeapon->Instigator = this;
// 	}
	SpawnDefaultInventory();
}

void AShooterCharacter::OnCameraUpdata(const FVector& CameraLocation, const FRotator& CameraRotation)
{
	
	USkeletalMeshComponent* DefaultMesh1P = Cast<USkeletalMeshComponent>(GetClass()->GetDefaultSubobjectByName(TEXT("Mesh1P")));
	if (!DefaultMesh1P)
	{
		return;
	}

	//获取默认Mesh1P组件相对于Root的变换矩阵 
	const FMatrix DefaultMesh1PLS = FRotationTranslationMatrix(DefaultMesh1P->RelativeRotation, DefaultMesh1P->RelativeLocation);

	//本地空间到世界空间的转化矩阵
	const FMatrix LocalToWorld = ActorToWorld().ToMatrixWithScale();

	//相机在世界坐标的旋转矩阵 Yaw 和Pitch
	const FRotator CameraYaw(0.f, CameraRotation.Yaw, 0.f);
	const FRotator CameraYawAndPitch(CameraRotation.Pitch, CameraRotation.Yaw, 0.f);

	//camera相对于root的变换 本地空间
	const FMatrix CameraToRootInLS = FRotationTranslationMatrix(CameraYawAndPitch, CameraLocation)*LocalToWorld.Inverse();

	//camera相对于root在Yaw的变换 本地空间
	const FMatrix CameraToRootYawInLS = FRotationTranslationMatrix(CameraYaw, CameraLocation)*LocalToWorld.Inverse();

	//计算Mesh1P的相对坐标
	const FMatrix Mesh1PRelative = DefaultMesh1PLS * CameraToRootYawInLS.Inverse() * CameraToRootInLS ;

	//设置坐标
	Mesh1P->SetRelativeLocationAndRotation(Mesh1PRelative.GetOrigin(), Mesh1PRelative.Rotator());
}

// Called to bind functionality to input
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AShooterCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AShooterCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AShooterCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AShooterCharacter::AddControllerPitchInput);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AShooterCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Target"), IE_Pressed, this, &AShooterCharacter::OnStartTarget);
	PlayerInputComponent->BindAction(TEXT("Target"), IE_Released, this, &AShooterCharacter::OnEndTarget);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &AShooterCharacter::OnStartFire);
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Released, this, &AShooterCharacter::OnStopFire);
	PlayerInputComponent->BindAction(TEXT("Reload"), IE_Pressed, this, &AShooterCharacter::OnReload);
	PlayerInputComponent->BindAction(TEXT("Equip"), IE_Pressed, this, &AShooterCharacter::OnEquip);

}

void AShooterCharacter::MoveForward(float value)
{
	if (Controller)
	{
		bool bLimitRotation = GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling();
		FRotator Rotator = bLimitRotation ? GetActorRotation() : GetControlRotation();
		FVector Direction = FRotationMatrix(Rotator).GetScaledAxis(EAxis::X);
		AddMovementInput(Direction, value);
	}
}
void AShooterCharacter::MoveRight(float value)
{
	if (Controller)
	{
		//		bool bLimitRotation = GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling();
		//		FRotator Rotator = bLimitRotation ? GetActorRotation() : GetControlRotation();
		FRotator Rotator = GetActorRotation();
		FVector Direction = FRotationMatrix(Rotator).GetScaledAxis(EAxis::Y);
		AddMovementInput(Direction, value);
	}
}
void AShooterCharacter::OnStartTarget()
{
	AShooterPlayerController* MyController = Cast<AShooterPlayerController>(Controller);
	if (MyController)
	{
		SetIsTargeting(true);
	}
	
}
void AShooterCharacter::OnEndTarget()
{
	SetIsTargeting(false);
}

void AShooterCharacter::OnStartFire()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->StartFire();
	}
}
void AShooterCharacter::OnStopFire()
{
	if (CurrentWeapon)
	{
		CurrentWeapon->StopFire();
	}
}

void AShooterCharacter::OnReload()
{
	AShooterPlayerController* MyController = Cast<AShooterPlayerController>(GetController());
	if (MyController)
	{
		if (CurrentWeapon)
		{
			CurrentWeapon->StartReload();
//			UE_LOG(LogTemp, Warning, TEXT("OnReload"));
		}
	}
}

void AShooterCharacter::OnEquip()
{
	AShooterPlayerController* MyController = Cast<AShooterPlayerController>(GetController());
	if (MyController)
	{
		if (Inventory.Num()>0 && CurrentWeapon && CurrentWeapon->GetCurrentWeaponState() != WeaponState::Equiping)
		{
			const int32 CurrentWeaponIndex = Inventory.IndexOfByKey(CurrentWeapon);
			const int32 NextWeaponIndex = (CurrentWeaponIndex + 1) % Inventory.Num();
			AWeapon* NextWeapon = Inventory[NextWeaponIndex];

			EquipWeapon(NextWeapon);
		}
	}
}

USkeletalMeshComponent* AShooterCharacter::GetMesh1P()
{
	return Mesh1P;
}

FName AShooterCharacter::GetWeaponAttachPoint() const
{
	return WeaponAttachPoint;
}

FRotator AShooterCharacter::GetAimOffsets() const
{
	//获取Aim方向 //世界坐标系
	FVector AimDirWS = GetBaseAimRotation().Vector();
	//获取Local To World 的变换Transform，用 矩阵的逆矩阵 变换 一个向量
	//把Aim方向从世界坐标系变换到Local坐标系
	FVector AimDirLS = ActorToWorld().InverseTransformVectorNoScale(AimDirWS);
	return AimDirLS.Rotation();
}

bool AShooterCharacter::GetIsTargeting() const
{
	return bIsTargeting;
}

void AShooterCharacter::SetIsTargeting(bool NewIsTarget)
{
	bIsTargeting = NewIsTarget;
}
float AShooterCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	//保存 经过父类计算的实际伤害
	const float ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
	if (ActualDamage>0.f)
	{
 		Health -= ActualDamage;
//		UE_LOG(LogTemp, Warning, TEXT("Health: %f"), Health);
 	}

	return ActualDamage;
}

float AShooterCharacter::PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate , FName StartSectionName)
{
	USkeletalMeshComponent* UseMesh = GetPawnMesh();
	if (UseMesh && AnimMontage && UseMesh->AnimScriptInstance)
	{
		return UseMesh->AnimScriptInstance->Montage_Play(AnimMontage, InPlayRate);
	}
	return 0.f;
}

void AShooterCharacter::StopAnimMontage(class UAnimMontage* AnimMontage)
{
	USkeletalMeshComponent* UseMesh = GetPawnMesh();
	if (UseMesh && AnimMontage && UseMesh->AnimScriptInstance)
	{
		UseMesh->AnimScriptInstance->Montage_Stop(AnimMontage->BlendOut.GetBlendTime(), AnimMontage);
	}
}

USkeletalMeshComponent* AShooterCharacter::GetPawnMesh()
{
	return Mesh1P;
}

int32 AShooterCharacter::GetCurHealth() const
{
	return Health;
}

int32 AShooterCharacter::GetMaxHealth() const
{
	return GetClass()->GetDefaultObject<AShooterCharacter>()->Health;
}

AWeapon* AShooterCharacter::GetCurrentWeapon()
{
	return CurrentWeapon ? CurrentWeapon : nullptr;
}

bool AShooterCharacter::CanFire()
{
	return IsAlive();
}

bool AShooterCharacter::IsAlive()
{
	return Health > 0;
}

void AShooterCharacter::SpawnDefaultInventory()
{
	int32 NumOfDefaultInventory = DefaultInventorySystem.Num();
	for (int32 i = 0;i< NumOfDefaultInventory; i++)
	{
		if (DefaultInventorySystem[i])
		{
			FActorSpawnParameters SpawnInfo;
			SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			AWeapon* NewWeapon = GetWorld()->SpawnActor<AWeapon>(DefaultInventorySystem[i], SpawnInfo);
			if (NewWeapon)
			{
				AddWeapon(NewWeapon);
			}
		}
	}

	if (Inventory.Num()>0)
	{
		CurrentWeapon = Inventory[0];
		CurrentWeapon->OnEquip(nullptr);
	}
}

void AShooterCharacter::AddWeapon(AWeapon* NewWeapon)
{
	if (NewWeapon)
	{
		NewWeapon->SetPawnOwner(this);
		NewWeapon->Instigator = Instigator;
		Inventory.AddUnique(NewWeapon);
	}
}

void AShooterCharacter::EquipWeapon(AWeapon* Weapon)
{
	if (Weapon)
	{
		SetCurrentWeapon(Weapon,CurrentWeapon);
	}
}

void AShooterCharacter::SetCurrentWeapon(AWeapon* NewWeapon, AWeapon* LastWeapon)
{
	AWeapon* LocalWeapon = nullptr;

	if (LastWeapon)
	{
		LocalWeapon = LastWeapon;
	}
	else if (NewWeapon!= CurrentWeapon)
	{
		LocalWeapon = CurrentWeapon;
	}

	if (LocalWeapon)
	{
		//卸载武器
		LocalWeapon->OnUnEquip();
	}
	CurrentWeapon = NewWeapon;

	if (NewWeapon)
	{
		NewWeapon->SetPawnOwner(this);
		NewWeapon->Instigator = Instigator;
		NewWeapon->OnEquip(LastWeapon);
	}

}
