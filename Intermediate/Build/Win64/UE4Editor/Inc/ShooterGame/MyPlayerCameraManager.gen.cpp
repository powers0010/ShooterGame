// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Player/MyPlayerCameraManager.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerCameraManager() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AMyPlayerCameraManager_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AMyPlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void AMyPlayerCameraManager::StaticRegisterNativesAMyPlayerCameraManager()
	{
	}
	UClass* Z_Construct_UClass_AMyPlayerCameraManager_NoRegister()
	{
		return AMyPlayerCameraManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyPlayerCameraManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerCameraManager();
			Z_Construct_UPackage__Script_ShooterGame();
			OuterClass = AMyPlayerCameraManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMyPlayerCameraManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Player/MyPlayerCameraManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Player/MyPlayerCameraManager.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPlayerCameraManager, 628172721);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPlayerCameraManager(Z_Construct_UClass_AMyPlayerCameraManager, &AMyPlayerCameraManager::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AMyPlayerCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
