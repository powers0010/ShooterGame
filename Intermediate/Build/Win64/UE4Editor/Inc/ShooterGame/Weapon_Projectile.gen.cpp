// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapon/Weapon_Projectile.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Projectile() {}
// Cross Module References
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileWeaponData();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterProjectile_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AWeapon_Projectile_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AWeapon_Projectile();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AWeapon();
// End Cross Module References
class UScriptStruct* FProjectileWeaponData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FProjectileWeaponData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileWeaponData, Z_Construct_UPackage__Script_ShooterGame(), TEXT("ProjectileWeaponData"), sizeof(FProjectileWeaponData), Get_Z_Construct_UScriptStruct_FProjectileWeaponData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProjectileWeaponData(FProjectileWeaponData::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("ProjectileWeaponData"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFProjectileWeaponData
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFProjectileWeaponData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProjectileWeaponData")),new UScriptStruct::TCppStructOps<FProjectileWeaponData>);
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFProjectileWeaponData;
	UScriptStruct* Z_Construct_UScriptStruct_FProjectileWeaponData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		extern uint32 Get_Z_Construct_UScriptStruct_FProjectileWeaponData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProjectileWeaponData"), sizeof(FProjectileWeaponData), Get_Z_Construct_UScriptStruct_FProjectileWeaponData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ProjectileWeaponData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FProjectileWeaponData>, EStructFlags(0x00000001));
			UProperty* NewProp_DamageType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DamageType"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(DamageType, FProjectileWeaponData), 0x0014000000010001, Z_Construct_UClass_UDamageType_NoRegister(), Z_Construct_UClass_UClass());
			UProperty* NewProp_ExplosionRadius = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ExplosionRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ExplosionRadius, FProjectileWeaponData), 0x0010000000010001);
			UProperty* NewProp_ExplosionDamage = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ExplosionDamage"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ExplosionDamage, FProjectileWeaponData), 0x0010000000010001);
			UProperty* NewProp_ProjectileClass = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ProjectileClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ProjectileClass, FProjectileWeaponData), 0x0014000000010001, Z_Construct_UClass_AShooterProjectile_NoRegister(), Z_Construct_UClass_UClass());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Projectile.h"));
			MetaData->SetValue(NewProp_DamageType, TEXT("Category"), TEXT("Projectile"));
			MetaData->SetValue(NewProp_DamageType, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Projectile.h"));
			MetaData->SetValue(NewProp_ExplosionRadius, TEXT("Category"), TEXT("Projectile"));
			MetaData->SetValue(NewProp_ExplosionRadius, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Projectile.h"));
			MetaData->SetValue(NewProp_ExplosionDamage, TEXT("Category"), TEXT("Projectile"));
			MetaData->SetValue(NewProp_ExplosionDamage, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Projectile.h"));
			MetaData->SetValue(NewProp_ProjectileClass, TEXT("Category"), TEXT("Projectile"));
			MetaData->SetValue(NewProp_ProjectileClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Projectile.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProjectileWeaponData_CRC() { return 525530399U; }
	void AWeapon_Projectile::StaticRegisterNativesAWeapon_Projectile()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_Projectile_NoRegister()
	{
		return AWeapon_Projectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AWeapon_Projectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AWeapon();
			Z_Construct_UPackage__Script_ShooterGame();
			OuterClass = AWeapon_Projectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_ProjectileConfig = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileConfig"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ProjectileConfig, AWeapon_Projectile), 0x0020080000010001, Z_Construct_UScriptStruct_FProjectileWeaponData());
				static TCppClassTypeInfo<TCppClassTypeTraits<AWeapon_Projectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Weapon/Weapon_Projectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Projectile.h"));
				MetaData->SetValue(NewProp_ProjectileConfig, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileConfig, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon_Projectile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon_Projectile, 175186548);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon_Projectile(Z_Construct_UClass_AWeapon_Projectile, &AWeapon_Projectile::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AWeapon_Projectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Projectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
