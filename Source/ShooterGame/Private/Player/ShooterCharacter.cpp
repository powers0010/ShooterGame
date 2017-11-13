// Fill out your copyright notice in the Description page of Project Settings.

#include "ShooterCharacter.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "ShooterGame.h"
#include "Weapon.h"
#include "ShooterPlayerController.h"
#include "WeaponSystemComponent.h"
#include "PickUpItem.h"
#include "SniperTargetWidget.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "MainWidget.h"



// Sets default values
AShooterCharacter::AShooterCharacter():Health(1000)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Camera
// 	Camera1P = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera1P"));
// 	Camera1P->SetupAttachment(GetCapsuleComponent());
// 	Camera1P->SetRelativeLocation(FVector(0.f, 0.f, BaseEyeHeight));

	//����ϵͳ
	WeaponSysCom = CreateDefaultSubobject<UWeaponSystemComponent>(TEXT("WeaponSystemCom"));
		
	//Mesh��ײ	//�����˳�ģ��
	//�Լ����ɼ� //������ ����Ͷ��
	GetMesh()->bOnlyOwnerSee = false;
	GetMesh()->bOwnerNoSee = true;
	GetMesh()->bReceivesDecals = false;
	//��ײ����
	GetMesh()->SetCollisionObjectType(ECC_Pawn);
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GetMesh()->SetCollisionResponseToChannel(COLLISION_PROJECTILE, ECR_Block);
	GetMesh()->SetCollisionResponseToChannel(COLLISION_WEAPON, ECR_Ignore);
	GetMesh()->SetCollisionResponseToChannel(COLLISION_PICKUP, ECR_Ignore);

	//���ý�������ײͨ��
	GetCapsuleComponent()->SetCollisionResponseToChannel(COLLISION_PROJECTILE, ECR_Block);
	GetCapsuleComponent()->SetCollisionResponseToChannel(COLLISION_WEAPON, ECR_Ignore);
	GetCapsuleComponent()->SetCollisionResponseToChannel(COLLISION_PICKUP, ECR_Ignore);
	
	//��һ�˳� ģ��
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh1P"));
	/*	Mesh1P->SetupAttachment(Camera1P);*/
	Mesh1P->SetupAttachment(GetCapsuleComponent());
	//���Լ��ɼ� //������ ����Ͷ��	//��ͶӰ
	Mesh1P->bOnlyOwnerSee = true;
	Mesh1P->bOwnerNoSee = false;
	Mesh1P->bReceivesDecals = false;
	Mesh1P->bCastDynamicShadow = false;
	//����������pose���� ֻ��������Ⱦʱ
	Mesh1P->MeshComponentUpdateFlag = EMeshComponentUpdateFlag::OnlyTickPoseWhenRendered;
	//Mesh1P ������ ����Ϊ ������֮ǰ���µĸ�����
	Mesh1P->PrimaryComponentTick.TickGroup = TG_PrePhysics;
	//�ر� ��һ�˳���ײ
	Mesh1P->SetCollisionObjectType(ECC_Pawn);
	Mesh1P->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Mesh1P->SetCollisionResponseToChannels(ECR_Ignore);
	//	Mesh1P->SetRelativeLocation(FVector(0.f, 0.f, 0.f));

	bIsTargeting = false;
	SniperTargetWideget = nullptr;
	FocusOnItem = nullptr;
	RangeOfFocusOn = 500.f;
	DoorKeyAmount = 0;
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
	TraceForPickUpItem();

}

void AShooterCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (WeaponSysCom)
	{
		WeaponSysCom->SetPawnOwner(this);
		WeaponSysCom->CreateDefaultWeaponAtGameStart();
	}
}

void AShooterCharacter::OnCameraUpdata(const FVector& CameraLocation, const FRotator& CameraRotation)
{
	
	USkeletalMeshComponent* DefaultMesh1P = Cast<USkeletalMeshComponent>(GetClass()->GetDefaultSubobjectByName(TEXT("Mesh1P")));
	if (!DefaultMesh1P)
	{
		return;
	}

	//��ȡĬ��Mesh1P��������Root�ı任���� 
	const FMatrix DefaultMesh1PLS = FRotationTranslationMatrix(DefaultMesh1P->RelativeRotation, DefaultMesh1P->RelativeLocation);

	//���ؿռ䵽����ռ��ת������
	const FMatrix LocalToWorld = ActorToWorld().ToMatrixWithScale();

	//����������������ת���� Yaw ��Pitch
	const FRotator CameraYaw(0.f, CameraRotation.Yaw, 0.f);
	const FRotator CameraYawAndPitch(CameraRotation.Pitch, CameraRotation.Yaw, 0.f);

	//camera�����root�ı任 ���ؿռ�
	const FMatrix CameraToRootInLS = FRotationTranslationMatrix(CameraYawAndPitch, CameraLocation)*LocalToWorld.Inverse();

	//camera�����root��Yaw�ı任 ���ؿռ�
	const FMatrix CameraToRootYawInLS = FRotationTranslationMatrix(CameraYaw, CameraLocation)*LocalToWorld.Inverse();

	//����Mesh1P���������
	const FMatrix Mesh1PRelative = DefaultMesh1PLS * CameraToRootYawInLS.Inverse() * CameraToRootInLS ;

	//��������
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
	PlayerInputComponent->BindAction(TEXT("PickUp"), IE_Pressed, this, &AShooterCharacter::OnPickUp);


}

void AShooterCharacter::MoveForward(float value)
{
	if (Controller)
	{
 		bool bLimitRotation = GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling();
 		FRotator Rotator = bLimitRotation ? GetActorRotation() : GetControlRotation();
//		FRotator Rotator = GetControlRotation();
		FVector Direction = FRotationMatrix(Rotator).GetScaledAxis(EAxis::X);
		AddMovementInput(Direction, value);
	}
}
void AShooterCharacter::MoveRight(float value)
{
	if (Controller)
	{
		bool bLimitRotation = GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling();
		FRotator Rotator = bLimitRotation ? GetActorRotation() : GetControlRotation();
	//	FRotator Rotator = GetActorRotation();
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
	if (WeaponSysCom)
	{
		WeaponSysCom->OnStartTarget();
	}	
}
void AShooterCharacter::OnEndTarget()
{
	SetIsTargeting(false);
	if (WeaponSysCom)
	{
		WeaponSysCom->OnStopTarget();
	}
}

void AShooterCharacter::OnStartFire()
{
	if (WeaponSysCom)
	{
		WeaponSysCom->OnStartFire();
	}
}
void AShooterCharacter::OnStopFire()
{
	if (WeaponSysCom)
	{
		WeaponSysCom->OnStopFire();
	}
}

void AShooterCharacter::OnReload()
{
	AShooterPlayerController* MyController = Cast<AShooterPlayerController>(GetController());
	if (MyController)
	{
		WeaponSysCom->OnReload();
	}
}

void AShooterCharacter::OnEquip()
{
	AShooterPlayerController* MyController = Cast<AShooterPlayerController>(GetController());
	if (MyController && WeaponSysCom)
	{
		WeaponSysCom->OnEquip();
	}
}

void AShooterCharacter::OnPickUp()
{
// 	if (FocusOnItem)
// 	{
// 		FocusOnItem->OnPickUp(this);
// 	}
// 	FHitResult HitResult(ForceInit);
// 	TraceForPickUpItem(HitResult);
// 	if (HitResult.bBlockingHit)
// 	{
// 		APickUpItem* PickUpItem = Cast<APickUpItem>(HitResult.GetActor());
// 		if (PickUpItem)
// 		{
// 			PickUpItem->ShowItemInfoWidget();
// 			UE_LOG(LogTemp, Warning, TEXT("PickUp1"));
// 		}
// 	}
}

void AShooterCharacter::TraceForPickUpItem(/*FHitResult& HitResult */)
{
	FVector StartLocation;
	FRotator AimRotation;
	GetController()->GetPlayerViewPoint(StartLocation, AimRotation);

	FHitResult LocalHitResult(ForceInit);
// 	static FName Tracetag = FName(TEXT("Tracetag"));
// 	FCollisionQueryParams HitInfo(Tracetag, false, Instigator);
// 	HitInfo.bTraceAsyncScene = true;
// 	HitInfo.bReturnPhysicalMaterial = true;
//	GetWorld()->DebugDrawTraceTag = Tracetag;
	GetWorld()->LineTraceSingleByChannel(LocalHitResult, StartLocation, StartLocation + RangeOfFocusOn*AimRotation.Vector(), COLLISION_PICKUP/*, HitInfo*/);

	FocusOnItem = LocalHitResult.IsValidBlockingHit() ? Cast<APickUpItem>(LocalHitResult.GetActor()) : nullptr;
	if (FocusOnItem)
	{
		FocusOnItem->OnFocusOn();
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
	//��ȡAim���� //��������ϵ
	FVector AimDirWS = GetBaseAimRotation().Vector();
	//��ȡLocal To World �ı任Transform���� ���������� �任 һ������
	//��Aim�������������ϵ�任��Local����ϵ
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
	//���� ������������ʵ���˺�
	const float ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
	if (ActualDamage>0.f)
	{
 		Health -= ActualDamage;
		if (Health<0.f)
		{
			Die(ActualDamage, DamageEvent, EventInstigator, DamageCauser);
		}
		else
		{
			SimulateBeAttacked();
		}
		UE_LOG(LogTemp, Warning, TEXT("Health: %f"), Health);
 	}

	return ActualDamage;
}

void AShooterCharacter::SimulateBeAttacked()
{
	//Camera Shake
	if (BeHitCameraShake)
	{
		AShooterPlayerController* PC = Cast<AShooterPlayerController>(GetController());
		if (PC && PC->IsLocalController())
		{
			PC->ClientPlayCameraShake(BeHitCameraShake);
		}
	}

	//��Ļ��ѪЧ��
	if (MainWidget)
	{
		MainWidget->AddBeHitImageToView();
	}
}

void AShooterCharacter::Die(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Health = 0.f;
	UE_LOG(LogTemp, Warning, TEXT("I am Die"));
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
	return WeaponSysCom && WeaponSysCom->GetCurrentWeapon() ? WeaponSysCom->GetCurrentWeapon() : nullptr;
}

bool AShooterCharacter::CanFire()
{
	return IsAlive();
}

bool AShooterCharacter::IsAlive()
{
	return Health > 0;
}

USniperTargetWidget* AShooterCharacter::GetTargetWidget() const
{
	return SniperTargetWideget;
}

void AShooterCharacter::SetFOV(float _FOV)
{
	if (Controller->IsLocalController())
	{
		APlayerCameraManager* CameraManager = UGameplayStatics::GetPlayerCameraManager(this, 0);
		CameraManager->SetFOV(_FOV);
	}
}

bool AShooterCharacter::OnIncreaseHealth(float _in)
{
	if (IsAlive() && Health<GetMaxHealth())
	{
		Health = FMath::Min(Health + _in, (float)GetMaxHealth());
		return true;
	}
	return false;
}

bool AShooterCharacter::OnGetWeapon(TSubclassOf<AWeapon> NewWeaponClass)
{
	AShooterPlayerController* MyController = Cast<AShooterPlayerController>(GetController());
	if (MyController && WeaponSysCom && WeaponSysCom->OnGetWeapon(NewWeaponClass))
	{
		return true;
	}
	return false;
}

bool AShooterCharacter::OnGetClip(int32 Amount , TSubclassOf<AWeapon> WeaponClass)
{
	if (WeaponSysCom && WeaponSysCom->OnGetClip(Amount , WeaponClass))
	{
		return true;
	}
	return false;
}

UPickUpTip* AShooterCharacter::GetPickUpTipWidget() const
{
	return PickUpTip;
}

void AShooterCharacter::SetMainWidget(UMainWidget* widget)
{
	if (widget)
	{
		MainWidget = widget;
	}
}

UMainWidget* AShooterCharacter::GetMainWidget()
{
	return MainWidget;
}

void AShooterCharacter::AddDoorKeyAmout()
{
	DoorKeyAmount++;
	if (MainWidget)
	{
		MainWidget->UpdataSetDoorKeyAmout(DoorKeyAmount);
	}
}

void AShooterCharacter::SubtractDoorKeyAmout()
{
	if (DoorKeyAmount>0)
	{
		DoorKeyAmount--;
		if (MainWidget)
		{
			MainWidget->UpdataSetDoorKeyAmout(DoorKeyAmount);
		}
	}
}

int32 AShooterCharacter::GetDoorKeyAmout()
{
	return DoorKeyAmount;
}