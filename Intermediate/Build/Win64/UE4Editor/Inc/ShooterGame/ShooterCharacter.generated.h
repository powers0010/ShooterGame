// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
#ifdef SHOOTERGAME_ShooterCharacter_generated_h
#error "ShooterCharacter.generated.h already included, missing '#pragma once' in ShooterCharacter.h"
#endif
#define SHOOTERGAME_ShooterCharacter_generated_h

#define ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIsTargeting) \
	{ \
		P_GET_UBOOL(Z_Param_NewIsTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIsTargeting(Z_Param_NewIsTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsTargeting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsTargeting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAimOffsets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetAimOffsets(); \
		P_NATIVE_END; \
	}


#define ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIsTargeting) \
	{ \
		P_GET_UBOOL(Z_Param_NewIsTarget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIsTargeting(Z_Param_NewIsTarget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsTargeting) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetIsTargeting(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAimOffsets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=this->GetAimOffsets(); \
		P_NATIVE_END; \
	}


#define ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AShooterCharacter(); \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAShooterCharacter(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AShooterCharacter(); \
public: \
	DECLARE_CLASS(AShooterCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public:


#define ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterCharacter(AShooterCharacter&&); \
	NO_API AShooterCharacter(const AShooterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterCharacter)


#define ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera1P() { return STRUCT_OFFSET(AShooterCharacter, Camera1P); } \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AShooterCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__WeaponClass() { return STRUCT_OFFSET(AShooterCharacter, WeaponClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(AShooterCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachPoint() { return STRUCT_OFFSET(AShooterCharacter, WeaponAttachPoint); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AShooterCharacter, Health); }


#define ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_13_PROLOG
#define ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Player_ShooterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
