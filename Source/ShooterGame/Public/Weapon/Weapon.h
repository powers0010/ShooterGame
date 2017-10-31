// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

class AShooterCharacter;
class UAudioComponent;
class USoundCue;
class UParticleSystem;

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

	//-----------������״̬�л�״̬���ء�-------------------
	bool bIsEquipped;
	bool bWantToReload;
	bool bWantToFiring;
	bool bWantToEquip;
	bool bReFiring;

	bool CanFire() const;
	bool CanRealod();
	WeaponState::Type CurWeaponState;
	WeaponState::Type PreWeaponState;

	AWeapon* LastWeapon;

	FTimerHandle TimerHandle_OnEquipFinish;
	FTimerHandle TimerHandle_ReloadWeapon;
	FTimerHandle TimerHandle_StopReload;
	FTimerHandle TimerHandle_HandleReFiring;

	void OnEquipFinish();

public:	
	//��ȡ��׼���� //�ӵ����䷽�� //����������
	FVector GetAdjustAim();

	FHitResult WeaponTrace(FVector TraceFrom, FVector TraceTo) const;

	//----------������--------------
	void StartFire();

	void StopFire();

	//����ʵ�ֿ���״̬
	void HandleFiring();

	virtual void SimulateWeaponFire();

	virtual void StopSimulateWeaponFire();

	virtual void FireWeapon();

	UAudioComponent* PlayWeaponSound(USoundCue* FireSound);

	FVector GetMuzzleLocation();

	void OnEquip(const AWeapon* _LastWeapon);

	void OnUnEquip();

	//----------������״̬��
	void CaculateEquipState();
	
	void SetWeaponState(WeaponState::Type NewWeaponState);

	void DependOnCurrentWeaponState();

	void HandleStartFire();

	void HandleEndFire();

	void HandleStartReload();

	void HandleEndReload();

	void HandleStartEquip();

	void HandleEndEquip();
	//��ʼװ���ӵ�
	void StartReload();
	//����װ���ӵ�
	void StopReload();
	//�����ӵ�����
	void ReloadWeapon();

	

	//��ȡ�ӵ�����
	int32 GetCurrentAmmoAmount() const;
	int32 GetMaxAmmoAmount() const;
	int32 GetClipAmount() const;

	WeaponState::Type GetCurrentWeaponState();
};
