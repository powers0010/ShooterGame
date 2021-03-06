// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Online/ShooterGameState.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGameState() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterGameState_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void AShooterGameState::StaticRegisterNativesAShooterGameState()
	{
	}
	UClass* Z_Construct_UClass_AShooterGameState_NoRegister()
	{
		return AShooterGameState::StaticClass();
	}
	UClass* Z_Construct_UClass_AShooterGameState()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameState();
			Z_Construct_UPackage__Script_ShooterGame();
			OuterClass = AShooterGameState::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900280u;


				UProperty* NewProp_GameRemainTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GameRemainTime"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(GameRemainTime, AShooterGameState), 0x0010000000002000);
				static TCppClassTypeInfo<TCppClassTypeTraits<AShooterGameState> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Online/ShooterGameState.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Online/ShooterGameState.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_GameRemainTime, TEXT("ModuleRelativePath"), TEXT("Public/Online/ShooterGameState.h"));
				MetaData->SetValue(NewProp_GameRemainTime, TEXT("ToolTip"), TEXT("??\x02b1???\x0763???"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterGameState, 2649855563);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterGameState(Z_Construct_UClass_AShooterGameState, &AShooterGameState::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
