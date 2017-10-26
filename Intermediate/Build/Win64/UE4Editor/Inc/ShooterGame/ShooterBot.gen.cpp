// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Bots/ShooterBot.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterBot() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterBot_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterBot();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterCharacter();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void AShooterBot::StaticRegisterNativesAShooterBot()
	{
	}
	UClass* Z_Construct_UClass_AShooterBot_NoRegister()
	{
		return AShooterBot::StaticClass();
	}
	UClass* Z_Construct_UClass_AShooterBot()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AShooterCharacter();
			Z_Construct_UPackage__Script_ShooterGame();
			OuterClass = AShooterBot::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AShooterBot> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Bots/ShooterBot.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Bots/ShooterBot.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterBot, 2183653308);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterBot(Z_Construct_UClass_AShooterBot, &AShooterBot::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterBot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterBot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
