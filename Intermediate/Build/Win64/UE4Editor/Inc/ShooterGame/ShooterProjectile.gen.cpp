// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Weapon/ShooterProjectile.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterProjectile() {}
// Cross Module References
	SHOOTERGAME_API UFunction* Z_Construct_UFunction_AShooterProjectile_OnImpact();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterProjectile();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AShooterProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
	SHOOTERGAME_API UClass* Z_Construct_UClass_AExplosionEffect_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AShooterProjectile::StaticRegisterNativesAShooterProjectile()
	{
		UClass* Class = AShooterProjectile::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnImpact", (Native)&AShooterProjectile::execOnImpact },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AShooterProjectile_OnImpact()
	{
		struct ShooterProjectile_eventOnImpact_Parms
		{
			FHitResult ImpactResult;
		};
		UObject* Outer = Z_Construct_UClass_AShooterProjectile();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnImpact"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00480401, 65535, sizeof(ShooterProjectile_eventOnImpact_Parms));
			UProperty* NewProp_ImpactResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ImpactResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ImpactResult, ShooterProjectile_eventOnImpact_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/ShooterProjectile.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("??\x0568?????"));
			MetaData->SetValue(NewProp_ImpactResult, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AShooterProjectile_NoRegister()
	{
		return AShooterProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AShooterProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_ShooterGame();
			OuterClass = AShooterProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AShooterProjectile_OnImpact());

				UProperty* NewProp_ExplosionEffectClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ExplosionEffectClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ExplosionEffectClass, AShooterProjectile), 0x0024080000010015, Z_Construct_UClass_AExplosionEffect_NoRegister(), Z_Construct_UClass_UClass());
				UProperty* NewProp_ParticleSystemCom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ParticleSystemCom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ParticleSystemCom, AShooterProjectile), 0x00200800000a001d, Z_Construct_UClass_UParticleSystemComponent_NoRegister());
				UProperty* NewProp_ProjectileMovementComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileMovementComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ProjectileMovementComp, AShooterProjectile), 0x00200800000a001d, Z_Construct_UClass_UProjectileMovementComponent_NoRegister());
				UProperty* NewProp_CollisionComp = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionComp, AShooterProjectile), 0x00200800000a001d, Z_Construct_UClass_USphereComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AShooterProjectile_OnImpact(), "OnImpact"); // 3275441603
				static TCppClassTypeInfo<TCppClassTypeTraits<AShooterProjectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Weapon/ShooterProjectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/ShooterProjectile.h"));
				MetaData->SetValue(NewProp_ExplosionEffectClass, TEXT("Category"), TEXT("Effect"));
				MetaData->SetValue(NewProp_ExplosionEffectClass, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/ShooterProjectile.h"));
				MetaData->SetValue(NewProp_ParticleSystemCom, TEXT("AllowPrivateAccess"), TEXT("Particle"));
				MetaData->SetValue(NewProp_ParticleSystemCom, TEXT("Category"), TEXT("Particle"));
				MetaData->SetValue(NewProp_ParticleSystemCom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ParticleSystemCom, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/ShooterProjectile.h"));
				MetaData->SetValue(NewProp_ProjectileMovementComp, TEXT("AllowPrivateAccess"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileMovementComp, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_ProjectileMovementComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ProjectileMovementComp, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/ShooterProjectile.h"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("AllowPrivateAccess"), TEXT("Collision"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("Category"), TEXT("Projectile"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionComp, TEXT("ModuleRelativePath"), TEXT("Public/Weapon/ShooterProjectile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterProjectile, 3575372645);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterProjectile(Z_Construct_UClass_AShooterProjectile, &AShooterProjectile::StaticClass, TEXT("/Script/ShooterGame"), TEXT("AShooterProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
