// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EbehaviorType : uint8;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class APawn;
class UBoxComponent;
#ifdef SHOOTERGAME_Monster_Zombie_generated_h
#error "Monster_Zombie.generated.h already included, missing '#pragma once' in Monster_Zombie.h"
#endif
#define SHOOTERGAME_Monster_Zombie_generated_h

#define ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIsAttacking) \
	{ \
		P_GET_UBOOL(Z_Param_newbool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIsAttacking(Z_Param_newbool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBehaviorType) \
	{ \
		P_GET_ENUM(EbehaviorType,Z_Param_newtype); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBehaviorType(EbehaviorType(Z_Param_newtype)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlapForHandleBox) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlapForHandleBox(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndOverLapForAttackRange) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndOverLapForAttackRange(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlapForAttackRange) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlapForAttackRange(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSeeingPawn) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSeeingPawn(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitHandBox) \
	{ \
		P_GET_OBJECT(UBoxComponent,Z_Param_left); \
		P_GET_OBJECT(UBoxComponent,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitHandBox(Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	}


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIsAttacking) \
	{ \
		P_GET_UBOOL(Z_Param_newbool); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetIsAttacking(Z_Param_newbool); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBehaviorType) \
	{ \
		P_GET_ENUM(EbehaviorType,Z_Param_newtype); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBehaviorType(EbehaviorType(Z_Param_newtype)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlapForHandleBox) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlapForHandleBox(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEndOverLapForAttackRange) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnEndOverLapForAttackRange(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnBeginOverlapForAttackRange) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnBeginOverlapForAttackRange(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSeeingPawn) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Pawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnSeeingPawn(Z_Param_Pawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitHandBox) \
	{ \
		P_GET_OBJECT(UBoxComponent,Z_Param_left); \
		P_GET_OBJECT(UBoxComponent,Z_Param_right); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitHandBox(Z_Param_left,Z_Param_right); \
		P_NATIVE_END; \
	}


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonster_Zombie(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AMonster_Zombie(); \
public: \
	DECLARE_CLASS(AMonster_Zombie, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AMonster_Zombie) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_INCLASS \
private: \
	static void StaticRegisterNativesAMonster_Zombie(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_AMonster_Zombie(); \
public: \
	DECLARE_CLASS(AMonster_Zombie, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AMonster_Zombie) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonster_Zombie(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonster_Zombie) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster_Zombie); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster_Zombie); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster_Zombie(AMonster_Zombie&&); \
	NO_API AMonster_Zombie(const AMonster_Zombie&); \
public:


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster_Zombie(AMonster_Zombie&&); \
	NO_API AMonster_Zombie(const AMonster_Zombie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster_Zombie); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster_Zombie); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonster_Zombie)


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSensingCom() { return STRUCT_OFFSET(AMonster_Zombie, PawnSensingCom); } \
	FORCEINLINE static uint32 __PPO__AttackRange() { return STRUCT_OFFSET(AMonster_Zombie, AttackRange); } \
	FORCEINLINE static uint32 __PPO__LefthandBox() { return STRUCT_OFFSET(AMonster_Zombie, LefthandBox); } \
	FORCEINLINE static uint32 __PPO__RighthandBox() { return STRUCT_OFFSET(AMonster_Zombie, RighthandBox); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AMonster_Zombie, Health); } \
	FORCEINLINE static uint32 __PPO__AttackAnim() { return STRUCT_OFFSET(AMonster_Zombie, AttackAnim); } \
	FORCEINLINE static uint32 __PPO__DieAnim() { return STRUCT_OFFSET(AMonster_Zombie, DieAnim); } \
	FORCEINLINE static uint32 __PPO__HitAnim_Right() { return STRUCT_OFFSET(AMonster_Zombie, HitAnim_Right); } \
	FORCEINLINE static uint32 __PPO__HitAnim_Left() { return STRUCT_OFFSET(AMonster_Zombie, HitAnim_Left); } \
	FORCEINLINE static uint32 __PPO__HitAnim_Font() { return STRUCT_OFFSET(AMonster_Zombie, HitAnim_Font); } \
	FORCEINLINE static uint32 __PPO__HitAnim_Back() { return STRUCT_OFFSET(AMonster_Zombie, HitAnim_Back); } \
	FORCEINLINE static uint32 __PPO__SittingToIdle() { return STRUCT_OFFSET(AMonster_Zombie, SittingToIdle); } \
	FORCEINLINE static uint32 __PPO__EattingToIdle() { return STRUCT_OFFSET(AMonster_Zombie, EattingToIdle); } \
	FORCEINLINE static uint32 __PPO__LayingToIdle() { return STRUCT_OFFSET(AMonster_Zombie, LayingToIdle); } \
	FORCEINLINE static uint32 __PPO__ReachingToIdle() { return STRUCT_OFFSET(AMonster_Zombie, ReachingToIdle); } \
	FORCEINLINE static uint32 __PPO__DamageEnoughToReact() { return STRUCT_OFFSET(AMonster_Zombie, DamageEnoughToReact); } \
	FORCEINLINE static uint32 __PPO__DamagePoint() { return STRUCT_OFFSET(AMonster_Zombie, DamagePoint); } \
	FORCEINLINE static uint32 __PPO__ZombieBehavior() { return STRUCT_OFFSET(AMonster_Zombie, ZombieBehavior); } \
	FORCEINLINE static uint32 __PPO__IdleType() { return STRUCT_OFFSET(AMonster_Zombie, IdleType); } \
	FORCEINLINE static uint32 __PPO__BehaviorType() { return STRUCT_OFFSET(AMonster_Zombie, BehaviorType); } \
	FORCEINLINE static uint32 __PPO__MoveRadiu() { return STRUCT_OFFSET(AMonster_Zombie, MoveRadiu); }


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_38_PROLOG
#define ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_RPC_WRAPPERS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_INCLASS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_INCLASS_NO_PURE_DECLS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_2_20171101_Source_ShooterGame_Public_Monster_Monster_Zombie_h


#define FOREACH_ENUM_EBEHAVIORTYPE(op) \
	op(EbehaviorType::Idle) \
	op(EbehaviorType::IdleToMove) \
	op(EbehaviorType::MoveAround) \
	op(EbehaviorType::Chase) \
	op(EbehaviorType::Attack) \
	op(EbehaviorType::Died) 
#define FOREACH_ENUM_EIDLETYPE(op) \
	op(EIdleType::Sitting) \
	op(EIdleType::Eatting) \
	op(EIdleType::Laying) \
	op(EIdleType::Reaching) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
