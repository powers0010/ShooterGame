// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef SHOOTERGAME_ShooterProjectile_generated_h
#error "ShooterProjectile.generated.h already included, missing '#pragma once' in ShooterProjectile.h"
#endif
#define SHOOTERGAME_ShooterProjectile_generated_h

#define ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnImpact) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnImpact(Z_Param_Out_ImpactResult); \
		P_NATIVE_END; \
	}


#define ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnImpact) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ImpactResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnImpact(Z_Param_Out_ImpactResult); \
		P_NATIVE_END; \
	}


#define ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterProjectile(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AShooterProjectile(); \
public: \
	DECLARE_CLASS(AShooterProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAShooterProjectile(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AShooterProjectile(); \
public: \
	DECLARE_CLASS(AShooterProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterProjectile(AShooterProjectile&&); \
	NO_API AShooterProjectile(const AShooterProjectile&); \
public:


#define ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterProjectile(AShooterProjectile&&); \
	NO_API AShooterProjectile(const AShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterProjectile)


#define ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AShooterProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComp() { return STRUCT_OFFSET(AShooterProjectile, ProjectileMovementComp); } \
	FORCEINLINE static uint32 __PPO__ParticleSystemCom() { return STRUCT_OFFSET(AShooterProjectile, ParticleSystemCom); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffectClass() { return STRUCT_OFFSET(AShooterProjectile, ExplosionEffectClass); }


#define ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_14_PROLOG
#define ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Weapon_ShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
