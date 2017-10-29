// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_ShooterGameMode_generated_h
#error "ShooterGameMode.generated.h already included, missing '#pragma once' in ShooterGameMode.h"
#endif
#define SHOOTERGAME_ShooterGameMode_generated_h

#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_RPC_WRAPPERS
#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterGameMode(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AShooterGameMode(); \
public: \
	DECLARE_CLASS(AShooterGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAShooterGameMode(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AShooterGameMode(); \
public: \
	DECLARE_CLASS(AShooterGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterGameMode(AShooterGameMode&&); \
	NO_API AShooterGameMode(const AShooterGameMode&); \
public:


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterGameMode(AShooterGameMode&&); \
	NO_API AShooterGameMode(const AShooterGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterGameMode)


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameRoundTime() { return STRUCT_OFFSET(AShooterGameMode, GameRoundTime); }


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_16_PROLOG
#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Online_ShooterGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
