// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/DXGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEDICATEDX_DXGameModeBase_generated_h
#error "DXGameModeBase.generated.h already included, missing '#pragma once' in DXGameModeBase.h"
#endif
#define DEDICATEDX_DXGameModeBase_generated_h

#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMainTimerElapsed);


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADXGameModeBase(); \
	friend struct Z_Construct_UClass_ADXGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ADXGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DedicatedX"), NO_API) \
	DECLARE_SERIALIZER(ADXGameModeBase)


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADXGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADXGameModeBase(ADXGameModeBase&&); \
	ADXGameModeBase(const ADXGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADXGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADXGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADXGameModeBase) \
	NO_API virtual ~ADXGameModeBase();


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_14_PROLOG
#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEDICATEDX_API UClass* StaticClass<class ADXGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
