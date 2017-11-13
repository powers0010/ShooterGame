// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SHOOTERGAME_PickUpItem_generated_h
#error "PickUpItem.generated.h already included, missing '#pragma once' in PickUpItem.h"
#endif
#define SHOOTERGAME_PickUpItem_generated_h

#define ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCollisionBoxBeginOverLap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnCollisionBoxBeginOverLap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCollisionBoxBeginOverLap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnCollisionBoxBeginOverLap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickUpItem(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_APickUpItem(); \
public: \
	DECLARE_CLASS(APickUpItem, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(APickUpItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_INCLASS \
private: \
	static void StaticRegisterNativesAPickUpItem(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_APickUpItem(); \
public: \
	DECLARE_CLASS(APickUpItem, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(APickUpItem) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickUpItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickUpItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUpItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUpItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUpItem(APickUpItem&&); \
	NO_API APickUpItem(const APickUpItem&); \
public:


#define ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickUpItem(APickUpItem&&); \
	NO_API APickUpItem(const APickUpItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickUpItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickUpItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickUpItem)


#define ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(APickUpItem, Mesh); } \
	FORCEINLINE static uint32 __PPO__CollisionBox() { return STRUCT_OFFSET(APickUpItem, CollisionBox); } \
	FORCEINLINE static uint32 __PPO__PickUpWidget() { return STRUCT_OFFSET(APickUpItem, PickUpWidget); } \
	FORCEINLINE static uint32 __PPO__PickUpParticleCom() { return STRUCT_OFFSET(APickUpItem, PickUpParticleCom); } \
	FORCEINLINE static uint32 __PPO__ActiveEffect() { return STRUCT_OFFSET(APickUpItem, ActiveEffect); } \
	FORCEINLINE static uint32 __PPO__RespawningEffect() { return STRUCT_OFFSET(APickUpItem, RespawningEffect); } \
	FORCEINLINE static uint32 __PPO__PickupSound() { return STRUCT_OFFSET(APickUpItem, PickupSound); } \
	FORCEINLINE static uint32 __PPO__RespawnSound() { return STRUCT_OFFSET(APickUpItem, RespawnSound); } \
	FORCEINLINE static uint32 __PPO__RespawnTime() { return STRUCT_OFFSET(APickUpItem, RespawnTime); } \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(APickUpItem, bIsActive); } \
	FORCEINLINE static uint32 __PPO__bCanRespawn() { return STRUCT_OFFSET(APickUpItem, bCanRespawn); } \
	FORCEINLINE static uint32 __PPO__ItemName() { return STRUCT_OFFSET(APickUpItem, ItemName); } \
	FORCEINLINE static uint32 __PPO__ItemDescribe() { return STRUCT_OFFSET(APickUpItem, ItemDescribe); } \
	FORCEINLINE static uint32 __PPO__FailedToPickUp() { return STRUCT_OFFSET(APickUpItem, FailedToPickUp); }


#define ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_40_PROLOG
#define ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_RPC_WRAPPERS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_INCLASS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_INCLASS_NO_PURE_DECLS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_2_20171101_Source_ShooterGame_Public_PickUp_PickUpItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
