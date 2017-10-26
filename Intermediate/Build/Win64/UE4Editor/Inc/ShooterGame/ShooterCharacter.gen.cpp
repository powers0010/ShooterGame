// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Player/ShooterCharacter.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCharacter() {}
// Cross Module References
	SHOOTERGAME_API UFunction* Z_Construct_UFunction_AShooterCharacter_GetAimOffsets();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterCharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	SHOOTERGAME_API UFunction* Z_Construct_UFunction_AShooterCharacter_GetIsTargeting();
	SHOOTERGAME_API UFunction* Z_Construct_UFunction_AShooterCharacter_SetIsTargeting();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AShooterCharacter::StaticRegisterNativesAShooterCharacter()
	{
		UClass* Class = AShooterCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetAimOffsets", (Native)&AShooterCharacter::execGetAimOffsets },
			{ "GetIsTargeting", (Native)&AShooterCharacter::execGetIsTargeting },
			{ "SetIsTargeting", (Native)&AShooterCharacter::execSetIsTargeting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetAimOffsets()
	{
		struct ShooterCharacter_eventGetAimOffsets_Parms
		{
			FRotator ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AShooterCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAimOffsets"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54820401, 65535, sizeof(ShooterCharacter_eventGetAimOffsets_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, ShooterCharacter_eventGetAimOffsets_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FRotator());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Weapon"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetIsTargeting()
	{
		struct ShooterCharacter_eventGetIsTargeting_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AShooterCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetIsTargeting"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(ShooterCharacter_eventGetIsTargeting_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, ShooterCharacter_eventGetIsTargeting_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, ShooterCharacter_eventGetIsTargeting_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, ShooterCharacter_eventGetIsTargeting_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Weapon"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AShooterCharacter_SetIsTargeting()
	{
		struct ShooterCharacter_eventSetIsTargeting_Parms
		{
			bool NewIsTarget;
		};
		UObject* Outer = Z_Construct_UClass_AShooterCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetIsTargeting"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ShooterCharacter_eventSetIsTargeting_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(NewIsTarget, ShooterCharacter_eventSetIsTargeting_Parms);
			UProperty* NewProp_NewIsTarget = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewIsTarget"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(NewIsTarget, ShooterCharacter_eventSetIsTargeting_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(NewIsTarget, ShooterCharacter_eventSetIsTargeting_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Weapon"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterCharacter_NoRegister()
	{
		return AShooterCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AShooterCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_ShooterGame();
			OuterClass = AShooterCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AShooterCharacter_GetAimOffsets());
				OuterClass->LinkChild(Z_Construct_UFunction_AShooterCharacter_GetIsTargeting());
				OuterClass->LinkChild(Z_Construct_UFunction_AShooterCharacter_SetIsTargeting());

				UProperty* NewProp_Health = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Health"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Health, AShooterCharacter), 0x0020080000000005);
				UProperty* NewProp_WeaponAttachPoint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponAttachPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(WeaponAttachPoint, AShooterCharacter), 0x0020080000010001);
				UProperty* NewProp_CurrentWeapon = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentWeapon"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CurrentWeapon, AShooterCharacter), 0x0020080000020001, Z_Construct_UClass_AWeapon_NoRegister());
				UProperty* NewProp_WeaponClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(WeaponClass, AShooterCharacter), 0x0024080000010001, Z_Construct_UClass_AWeapon_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_Mesh1P = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh1P"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh1P, AShooterCharacter), 0x00200800000a001d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AShooterCharacter_GetAimOffsets(), "GetAimOffsets"); // 878658004
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AShooterCharacter_GetIsTargeting(), "GetIsTargeting"); // 242047036
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AShooterCharacter_SetIsTargeting(), "SetIsTargeting"); // 3074073386
				static TCppClassTypeInfo<TCppClassTypeTraits<AShooterCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Player/ShooterCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_Health, TEXT("Category"), TEXT("Health"));
				MetaData->SetValue(NewProp_Health, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_WeaponAttachPoint, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_WeaponAttachPoint, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_CurrentWeapon, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_CurrentWeapon, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_WeaponClass, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_WeaponClass, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("Category"), TEXT("Character"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ToolTip"), TEXT("The main skeletal mesh associated with this Character (optional sub-object). //        UPROPERTY(EditDefaultsOnly, Category = Character)"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterCharacter, 1611494812);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterCharacter(Z_Construct_UClass_AShooterCharacter, &AShooterCharacter::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
