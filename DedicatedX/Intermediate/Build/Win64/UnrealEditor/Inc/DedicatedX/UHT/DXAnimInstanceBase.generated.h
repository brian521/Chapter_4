// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/DXAnimInstanceBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEDICATEDX_DXAnimInstanceBase_generated_h
#error "DXAnimInstanceBase.generated.h already included, missing '#pragma once' in DXAnimInstanceBase.h"
#endif
#define DEDICATEDX_DXAnimInstanceBase_generated_h

#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAnimNotify_CheckMeleeAttackHit);


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDXAnimInstanceBase(); \
	friend struct Z_Construct_UClass_UDXAnimInstanceBase_Statics; \
public: \
	DECLARE_CLASS(UDXAnimInstanceBase, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DedicatedX"), NO_API) \
	DECLARE_SERIALIZER(UDXAnimInstanceBase)


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDXAnimInstanceBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDXAnimInstanceBase(UDXAnimInstanceBase&&); \
	UDXAnimInstanceBase(const UDXAnimInstanceBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDXAnimInstanceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDXAnimInstanceBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDXAnimInstanceBase) \
	NO_API virtual ~UDXAnimInstanceBase();


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_15_PROLOG
#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEDICATEDX_API UClass* StaticClass<class UDXAnimInstanceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
