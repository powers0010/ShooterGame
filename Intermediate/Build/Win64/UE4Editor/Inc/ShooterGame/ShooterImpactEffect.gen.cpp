// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Effects/ShooterImpactEffect.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterImpactEffect() {}
// Cross Module References
	SHOOTERGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDecalData();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterImpactEffect_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterImpactEffect();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FDecalData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHOOTERGAME_API uint32 Get_Z_Construct_UScriptStruct_FDecalData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecalData, Z_Construct_UPackage__Script_ShooterGame(), TEXT("DecalData"), sizeof(FDecalData), Get_Z_Construct_UScriptStruct_FDecalData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDecalData(FDecalData::StaticStruct, TEXT("/Script/ShooterGame"), TEXT("DecalData"), false, nullptr, nullptr);
static struct FScriptStruct_ShooterGame_StaticRegisterNativesFDecalData
{
	FScriptStruct_ShooterGame_StaticRegisterNativesFDecalData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DecalData")),new UScriptStruct::TCppStructOps<FDecalData>);
	}
} ScriptStruct_ShooterGame_StaticRegisterNativesFDecalData;
	UScriptStruct* Z_Construct_UScriptStruct_FDecalData()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		extern uint32 Get_Z_Construct_UScriptStruct_FDecalData_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DecalData"), sizeof(FDecalData), Get_Z_Construct_UScriptStruct_FDecalData_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DecalData"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FDecalData>, EStructFlags(0x00000001));
			UProperty* NewProp_LifeSpan = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("LifeSpan"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LifeSpan, FDecalData), 0x0010000000010001);
			UProperty* NewProp_DecalSize = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DecalSize"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DecalSize, FDecalData), 0x0010000000010001);
			UProperty* NewProp_DecalMaterial = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("DecalMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DecalMaterial, FDecalData), 0x0010000000010001, Z_Construct_UClass_UMaterial_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
			MetaData->SetValue(NewProp_LifeSpan, TEXT("Category"), TEXT("Decal"));
			MetaData->SetValue(NewProp_LifeSpan, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
			MetaData->SetValue(NewProp_LifeSpan, TEXT("ToolTip"), TEXT("lifespan"));
			MetaData->SetValue(NewProp_DecalSize, TEXT("Category"), TEXT("Decal"));
			MetaData->SetValue(NewProp_DecalSize, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
			MetaData->SetValue(NewProp_DecalSize, TEXT("ToolTip"), TEXT("quad size (width & height)"));
			MetaData->SetValue(NewProp_DecalMaterial, TEXT("Category"), TEXT("Decal"));
			MetaData->SetValue(NewProp_DecalMaterial, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
			MetaData->SetValue(NewProp_DecalMaterial, TEXT("ToolTip"), TEXT("material"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDecalData_CRC() { return 2644656084U; }
	void AShooterImpactEffect::StaticRegisterNativesAShooterImpactEffect()
	{
	}
	UClass* Z_Construct_UClass_AShooterImpactEffect_NoRegister()
	{
		return AShooterImpactEffect::StaticClass();
	}
	UClass* Z_Construct_UClass_AShooterImpactEffect()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_ShooterGame();
			OuterClass = AShooterImpactEffect::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_DefaultDecal = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultDecal"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DefaultDecal, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UScriptStruct_FDecalData());
				UProperty* NewProp_FleshSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FleshSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FleshSound, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_GlassSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GlassSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GlassSound, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_GrassSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GrassSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GrassSound, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_WoodSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WoodSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WoodSound, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_MetalSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MetalSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MetalSound, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_WaterSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WaterSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WaterSound, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_DirtSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DirtSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DirtSound, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_ConcreteSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ConcreteSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ConcreteSound, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_DefaultSound = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultSound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DefaultSound, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_USoundCue_NoRegister());
				UProperty* NewProp_FleshFX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FleshFX"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FleshFX, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_GlassFX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GlassFX"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GlassFX, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_GrassFX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GrassFX"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GrassFX, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_WoodFX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WoodFX"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WoodFX, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_MetalFX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MetalFX"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MetalFX, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_WaterFX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WaterFX"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WaterFX, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_DirtFX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DirtFX"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DirtFX, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_ConcreteFX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ConcreteFX"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ConcreteFX, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				UProperty* NewProp_DefaultFX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultFX"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(DefaultFX, AShooterImpactEffect), 0x0020080000010001, Z_Construct_UClass_UParticleSystem_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AShooterImpactEffect> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_DefaultDecal, TEXT("Category"), TEXT("Defaults"));
				MetaData->SetValue(NewProp_DefaultDecal, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_FleshSound, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_FleshSound, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_GlassSound, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_GlassSound, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_GrassSound, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_GrassSound, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_WoodSound, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_WoodSound, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_WoodSound, TEXT("ToolTip"), TEXT("\x013e\x0377"));
				MetaData->SetValue(NewProp_MetalSound, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_MetalSound, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_WaterSound, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_WaterSound, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_WaterSound, TEXT("ToolTip"), TEXT("\x02ee"));
				MetaData->SetValue(NewProp_DirtSound, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_DirtSound, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_ConcreteSound, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_ConcreteSound, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_DefaultSound, TEXT("Category"), TEXT("Sound"));
				MetaData->SetValue(NewProp_DefaultSound, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_DefaultSound, TEXT("ToolTip"), TEXT("----------------------????\x01f9??\x0427??-------------------------"));
				MetaData->SetValue(NewProp_FleshFX, TEXT("Category"), TEXT("Particle"));
				MetaData->SetValue(NewProp_FleshFX, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_GlassFX, TEXT("Category"), TEXT("Particle"));
				MetaData->SetValue(NewProp_GlassFX, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_GrassFX, TEXT("Category"), TEXT("Particle"));
				MetaData->SetValue(NewProp_GrassFX, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_WoodFX, TEXT("Category"), TEXT("Particle"));
				MetaData->SetValue(NewProp_WoodFX, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_WoodFX, TEXT("ToolTip"), TEXT("\x013e\x0377"));
				MetaData->SetValue(NewProp_MetalFX, TEXT("Category"), TEXT("Particle"));
				MetaData->SetValue(NewProp_MetalFX, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_WaterFX, TEXT("Category"), TEXT("Particle"));
				MetaData->SetValue(NewProp_WaterFX, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_WaterFX, TEXT("ToolTip"), TEXT("\x02ee"));
				MetaData->SetValue(NewProp_DirtFX, TEXT("Category"), TEXT("Particle"));
				MetaData->SetValue(NewProp_DirtFX, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_ConcreteFX, TEXT("Category"), TEXT("Particle"));
				MetaData->SetValue(NewProp_ConcreteFX, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_DefaultFX, TEXT("Category"), TEXT("Particle"));
				MetaData->SetValue(NewProp_DefaultFX, TEXT("ModuleRelativePath"), TEXT("Public/Effects/ShooterImpactEffect.h"));
				MetaData->SetValue(NewProp_DefaultFX, TEXT("ToolTip"), TEXT("--------------------------????????\x0427-??------------------------\n\x012c??"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterImpactEffect, 4181332295);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterImpactEffect(Z_Construct_UClass_AShooterImpactEffect, &AShooterImpactEffect::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterImpactEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterImpactEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
