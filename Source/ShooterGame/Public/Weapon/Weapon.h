// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

class AShooterCharacter;
class UAudioComponent;
class USoundCue;
class UParticleSystem;
class UAnimMontage;

namespace WeaponState
{
	UENUM()
	enum Type
	{
		Idle,
		Firing,
		Reloading,
		Equiping
	};
}

USTRUCT()
struct FWeaponData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditDefaultsOnly, category = WeaponData)
	int32 AmmoPerClip;	//��������

	UPROPERTY(EditDefaultsOnly, category = WeaponData)
	int32 ClipAmount;	//��������

	UPROPERTY(EditDefaultsOnly , category = WeaponData)
	float FireCD;		//������

	FWeaponData()
	{
		FireCD = 1.f;
		AmmoPerClip = 10;
		ClipAmount = 5;
	}
};

USTRUCT()
struct FSniperWeaponData
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditDefaultsOnly, category = sniperWeaponData)
		float WeaponRange;

	UPROPERTY(EditDefaultsOnly, category = sniperWeaponData)
		TSubclassOf<UDamageType> DamageType;

	UPROPERTY(EditDefaultsOnly, category = sniperWeaponData)
		int32 damage;
};

USTRUCT()
struct FWeaponAnim
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditDefaultsOnly, category = Animation)
	UAnimMontage* AnimP;

};

UCLASS()
class SHOOTERGAME_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

	void AttachWeaponToPawn();

	void DetachWeaponFromPawn();

	void SetPawnOwner(AShooterCharacter* Pawn);

	virtual void BeginPlay() override;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	AShooterCharacter* PawnOwner;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* Mesh1P;

	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	FText WeaponName;

	//�����ӵ���SocketName
	UPROPERTY(EditDefaultsOnly , Category = Weapon)
	FName MuzzleAttachPoint;
	
	//��ǹ��Ч
	UPROPERTY(EditDefaultsOnly, Category = Sound)
	USoundCue* FireSound;

	//��ǹ��Ч
	UPROPERTY(EditDefaultsOnly, Category = Sound)
	USoundCue* EquipSound;

	//��ǹ��Ч
	UPROPERTY(EditDefaultsOnly, Category = Sound)
	USoundCue* ReloadSound;

	//��ǹ��Ч
	UPROPERTY(EditDefaultsOnly, Category = Effect)
	UParticleSystem* FireEffect;

	//�ӵ�����
	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	int32 AmmoCount;

	//��������
	UPROPERTY(VisibleAnywhere, Category = Weapon)
	int32 ClipCount;

	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	FWeaponData WeaponConfig;

	bool bPlayingFiringAnim;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = Icon)
	UTexture2D* WeaponIcon;
	 
	UPROPERTY(EditDefaultsOnly, Category = Animation)
	FWeaponAnim FireAnim;

	UPROPERTY(EditDefaultsOnly, Category = Animation)
	FWeaponAnim EquipAnim;

	UPROPERTY(EditDefaultsOnly, Category = Animation)
	FWeaponAnim ReloadAnim;

	UPROPERTY(EditDefaultsOnly, Category = Effect)
	TSubclassOf<class UCameraShake> FireCameraShake;

	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	FName WeaponAttachPoint;

public:	
	//��ȡ��׼���� //�ӵ����䷽�� //����������
	FVector GetAdjustAim();

	FHitResult WeaponTrace(FVector TraceFrom, FVector TraceTo) const;

	//----------������--------------
	virtual void OnStartFire();

	virtual void OnStopFire();

	virtual void OnReload();

	virtual void OnEquip();

	bool CanReload();

	virtual void SimulateWeaponFire();

	virtual void FireWeapon();

	virtual void OnStartTarget();

	virtual void OnStopTarget();

	virtual void OnGetClip(int32 Amount);

	UAudioComponent* PlayWeaponSound(USoundCue* FireSound);

	FVector GetMuzzleLocation();

	float PlayMontageAnimation(const FWeaponAnim Animation);

	void StopMontageAnimation(const FWeaponAnim Animation);

	USkeletalMeshComponent* GetMesh1P();

	//��ȡ�ӵ�����
	int32 GetCurrentAmmoAmount() const;

	int32 GetMaxAmmoAmount() const;

	int32 GetClipAmount() const;

	float GetFireCD();

	UAnimMontage* GetEquipAnim();

	USoundCue* GetEquipSound();

	UAnimMontage* GetReloadAnim();

	USoundCue* GetReloadSound();

};
