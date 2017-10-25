// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Effects/ExplosionEffect.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosionEffect() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_AExplosionEffect_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AExplosionEffect();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void AExplosionEffect::StaticRegisterNativesAExplosionEffect()
	{
	}
	UClass* Z_Construct_UClass_AExplosionEffect_NoRegister()
	{
		return AExplosionEffect::StaticClass();
	}
	UClass* Z_Construct_UClass_AExplosionEffect()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_ShooterGame();
			OuterClass = AExplosionEffect::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_ExplosionEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExplosionEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ExplosionEffect, AExplosionEffect), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AExplosionEffect> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Effects/ExplosionEffect.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ExplosionEffect.h"));
				MetaData->SetValue(NewProp_ExplosionEffect, TEXT("Category"), TEXT("Effect"));
				MetaData->SetValue(NewProp_ExplosionEffect, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ExplosionEffect.h"));
				MetaData->SetValue(NewProp_ExplosionEffect, TEXT("ToolTip"), TEXT("??\x0568??\x0427"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExplosionEffect, 3544899366);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExplosionEffect(Z_Construct_UClass_AExplosionEffect, &AExplosionEffect::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AExplosionEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosionEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
