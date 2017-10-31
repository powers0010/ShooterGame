// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapon/Weapon_Instant.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Instant() {}
// Cross Module References
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInstantWeaponData();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AWeapon_Instant_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AWeapon_Instant();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AWeapon();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterImpactEffect_NoRegister();
// End Cross Module References
class UScriptStruct* FInstantWeaponData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FInstantWeaponData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstantWeaponData, Z_Construct_UPackage__Script_ShooterGame(), TEXT("InstantWeaponData"), sizeof(FInstantWeaponData), Get_Z_Construct_UScriptStruct_FInstantWeaponData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInstantWeaponData(FInstantWeaponData::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("InstantWeaponData"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFInstantWeaponData
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFInstantWeaponData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InstantWeaponData")),new UScriptStruct::TCppStructOps<FInstantWeaponData>);
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFInstantWeaponData;
	UScriptStruct* Z_Construct_UScriptStruct_FInstantWeaponData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		extern uint32 Get_Z_Construct_UScriptStruct_FInstantWeaponData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InstantWeaponData"), sizeof(FInstantWeaponData), Get_Z_Construct_UScriptStruct_FInstantWeaponData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InstantWeaponData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FInstantWeaponData>, EStructFlags(0x00000001));
			UProperty* NewProp_damage = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("damage"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(damage, FInstantWeaponData), 0x0010000000010001);
			UProperty* NewProp_DamageType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DamageType"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(DamageType, FInstantWeaponData), 0x0014000000010001, Z_Construct_UClass_UDamageType_NoRegister(), Z_Construct_UClass_UClass());
			UProperty* NewProp_WeaponRange = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WeaponRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WeaponRange, FInstantWeaponData), 0x0010000000010001);
			UProperty* NewProp_WeaponSpreed = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WeaponSpreed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WeaponSpreed, FInstantWeaponData), 0x0010000000010001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Instant.h"));
			MetaData->SetValue(NewProp_damage, TEXT("Category"), TEXT("InstantWeaponData"));
			MetaData->SetValue(NewProp_damage, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Instant.h"));
			MetaData->SetValue(NewProp_DamageType, TEXT("Category"), TEXT("InstantWeaponData"));
			MetaData->SetValue(NewProp_DamageType, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Instant.h"));
			MetaData->SetValue(NewProp_WeaponRange, TEXT("Category"), TEXT("InstantWeaponData"));
			MetaData->SetValue(NewProp_WeaponRange, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Instant.h"));
			MetaData->SetValue(NewProp_WeaponSpreed, TEXT("Category"), TEXT("InstantWeaponData"));
			MetaData->SetValue(NewProp_WeaponSpreed, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Instant.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInstantWeaponData_CRC() { return 3088416937U; }
	void AWeapon_Instant::StaticRegisterNativesAWeapon_Instant()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_Instant_NoRegister()
	{
		return AWeapon_Instant::StaticClass();
	}
	UClass* Z_Construct_UClass_AWeapon_Instant()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AWeapon();
			Z_Construct_UPackage__Script_ShooterGame();
			OuterClass = AWeapon_Instant::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_ImpactEffectActor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ImpactEffectActor"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ImpactEffectActor, AWeapon_Instant), 0x0024080000010001, Z_Construct_UClass_AShooterImpactEffect_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_TrailTargetParam = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TrailTargetParam"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(TrailTargetParam, AWeapon_Instant), 0x0020080000010001);
				UProperty* NewProp_InstantWeaponConfig = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("InstantWeaponConfig"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(InstantWeaponConfig, AWeapon_Instant), 0x0020080000010001, Z_Construct_UScriptStruct_FInstantWeaponData());
				static TCppClassTypeInfo<TCppClassTypeTraits<AWeapon_Instant> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Weapon/Weapon_Instant.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Instant.h"));
				MetaData->SetValue(NewProp_ImpactEffectActor, TEXT("Category"), TEXT("Impact"));
				MetaData->SetValue(NewProp_ImpactEffectActor, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Instant.h"));
				MetaData->SetValue(NewProp_TrailTargetParam, TEXT("Category"), TEXT("Particles"));
				MetaData->SetValue(NewProp_TrailTargetParam, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Instant.h"));
				MetaData->SetValue(NewProp_InstantWeaponConfig, TEXT("Category"), TEXT("InstantWeaponData"));
				MetaData->SetValue(NewProp_InstantWeaponConfig, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Instant.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_Instant, 390716144);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_Instant(Z_Construct_UClass_AWeapon_Instant, &AWeapon_Instant::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AWeapon_Instant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Instant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
