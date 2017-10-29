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

	AShooterCharacter* PawnOwner;

	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* Mesh1P;

	//生成子弹的SocketName
	UPROPERTY(EditDefaultsOnly , Category = Weapon)
	FName MuzzleAttachPoint;
	
	//开枪音效
	UPROPERTY(EditDefaultsOnly, Category = Sound)
	USoundCue* FireSound;

	//子弹数量
	UPROPERTY(EditDefaultsOnly, Category = Weapon)
	int32 AmmoCount;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//获取瞄准方向 //子弹发射方向 //控制器方向
	FVector GetAdjustAim();

	//----------【开火】--------------
	void StartFire();
	virtual void SimulateWeaponFire();
	virtual void FireWeapon();
	UAudioComponent* PlayWeaponSound(USoundCue* FireSound);
	//获取子弹 生成位置
	FVector GetMuzzleLocation();
	
	//获取子弹数量
	int32 GetCurrentAmmoAmount();
	int32 GetMaxAmmoAmount();
};
