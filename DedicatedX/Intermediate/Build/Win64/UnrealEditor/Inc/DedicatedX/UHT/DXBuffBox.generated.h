// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gimmick/DXBuffBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UParticleSystemComponent;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DEDICATEDX_DXBuffBox_generated_h
#error "DXBuffBox.generated.h already included, missing '#pragma once' in DXBuffBox.h"
#endif
#define DEDICATEDX_DXBuffBox_generated_h

#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBuffBox_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEffectFinished); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBuffBox_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADXBuffBox(); \
	friend struct Z_Construct_UClass_ADXBuffBox_Statics; \
public: \
	DECLARE_CLASS(ADXBuffBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DedicatedX"), NO_API) \
	DECLARE_SERIALIZER(ADXBuffBox)


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBuffBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADXBuffBox(ADXBuffBox&&); \
	ADXBuffBox(const ADXBuffBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADXBuffBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADXBuffBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADXBuffBox) \
	NO_API virtual ~ADXBuffBox();


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBuffBox_h_13_PROLOG
#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBuffBox_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBuffBox_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBuffBox_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBuffBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEDICATEDX_API UClass* StaticClass<class ADXBuffBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBuffBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
