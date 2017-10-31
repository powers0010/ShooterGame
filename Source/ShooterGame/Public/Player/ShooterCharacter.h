// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"


class AWeapon;


UCLASS()
class SHOOTERGAME_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//更新相机位置
	void OnCameraUpdata(const FVector& CameraLocation,const FRotator& CameraRotation);

	//初始化组件 调用
	virtual void PostInitializeComponents();

	//伤害接口
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;


	//控制输入
	void MoveForward(float value);
	void MoveRight(float value);
	void OnStartTarget();
	void OnEndTarget();
	void OnStartFire();
	void OnStopFire();
	void OnReload();
	void OnEquip();
	
	//获取 变量的接口
	USkeletalMeshComponent* GetMesh1P();

	FName GetWeaponAttachPoint() const;

	UFUNCTION(BlueprintCallable , Category = Weapon)
	FRotator GetAimOffsets() const;

	UFUNCTION(BlueprintCallable, Category = Weapon)
		bool GetIsTargeting() const;
	UFUNCTION(BlueprintCallable, Category = Weapon)
		void SetIsTargeting(bool NewIsTarget);

	int32 GetCurHealth() const;
	int32 GetMaxHealth() const;

	AWeapon* GetCurrentWeapon();

	bool CanFire();

	bool IsAlive();
protected:

	/*UPROPERTY(EditAnywhere, category = "Camera")*/
// 	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
// 		class UCameraComponent* Camera1P;

	/** The main skeletal mesh associated with this Character (optional sub-object). */
	UPROPERTY(Category = Character, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
//	UPROPERTY(EditDefaultsOnly, Category = Character)
		class USkeletalMeshComponent* Mesh1P;

	UPROPERTY(EditDefaultsOnly , Category = Weapon )
		TSubclassOf<AWeapon> WeaponClass;
// 
 	UPROPERTY(VisibleAnywhere, Category = Weapon)
 		AWeapon* CurrentWeapon;

	UPROPERTY(EditDefaultsOnly, Category = Inventory)
		TArray<TSubclassOf<AWeapon>> DefaultInventorySystem;

	UPROPERTY(Transient)
		TArray<AWeapon*> Inventory;

	void SpawnDefaultInventory();

	void AddWeapon(AWeapon* NewWeapon);

	void EquipWeapon(AWeapon* Weapon);

	void SetCurrentWeapon(AWeapon* NewWeapon, AWeapon* LastWeapon);

	UPROPERTY(EditDefaultsOnly, Category = Weapon)
		FName WeaponAttachPoint;

	UPROPERTY(VisibleAnywhere, Category = Weapon)
		bool bIsTargeting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
		float Health;
};
