// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextBlock;
class UImage;
#ifdef SHOOTERGAME_MainWidget_generated_h
#error "MainWidget.generated.h already included, missing '#pragma once' in MainWidget.h"
#endif
#define SHOOTERGAME_MainWidget_generated_h

#define ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitMainWidget) \
	{ \
		P_GET_OBJECT(UTextBlock,Z_Param__DoorkeyNumText); \
		P_GET_OBJECT(UImage,Z_Param__BeHitImage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitMainWidget(Z_Param__DoorkeyNumText,Z_Param__BeHitImage); \
		P_NATIVE_END; \
	}


#define ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitMainWidget) \
	{ \
		P_GET_OBJECT(UTextBlock,Z_Param__DoorkeyNumText); \
		P_GET_OBJECT(UImage,Z_Param__BeHitImage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->InitMainWidget(Z_Param__DoorkeyNumText,Z_Param__BeHitImage); \
		P_NATIVE_END; \
	}


#define ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainWidget(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_UMainWidget(); \
public: \
	DECLARE_CLASS(UMainWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UMainWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMainWidget(); \
	friend SHOOTERGAME_API class UClass* Z_Construct_UClass_UMainWidget(); \
public: \
	DECLARE_CLASS(UMainWidget, UUserWidget, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(UMainWidget) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainWidget(UMainWidget&&); \
	NO_API UMainWidget(const UMainWidget&); \
public:


#define ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainWidget(UMainWidget&&); \
	NO_API UMainWidget(const UMainWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainWidget)


#define ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BeAttackedTexture() { return STRUCT_OFFSET(UMainWidget, BeAttackedTexture); }


#define ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_15_PROLOG
#define ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_RPC_WRAPPERS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_INCLASS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_INCLASS_NO_PURE_DECLS \
	ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_2_20171101_Source_ShooterGame_Public_UI_Widget_MainWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
