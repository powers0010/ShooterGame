// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapon/Weapon.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}
// Cross Module References
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FWeaponData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FWeaponData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, Z_Construct_UPackage__Script_ShooterGame(), TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponData(FWeaponData::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("WeaponData"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFWeaponData
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFWeaponData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponData")),new UScriptStruct::TCppStructOps<FWeaponData>);
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFWeaponData;
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponData"), sizeof(FWeaponData), Get_Z_Construct_UScriptStruct_FWeaponData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WeaponData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FWeaponData>, EStructFlags(0x00000001));
			UProperty* NewProp_FireCD = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("FireCD"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FireCD, FWeaponData), 0x0010000000010001);
			UProperty* NewProp_ClipAmount = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ClipAmount"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ClipAmount, FWeaponData), 0x0010000000010001);
			UProperty* NewProp_AmmoPerClip = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AmmoPerClip"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(AmmoPerClip, FWeaponData), 0x0010000000010001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
			MetaData->SetValue(NewProp_FireCD, TEXT("Category"), TEXT("WeaponData"));
			MetaData->SetValue(NewProp_FireCD, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
			MetaData->SetValue(NewProp_ClipAmount, TEXT("Category"), TEXT("WeaponData"));
			MetaData->SetValue(NewProp_ClipAmount, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
			MetaData->SetValue(NewProp_AmmoPerClip, TEXT("Category"), TEXT("WeaponData"));
			MetaData->SetValue(NewProp_AmmoPerClip, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponData_CRC() { return 500318587U; }
	void AWeapon::StaticRegisterNativesAWeapon()
	{
	}
	UClass* Z_Construct_UClass_AWeapon_NoRegister()
	{
		return AWeapon::StaticClass();
	}
	UClass* Z_Construct_UClass_AWeapon()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_ShooterGame();
			OuterClass = AWeapon::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_WeaponConfig = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponConfig"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WeaponConfig, AWeapon), 0x0020080000010001, Z_Construct_UScriptStruct_FWeaponData());
				UProperty* NewProp_ClipCount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ClipCount"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ClipCount, AWeapon), 0x0020080000020001);
				UProperty* NewProp_AmmoCount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AmmoCount"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(AmmoCount, AWeapon), 0x0020080000010001);
				UProperty* NewProp_FireEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FireEffect, AWeapon), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_ReloadSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ReloadSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReloadSound, AWeapon), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_EquipSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EquipSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(EquipSound, AWeapon), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_FireSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FireSound, AWeapon), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_MuzzleAttachPoint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MuzzleAttachPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(MuzzleAttachPoint, AWeapon), 0x0020080000010001);
				UProperty* NewProp_Mesh1P = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh1P"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh1P, AWeapon), 0x00200800000a001d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AWeapon> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Weapon/Weapon.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_WeaponConfig, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_WeaponConfig, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_ClipCount, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_ClipCount, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_AmmoCount, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_AmmoCount, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_AmmoCount, TEXT("ToolTip"), TEXT("?\x04f5?????"));
				MetaData->SetValue(NewProp_FireEffect, TEXT("Category"), TEXT("Effect"));
				MetaData->SetValue(NewProp_FireEffect, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_FireEffect, TEXT("ToolTip"), TEXT("??\x01f9??\x0427"));
				MetaData->SetValue(NewProp_ReloadSound, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_ReloadSound, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_ReloadSound, TEXT("ToolTip"), TEXT("??\x01f9??\x0427"));
				MetaData->SetValue(NewProp_EquipSound, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_EquipSound, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_EquipSound, TEXT("ToolTip"), TEXT("??\x01f9??\x0427"));
				MetaData->SetValue(NewProp_FireSound, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_FireSound, TEXT("ToolTip"), TEXT("??\x01f9??\x0427"));
				MetaData->SetValue(NewProp_MuzzleAttachPoint, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_MuzzleAttachPoint, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_MuzzleAttachPoint, TEXT("ToolTip"), TEXT("?????\x04f5???SocketName"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("Category"), TEXT("Character"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeapon, 3620506321);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon(Z_Construct_UClass_AWeapon, &AWeapon::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
