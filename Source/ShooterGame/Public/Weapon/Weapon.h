// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

class AShooterCharacter;
class UAudioComponent;
class USoundCue;

UCLASS()
class SHOOTERGAME_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

	void AttachWeaponToPawn();

	void SetPawnOwner(AShooterCharacter* Pawn);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class USkeletalMeshComponent* Mesh1P;

	//�����ӵ���SocketName
	UPROPERTY(EditDefaultsOnly , Category = Weapon)
		FName MuzzleAttachPoint;
	
	//��ǹ��Ч
	UPROPERTY(EditDefaultsOnly, Category = Sound)
		USoundCue* FireSound;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//��ȡ��׼���� //�ӵ����䷽�� //����������
	FVector GetAdjustAim();

	//����  //����ӿ�
	void StartFire();
	virtual void SimulateWeaponFire();
	virtual void FireWeapon();
	UAudioComponent* PlayWeaponSound(USoundCue* FireSound);


	//��ȡ�ӵ� ����λ��
	FVector GetMuzzleLocation();


private:

	AShooterCharacter* PawnOwner;
};
