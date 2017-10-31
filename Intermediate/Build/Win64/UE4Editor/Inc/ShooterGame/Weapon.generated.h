// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define SHOOTERGAME_Weapon_generated_h

#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_29_GENERATED_BODY \
	friend SHOOTERGAME_API class UScriptStruct* Z_Construct_UScriptStruct_FWeaponData(); \
	SHOOTERGAME_API static class UScriptStruct* StaticStruct();


#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_RPC_WRAPPERS
#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AWeapon(); \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AWeapon(); \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AWeapon, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__MuzzleAttachPoint() { return STRUCT_OFFSET(AWeapon, MuzzleAttachPoint); } \
	FORCEINLINE static uint32 __PPO__FireSound() { return STRUCT_OFFSET(AWeapon, FireSound); } \
	FORCEINLINE static uint32 __PPO__EquipSound() { return STRUCT_OFFSET(AWeapon, EquipSound); } \
	FORCEINLINE static uint32 __PPO__ReloadSound() { return STRUCT_OFFSET(AWeapon, ReloadSound); } \
	FORCEINLINE static uint32 __PPO__FireEffect() { return STRUCT_OFFSET(AWeapon, FireEffect); } \
	FORCEINLINE static uint32 __PPO__AmmoCount() { return STRUCT_OFFSET(AWeapon, AmmoCount); } \
	FORCEINLINE static uint32 __PPO__ClipCount() { return STRUCT_OFFSET(AWeapon, ClipCount); } \
	FORCEINLINE static uint32 __PPO__WeaponConfig() { return STRUCT_OFFSET(AWeapon, WeaponConfig); }


#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_48_PROLOG
#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Weapon_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
