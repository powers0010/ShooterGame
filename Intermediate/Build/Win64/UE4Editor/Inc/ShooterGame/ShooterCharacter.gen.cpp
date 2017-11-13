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
	SHOOTERGAME_API UFunction* Z_Construct_UFunction_AShooterCharacter_AddDoorKeyAmout();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterCharacter();
	SHOOTERGAME_API UFunction* Z_Construct_UFunction_AShooterCharacter_GetAimOffsets();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	SHOOTERGAME_API UFunction* Z_Construct_UFunction_AShooterCharacter_GetDoorKeyAmout();
	SHOOTERGAME_API UFunction* Z_Construct_UFunction_AShooterCharacter_GetIsTargeting();
	SHOOTERGAME_API UFunction* Z_Construct_UFunction_AShooterCharacter_GetMainWidget();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UMainWidget_NoRegister();
	SHOOTERGAME_API UFunction* Z_Construct_UFunction_AShooterCharacter_SetIsTargeting();
	SHOOTERGAME_API UFunction* Z_Construct_UFunction_AShooterCharacter_SetMainWidget();
	SHOOTERGAME_API UFunction* Z_Construct_UFunction_AShooterCharacter_SubtractDoorKeyAmout();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UPickUpTip_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_USniperTargetWidget_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UWeaponSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AShooterCharacter::StaticRegisterNativesAShooterCharacter()
	{
		UClass* Class = AShooterCharacter::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AddDoorKeyAmout", (Native)&AShooterCharacter::execAddDoorKeyAmout },
			{ "GetAimOffsets", (Native)&AShooterCharacter::execGetAimOffsets },
			{ "GetDoorKeyAmout", (Native)&AShooterCharacter::execGetDoorKeyAmout },
			{ "GetIsTargeting", (Native)&AShooterCharacter::execGetIsTargeting },
			{ "GetMainWidget", (Native)&AShooterCharacter::execGetMainWidget },
			{ "SetIsTargeting", (Native)&AShooterCharacter::execSetIsTargeting },
			{ "SetMainWidget", (Native)&AShooterCharacter::execSetMainWidget },
			{ "SubtractDoorKeyAmout", (Native)&AShooterCharacter::execSubtractDoorKeyAmout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AShooterCharacter_AddDoorKeyAmout()
	{
		UObject* Outer = Z_Construct_UClass_AShooterCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AddDoorKeyAmout"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Level"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
#endif
		}
		return ReturnFunction;
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
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetDoorKeyAmout()
	{
		struct ShooterCharacter_eventGetDoorKeyAmout_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AShooterCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDoorKeyAmout"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ShooterCharacter_eventGetDoorKeyAmout_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, ShooterCharacter_eventGetDoorKeyAmout_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Level"));
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
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetMainWidget()
	{
		struct ShooterCharacter_eventGetMainWidget_Parms
		{
			UMainWidget* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AShooterCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetMainWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ShooterCharacter_eventGetMainWidget_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, ShooterCharacter_eventGetMainWidget_Parms), 0x0010000000080588, Z_Construct_UClass_UMainWidget_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Widget"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("EditInline"), TEXT("true"));
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
	UFunction* Z_Construct_UFunction_AShooterCharacter_SetMainWidget()
	{
		struct ShooterCharacter_eventSetMainWidget_Parms
		{
			UMainWidget* widget;
		};
		UObject* Outer = Z_Construct_UClass_AShooterCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetMainWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(ShooterCharacter_eventSetMainWidget_Parms));
			UProperty* NewProp_widget = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("widget"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(widget, ShooterCharacter_eventSetMainWidget_Parms), 0x0010000000080080, Z_Construct_UClass_UMainWidget_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Widget"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
			MetaData->SetValue(NewProp_widget, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AShooterCharacter_SubtractDoorKeyAmout()
	{
		UObject* Outer = Z_Construct_UClass_AShooterCharacter();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SubtractDoorKeyAmout"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Level"));
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

				OuterClass->LinkChild(Z_Construct_UFunction_AShooterCharacter_AddDoorKeyAmout());
				OuterClass->LinkChild(Z_Construct_UFunction_AShooterCharacter_GetAimOffsets());
				OuterClass->LinkChild(Z_Construct_UFunction_AShooterCharacter_GetDoorKeyAmout());
				OuterClass->LinkChild(Z_Construct_UFunction_AShooterCharacter_GetIsTargeting());
				OuterClass->LinkChild(Z_Construct_UFunction_AShooterCharacter_GetMainWidget());
				OuterClass->LinkChild(Z_Construct_UFunction_AShooterCharacter_SetIsTargeting());
				OuterClass->LinkChild(Z_Construct_UFunction_AShooterCharacter_SetMainWidget());
				OuterClass->LinkChild(Z_Construct_UFunction_AShooterCharacter_SubtractDoorKeyAmout());

				UProperty* NewProp_BeHitCameraShake = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BeHitCameraShake"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(BeHitCameraShake, AShooterCharacter), 0x0024080000010001, Z_Construct_UClass_UCameraShake_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_PickUpTip = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PickUpTip"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PickUpTip, AShooterCharacter), 0x002008000008000d, Z_Construct_UClass_UPickUpTip_NoRegister());
				UProperty* NewProp_SniperTargetWideget = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SniperTargetWideget"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SniperTargetWideget, AShooterCharacter), 0x002008000008000d, Z_Construct_UClass_USniperTargetWidget_NoRegister());
				UProperty* NewProp_RangeOfFocusOn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RangeOfFocusOn"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RangeOfFocusOn, AShooterCharacter), 0x0020080000010001);
				UProperty* NewProp_Health = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Health"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Health, AShooterCharacter), 0x0020080000010005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsTargeting, AShooterCharacter);
				UProperty* NewProp_bIsTargeting = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsTargeting"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsTargeting, AShooterCharacter), 0x0020080000020001, CPP_BOOL_PROPERTY_BITMASK(bIsTargeting, AShooterCharacter), sizeof(bool), true);
				UProperty* NewProp_WeaponAttachPoint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponAttachPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(WeaponAttachPoint, AShooterCharacter), 0x0020080000010001);
				UProperty* NewProp_MainWidget = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MainWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MainWidget, AShooterCharacter), 0x0020080000090009, Z_Construct_UClass_UMainWidget_NoRegister());
				UProperty* NewProp_WeaponSysCom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WeaponSysCom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WeaponSysCom, AShooterCharacter), 0x00200800000a000d, Z_Construct_UClass_UWeaponSystemComponent_NoRegister());
				UProperty* NewProp_Mesh1P = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh1P"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh1P, AShooterCharacter), 0x00200800000a001d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AShooterCharacter_AddDoorKeyAmout(), "AddDoorKeyAmout"); // 4015370315
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AShooterCharacter_GetAimOffsets(), "GetAimOffsets"); // 878658004
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AShooterCharacter_GetDoorKeyAmout(), "GetDoorKeyAmout"); // 323672246
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AShooterCharacter_GetIsTargeting(), "GetIsTargeting"); // 242047036
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AShooterCharacter_GetMainWidget(), "GetMainWidget"); // 4157531088
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AShooterCharacter_SetIsTargeting(), "SetIsTargeting"); // 3074073386
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AShooterCharacter_SetMainWidget(), "SetMainWidget"); // 1137993491
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AShooterCharacter_SubtractDoorKeyAmout(), "SubtractDoorKeyAmout"); // 3197521199
				static TCppClassTypeInfo<TCppClassTypeTraits<AShooterCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Player/ShooterCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_BeHitCameraShake, TEXT("Category"), TEXT("Attack"));
				MetaData->SetValue(NewProp_BeHitCameraShake, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_PickUpTip, TEXT("Category"), TEXT("PickUp"));
				MetaData->SetValue(NewProp_PickUpTip, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PickUpTip, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_SniperTargetWideget, TEXT("Category"), TEXT("Target"));
				MetaData->SetValue(NewProp_SniperTargetWideget, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_SniperTargetWideget, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_RangeOfFocusOn, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_RangeOfFocusOn, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_Health, TEXT("Category"), TEXT("Health"));
				MetaData->SetValue(NewProp_Health, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_bIsTargeting, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_bIsTargeting, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_WeaponAttachPoint, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_WeaponAttachPoint, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_MainWidget, TEXT("Category"), TEXT("MainWidget"));
				MetaData->SetValue(NewProp_MainWidget, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MainWidget, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_WeaponSysCom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_WeaponSysCom, TEXT("Category"), TEXT("Weapon"));
				MetaData->SetValue(NewProp_WeaponSysCom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_WeaponSysCom, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("Category"), TEXT("Character"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ModuleRelativePath"), TEXT("Public/Player/ShooterCharacter.h"));
				MetaData->SetValue(NewProp_Mesh1P, TEXT("ToolTip"), TEXT("The main skeletal mesh associated with this Character (optional sub-object)."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterCharacter, 4216552992);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterCharacter(Z_Construct_UClass_AShooterCharacter, &AShooterCharacter::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
