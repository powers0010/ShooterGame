// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_Weapon_machine_generated_h
#error "Weapon_machine.generated.h already included, missing '#pragma once' in Weapon_machine.h"
#endif
#define SHOOTERGAME_Weapon_machine_generated_h

#define ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_RPC_WRAPPERS
#define ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon_machine(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AWeapon_machine(); \
public: \
	DECLARE_CLASS(AWeapon_machine, AWeapon, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_machine) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon_machine(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AWeapon_machine(); \
public: \
	DECLARE_CLASS(AWeapon_machine, AWeapon, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AWeapon_machine) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon_machine(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon_machine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_machine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_machine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_machine(AWeapon_machine&&); \
	NO_API AWeapon_machine(const AWeapon_machine&); \
public:


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon_machine(AWeapon_machine&&); \
	NO_API AWeapon_machine(const AWeapon_machine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon_machine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon_machine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon_machine)


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FireAudioCom() { return STRUCT_OFFSET(AWeapon_machine, FireAudioCom); } \
	FORCEINLINE static uint32 __PPO__FireParticleCom() { return STRUCT_OFFSET(AWeapon_machine, FireParticleCom); } \
	FORCEINLINE static uint32 __PPO__WeaponRange() { return STRUCT_OFFSET(AWeapon_machine, WeaponRange); } \
	FORCEINLINE static uint32 __PPO__ImpactEffectActor() { return STRUCT_OFFSET(AWeapon_machine, ImpactEffectActor); } \
	FORCEINLINE static uint32 __PPO__SniperWeaponData() { return STRUCT_OFFSET(AWeapon_machine, SniperWeaponData); }


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_12_PROLOG
#define ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_RPC_WRAPPERS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_INCLASS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_INCLASS_NO_PURE_DECLS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_2_20171101_Source_ShooterGame_Public_Weapon_Weapon_machine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
