// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShooterImpactEffect.generated.h"


class UParticleSystem;
class USoundCue;
class UMaterial;

//����
USTRUCT()
struct FDecalData
{
	GENERATED_USTRUCT_BODY()

		/** material */
		UPROPERTY(EditDefaultsOnly, Category = Decal)
		UMaterial* DecalMaterial;

	/** quad size (width & height) */
	UPROPERTY(EditDefaultsOnly, Category = Decal)
		float DecalSize;

	/** lifespan */
	UPROPERTY(EditDefaultsOnly, Category = Decal)
		float LifeSpan;

	/** defaults */
	FDecalData()
		: DecalSize(256.f)
		, LifeSpan(10.f)
	{
	}
};


UCLASS()
class SHOOTERGAME_API AShooterImpactEffect : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShooterImpactEffect();

	virtual void PostInitializeComponents() override;

	void SetHitResult(const FHitResult& _HitResult);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FHitResult HitResult;
	//--------------------------��������Ч-��------------------------
	//Ĭ�� 
	UPROPERTY(EditDefaultsOnly, Category = Particle)
		UParticleSystem* DefaultFX;

	//������
	UPROPERTY(EditDefaultsOnly, Category = Particle)
		UParticleSystem* ConcreteFX;

	//����
	UPROPERTY(EditDefaultsOnly, Category = Particle)
		UParticleSystem* DirtFX;

	//ˮ
	UPROPERTY(EditDefaultsOnly, Category = Particle)
		UParticleSystem* WaterFX;

	//����
	UPROPERTY(EditDefaultsOnly, Category = Particle)
		UParticleSystem* MetalFX;

	//ľͷ
	UPROPERTY(EditDefaultsOnly, Category = Particle)
		UParticleSystem* WoodFX;

	//��
	UPROPERTY(EditDefaultsOnly, Category = Particle)
		UParticleSystem* GrassFX;
	//����
	UPROPERTY(EditDefaultsOnly, Category = Particle)
		UParticleSystem* GlassFX;

	//����
	UPROPERTY(EditDefaultsOnly, Category = Particle)
		UParticleSystem* FleshFX;

	//----------------------����ǹ��Ч��-------------------------
	UPROPERTY(EditDefaultsOnly, Category = Sound)
		USoundCue* DefaultSound;

	//������
	UPROPERTY(EditDefaultsOnly, Category = Sound)
		USoundCue* ConcreteSound;

	//����
	UPROPERTY(EditDefaultsOnly, Category = Sound)
		USoundCue* DirtSound;

	//ˮ
	UPROPERTY(EditDefaultsOnly, Category = Sound)
		USoundCue* WaterSound;

	//����
	UPROPERTY(EditDefaultsOnly, Category = Sound)
		USoundCue* MetalSound;

	//ľͷ
	UPROPERTY(EditDefaultsOnly, Category = Sound)
		USoundCue* WoodSound;

	//��
	UPROPERTY(EditDefaultsOnly, Category = Sound)
		USoundCue* GrassSound;
	//����
	UPROPERTY(EditDefaultsOnly, Category = Sound)
		USoundCue* GlassSound;

	//����
	UPROPERTY(EditDefaultsOnly, Category = Sound)
		USoundCue* FleshSound;

	//--------------------��������---------------------------------
	UPROPERTY(EditDefaultsOnly, Category = Defaults)
	struct FDecalData DefaultDecal;

public:	

	UParticleSystem* GetImpactEffect(TEnumAsByte<EPhysicalSurface> SurfaceType) const;
	
	USoundCue* GetImpactSount(TEnumAsByte<EPhysicalSurface> SurfaceType) const;



	
	
};
