// Fill out your copyright notice in the Description page of Project Settings.

#include "Weapon.h"
#include "ShooterCharacter.h"
#include "ShooterPlayerController.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "ExplosionEffect.h"


// Sets default values
AWeapon::AWeapon()
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
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
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

void AWeapon::SetPawnOwner(AShooterCharacter* Pawn)
{
	if (Pawn)
	{
		PawnOwner = Pawn;
	}
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
	UE_LOG(LogTemp, Warning, TEXT("AimDir: %s"), *AimDir.ToString());
	return AimDir;
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
	SimulateWeaponFire();
	FireWeapon();
}
void AWeapon::SimulateWeaponFire()
{
	if (FireSound)
	{
		PlayWeaponSound(FireSound);
	}

	
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


