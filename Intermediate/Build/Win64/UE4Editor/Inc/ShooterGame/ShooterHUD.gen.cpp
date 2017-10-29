// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/UI/ShooterHUD.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterHUD() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterHUD_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCanvasIcon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void AShooterHUD::StaticRegisterNativesAShooterHUD()
	{
	}
	UClass* Z_Construct_UClass_AShooterHUD_NoRegister()
	{
		return AShooterHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AShooterHUD()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AHUD();
			Z_Construct_UPackage__Script_ShooterGame();
			OuterClass = AShooterHUD::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x2090028Cu;


				UProperty* NewProp_FirstWeaponClipIcon = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FirstWeaponClipIcon"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FirstWeaponClipIcon, AShooterHUD), 0x0010000000000000, Z_Construct_UScriptStruct_FCanvasIcon());
				UProperty* NewProp_FirstWeaponIcon = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FirstWeaponIcon"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FirstWeaponIcon, AShooterHUD), 0x0010000000000000, Z_Construct_UScriptStruct_FCanvasIcon());
				UProperty* NewProp_FirstWeaponBg = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FirstWeaponBg"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FirstWeaponBg, AShooterHUD), 0x0010000000000000, Z_Construct_UScriptStruct_FCanvasIcon());
				UProperty* NewProp_FirstWeaponPos = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FirstWeaponPos"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(FirstWeaponPos, AShooterHUD), 0x0010000000010001, Z_Construct_UScriptStruct_FVector2D());
				UProperty* NewProp_TimerFont = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TimerFont"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TimerFont, AShooterHUD), 0x0010000000000000, Z_Construct_UClass_UFont_NoRegister());
				UProperty* NewProp_TimerIcon = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TimerIcon"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TimerIcon, AShooterHUD), 0x0010000000000000, Z_Construct_UScriptStruct_FCanvasIcon());
				UProperty* NewProp_MatchTimerBg = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MatchTimerBg"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(MatchTimerBg, AShooterHUD), 0x0010000000000000, Z_Construct_UScriptStruct_FCanvasIcon());
				UProperty* NewProp_TimerPos = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TimerPos"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TimerPos, AShooterHUD), 0x0010000000010001, Z_Construct_UScriptStruct_FVector2D());
				UProperty* NewProp_HealthIcon = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HealthIcon"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HealthIcon, AShooterHUD), 0x0010000000000000, Z_Construct_UScriptStruct_FCanvasIcon());
				UProperty* NewProp_Healthbar = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Healthbar"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Healthbar, AShooterHUD), 0x0010000000000000, Z_Construct_UScriptStruct_FCanvasIcon());
				UProperty* NewProp_HealthbarBg = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HealthbarBg"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HealthbarBg, AShooterHUD), 0x0010000000000000, Z_Construct_UScriptStruct_FCanvasIcon());
				UProperty* NewProp_HealthBarPos = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HealthBarPos"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HealthBarPos, AShooterHUD), 0x0010000000010001, Z_Construct_UScriptStruct_FVector2D());
				UProperty* NewProp_CrosshairSpace = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CrosshairSpace"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CrosshairSpace, AShooterHUD), 0x0010000000010001);
				UProperty* NewProp_Crosshair = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Crosshair"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Crosshair, AShooterHUD), 0x0010000000000000, Z_Construct_UScriptStruct_FCanvasIcon());
				NewProp_Crosshair->ArrayDim = CPP_ARRAY_DIM(Crosshair, AShooterHUD);
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AShooterHUD> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Rendering Actor Input Replication"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UI/ShooterHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_FirstWeaponClipIcon, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(NewProp_FirstWeaponIcon, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(NewProp_FirstWeaponIcon, TEXT("ToolTip"), TEXT("??\x01f0????\x037c??"));
				MetaData->SetValue(NewProp_FirstWeaponBg, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(NewProp_FirstWeaponBg, TEXT("ToolTip"), TEXT("??\x01f0????\x037c?? ????"));
				MetaData->SetValue(NewProp_FirstWeaponPos, TEXT("Category"), TEXT("HealthBar"));
				MetaData->SetValue(NewProp_FirstWeaponPos, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(NewProp_FirstWeaponPos, TEXT("ToolTip"), TEXT("--------------????????-------------\n????\x037c?? ???\x00bd?\x01ab??"));
				MetaData->SetValue(NewProp_TimerFont, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(NewProp_TimerFont, TEXT("ToolTip"), TEXT("??\x02b1??????"));
				MetaData->SetValue(NewProp_TimerIcon, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(NewProp_TimerIcon, TEXT("ToolTip"), TEXT("??\x02b1????\x05be"));
				MetaData->SetValue(NewProp_MatchTimerBg, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(NewProp_MatchTimerBg, TEXT("ToolTip"), TEXT("??\x02b1??????"));
				MetaData->SetValue(NewProp_TimerPos, TEXT("Category"), TEXT("Timer"));
				MetaData->SetValue(NewProp_TimerPos, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(NewProp_TimerPos, TEXT("ToolTip"), TEXT("--------------????\x02b1????------------\n??\x02b1?????\x03fd\x01fc?\x03f6?????\x03fd\x01e3?"));
				MetaData->SetValue(NewProp_HealthIcon, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(NewProp_HealthIcon, TEXT("ToolTip"), TEXT("\x046a?????? +"));
				MetaData->SetValue(NewProp_Healthbar, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(NewProp_Healthbar, TEXT("ToolTip"), TEXT("\x046a??"));
				MetaData->SetValue(NewProp_HealthbarBg, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(NewProp_HealthbarBg, TEXT("ToolTip"), TEXT("\x046a??????"));
				MetaData->SetValue(NewProp_HealthBarPos, TEXT("Category"), TEXT("HealthBar"));
				MetaData->SetValue(NewProp_HealthBarPos, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(NewProp_HealthBarPos, TEXT("ToolTip"), TEXT("--------------??\x046a????----------\n\x046a????\x02bc???\xa8e8???\x03fd\x01e3?"));
				MetaData->SetValue(NewProp_CrosshairSpace, TEXT("Category"), TEXT("Crosshair"));
				MetaData->SetValue(NewProp_CrosshairSpace, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(NewProp_CrosshairSpace, TEXT("ToolTip"), TEXT("\x05fc?????? ?? ???? \x05ae???\x013c???????"));
				MetaData->SetValue(NewProp_Crosshair, TEXT("ModuleRelativePath"), TEXT("Public/UI/ShooterHUD.h"));
				MetaData->SetValue(NewProp_Crosshair, TEXT("ToolTip"), TEXT("-------------??\x05fc?\x0121?---------\n\x05fc??"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterHUD, 4111205202);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterHUD(Z_Construct_UClass_AShooterHUD, &AShooterHUD::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
