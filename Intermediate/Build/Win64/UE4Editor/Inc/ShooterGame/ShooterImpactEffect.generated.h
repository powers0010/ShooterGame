// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterImpactEffect_generated_h
#error "ShooterImpactEffect.generated.h already included, missing '#pragma once' in ShooterImpactEffect.h"
#endif
#define SHOOTERGAME_ShooterImpactEffect_generated_h

#define ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_18_GENERATED_BODY \
	friend SHOOTERGAME_API class UScriptStruct* Z_Construct_UScriptStruct_FDecalData(); \
	SHOOTERGAME_API static class UScriptStruct* StaticStruct();


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_RPC_WRAPPERS
#define ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterImpactEffect(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AShooterImpactEffect(); \
public: \
	DECLARE_CLASS(AShooterImpactEffect, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterImpactEffect) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_INCLASS \
private: \
	static void StaticRegisterNativesAShooterImpactEffect(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AShooterImpactEffect(); \
public: \
	DECLARE_CLASS(AShooterImpactEffect, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterImpactEffect) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterImpactEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterImpactEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterImpactEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterImpactEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterImpactEffect(AShooterImpactEffect&&); \
	NO_API AShooterImpactEffect(const AShooterImpactEffect&); \
public:


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterImpactEffect(AShooterImpactEffect&&); \
	NO_API AShooterImpactEffect(const AShooterImpactEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterImpactEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterImpactEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterImpactEffect)


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultFX() { return STRUCT_OFFSET(AShooterImpactEffect, DefaultFX); } \
	FORCEINLINE static uint32 __PPO__ConcreteFX() { return STRUCT_OFFSET(AShooterImpactEffect, ConcreteFX); } \
	FORCEINLINE static uint32 __PPO__DirtFX() { return STRUCT_OFFSET(AShooterImpactEffect, DirtFX); } \
	FORCEINLINE static uint32 __PPO__WaterFX() { return STRUCT_OFFSET(AShooterImpactEffect, WaterFX); } \
	FORCEINLINE static uint32 __PPO__MetalFX() { return STRUCT_OFFSET(AShooterImpactEffect, MetalFX); } \
	FORCEINLINE static uint32 __PPO__WoodFX() { return STRUCT_OFFSET(AShooterImpactEffect, WoodFX); } \
	FORCEINLINE static uint32 __PPO__GrassFX() { return STRUCT_OFFSET(AShooterImpactEffect, GrassFX); } \
	FORCEINLINE static uint32 __PPO__GlassFX() { return STRUCT_OFFSET(AShooterImpactEffect, GlassFX); } \
	FORCEINLINE static uint32 __PPO__FleshFX() { return STRUCT_OFFSET(AShooterImpactEffect, FleshFX); } \
	FORCEINLINE static uint32 __PPO__DefaultSound() { return STRUCT_OFFSET(AShooterImpactEffect, DefaultSound); } \
	FORCEINLINE static uint32 __PPO__ConcreteSound() { return STRUCT_OFFSET(AShooterImpactEffect, ConcreteSound); } \
	FORCEINLINE static uint32 __PPO__DirtSound() { return STRUCT_OFFSET(AShooterImpactEffect, DirtSound); } \
	FORCEINLINE static uint32 __PPO__WaterSound() { return STRUCT_OFFSET(AShooterImpactEffect, WaterSound); } \
	FORCEINLINE static uint32 __PPO__MetalSound() { return STRUCT_OFFSET(AShooterImpactEffect, MetalSound); } \
	FORCEINLINE static uint32 __PPO__WoodSound() { return STRUCT_OFFSET(AShooterImpactEffect, WoodSound); } \
	FORCEINLINE static uint32 __PPO__GrassSound() { return STRUCT_OFFSET(AShooterImpactEffect, GrassSound); } \
	FORCEINLINE static uint32 __PPO__GlassSound() { return STRUCT_OFFSET(AShooterImpactEffect, GlassSound); } \
	FORCEINLINE static uint32 __PPO__FleshSound() { return STRUCT_OFFSET(AShooterImpactEffect, FleshSound); } \
	FORCEINLINE static uint32 __PPO__DefaultDecal() { return STRUCT_OFFSET(AShooterImpactEffect, DefaultDecal); }


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_41_PROLOG
#define ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_RPC_WRAPPERS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_INCLASS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_INCLASS_NO_PURE_DECLS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_2_20171101_Source_ShooterGame_Public_Effects_ShooterImpactEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
