// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_Weapon_Instant_generated_h
#error "Weapon_Instant.generated.h already included, missing '#pragma once' in Weapon_Instant.h"
#endif
#define SHOOTERGAME_Weapon_Instant_generated_h

#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_19_GENERATED_BODY \
	friend SHOOTERGAME_API class UScriptStruct* Z_Construct_UScriptStruct_FInstantWeaponData(); \
	SHOOTERGAME_API static class UScriptStruct* StaticStruct();


#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_RPC_WRAPPERS
#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon_Instant(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AWeapon_Instant(); \
public: \
	DECLARE_CLASS(AWeapon_Instant, AWeapon, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_Instant) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon_Instant(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AWeapon_Instant(); \
public: \
	DECLARE_CLASS(AWeapon_Instant, AWeapon, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_Instant) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon_Instant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon_Instant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_Instant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_Instant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_Instant(AWeapon_Instant&&); \
	NO_API AWeapon_Instant(const AWeapon_Instant&); \
public:


#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon_Instant() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_Instant(AWeapon_Instant&&); \
	NO_API AWeapon_Instant(const AWeapon_Instant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_Instant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_Instant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon_Instant)


#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InstantWeaponConfig() { return STRUCT_OFFSET(AWeapon_Instant, InstantWeaponConfig); } \
	FORCEINLINE static uint32 __PPO__TrailTargetParam() { return STRUCT_OFFSET(AWeapon_Instant, TrailTargetParam); } \
	FORCEINLINE static uint32 __PPO__ImpactEffectActor() { return STRUCT_OFFSET(AWeapon_Instant, ImpactEffectActor); }


#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_35_PROLOG
#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_Instant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
