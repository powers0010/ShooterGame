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
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnim();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FSniperWeaponData();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FWeaponAnim::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FWeaponAnim_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponAnim, Z_Construct_UPackage__Script_ShooterGame(), TEXT("WeaponAnim"), sizeof(FWeaponAnim), Get_Z_Construct_UScriptStruct_FWeaponAnim_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWeaponAnim(FWeaponAnim::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("WeaponAnim"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFWeaponAnim
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFWeaponAnim()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WeaponAnim")),new UScriptStruct::TCppStructOps<FWeaponAnim>);
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFWeaponAnim;
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponAnim()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		extern uint32 Get_Z_Construct_UScriptStruct_FWeaponAnim_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WeaponAnim"), sizeof(FWeaponAnim), Get_Z_Construct_UScriptStruct_FWeaponAnim_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WeaponAnim"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FWeaponAnim>, EStructFlags(0x00000001));
			UProperty* NewProp_AnimP = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AnimP"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AnimP, FWeaponAnim), 0x0010000000010001, Z_Construct_UClass_UAnimMontage_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
			MetaData->SetValue(NewProp_AnimP, TEXT("Category"), TEXT("Animation"));
			MetaData->SetValue(NewProp_AnimP, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWeaponAnim_CRC() { return 749763105U; }
class UScriptStruct* FSniperWeaponData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FSniperWeaponData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSniperWeaponData, Z_Construct_UPackage__Script_ShooterGame(), TEXT("SniperWeaponData"), sizeof(FSniperWeaponData), Get_Z_Construct_UScriptStruct_FSniperWeaponData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSniperWeaponData(FSniperWeaponData::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("SniperWeaponData"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFSniperWeaponData
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFSniperWeaponData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SniperWeaponData")),new UScriptStruct::TCppStructOps<FSniperWeaponData>);
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFSniperWeaponData;
	UScriptStruct* Z_Construct_UScriptStruct_FSniperWeaponData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		extern uint32 Get_Z_Construct_UScriptStruct_FSniperWeaponData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SniperWeaponData"), sizeof(FSniperWeaponData), Get_Z_Construct_UScriptStruct_FSniperWeaponData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SniperWeaponData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FSniperWeaponData>, EStructFlags(0x00000001));
			UProperty* NewProp_damage = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("damage"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(damage, FSniperWeaponData), 0x0010000000010001);
			UProperty* NewProp_DamageType = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DamageType"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(DamageType, FSniperWeaponData), 0x0014000000010001, Z_Construct_UClass_UDamageType_NoRegister(), Z_Construct_UClass_UClass());
			UProperty* NewProp_WeaponRange = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("WeaponRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(WeaponRange, FSniperWeaponData), 0x0010000000010001);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
			MetaData->SetValue(NewProp_damage, TEXT("Category"), TEXT("sniperWeaponData"));
			MetaData->SetValue(NewProp_damage, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
			MetaData->SetValue(NewProp_DamageType, TEXT("Category"), TEXT("sniperWeaponData"));
			MetaData->SetValue(NewProp_DamageType, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
			MetaData->SetValue(NewProp_WeaponRange, TEXT("Category"), TEXT("sniperWeaponData"));
			MetaData->SetValue(NewProp_WeaponRange, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSniperWeaponData_CRC() { return 2231098732U; }
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


				UProperty* NewProp_WeaponAttachPoint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponAttachPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(WeaponAttachPoint, AWeapon), 0x0020080000010001);
				UProperty* NewProp_FireCameraShake = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireCameraShake"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(FireCameraShake, AWeapon), 0x0024080000010001, Z_Construct_UClass_UCameraShake_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_ReloadAnim = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ReloadAnim"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReloadAnim, AWeapon), 0x0020080000010001, Z_Construct_UScriptStruct_FWeaponAnim());
				UProperty* NewProp_EquipAnim = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EquipAnim"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(EquipAnim, AWeapon), 0x0020080000010001, Z_Construct_UScriptStruct_FWeaponAnim());
				UProperty* NewProp_FireAnim = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireAnim"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FireAnim, AWeapon), 0x0020080000010001, Z_Construct_UScriptStruct_FWeaponAnim());
				UProperty* NewProp_WeaponIcon = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponIcon"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WeaponIcon, AWeapon), 0x0020080000010015, Z_Construct_UClass_UTexture2D_NoRegister());
				UProperty* NewProp_WeaponConfig = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponConfig"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WeaponConfig, AWeapon), 0x0020080000010001, Z_Construct_UScriptStruct_FWeaponData());
				UProperty* NewProp_ClipCount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ClipCount"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ClipCount, AWeapon), 0x0020080000020001);
				UProperty* NewProp_AmmoCount = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AmmoCount"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(AmmoCount, AWeapon), 0x0020080000010001);
				UProperty* NewProp_FireEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FireEffect, AWeapon), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_ReloadSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ReloadSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReloadSound, AWeapon), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_EquipSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EquipSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(EquipSound, AWeapon), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_FireSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FireSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FireSound, AWeapon), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_MuzzleAttachPoint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MuzzleAttachPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(MuzzleAttachPoint, AWeapon), 0x0020080000010001);
				UProperty* NewProp_WeaponName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponName"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(WeaponName, AWeapon), 0x0020080000010001);
				UProperty* NewProp_Mesh1P = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh1P"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh1P, AWeapon), 0x00200800000a001d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AWeapon> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Weapon/Weapon.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_WeaponAttachPoint, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_WeaponAttachPoint, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_FireCameraShake, TEXT("Category"), TEXT("Effect"));
				MetaData->SetValue(NewProp_FireCameraShake, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_ReloadAnim, TEXT("Category"), TEXT("Animation"));
				MetaData->SetValue(NewProp_ReloadAnim, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_EquipAnim, TEXT("Category"), TEXT("Animation"));
				MetaData->SetValue(NewProp_EquipAnim, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_FireAnim, TEXT("Category"), TEXT("Animation"));
				MetaData->SetValue(NewProp_FireAnim, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
				MetaData->SetValue(NewProp_WeaponIcon, TEXT("Category"), TEXT("Icon"));
				MetaData->SetValue(NewProp_WeaponIcon, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
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
				MetaData->SetValue(NewProp_WeaponName, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_WeaponName, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/Weapon.h"));
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
	IMPLEMENT_CLASS(AWeapon, 2377287002);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeapon(Z_Construct_UClass_AWeapon, &AWeapon::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
