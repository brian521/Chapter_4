// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/DXPlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEDICATEDX_DXPlayerCharacter_generated_h
#error "DXPlayerCharacter.generated.h already included, missing '#pragma once' in DXPlayerCharacter.h"
#endif
#define DEDICATEDX_DXPlayerCharacter_generated_h

#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerRPCSpawnLandMine_Validate(); \
	virtual void ServerRPCSpawnLandMine_Implementation(); \
	DECLARE_FUNCTION(execServerRPCSpawnLandMine);


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_18_CALLBACK_WRAPPERS
#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADXPlayerCharacter(); \
	friend struct Z_Construct_UClass_ADXPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ADXPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DedicatedX"), NO_API) \
	DECLARE_SERIALIZER(ADXPlayerCharacter)


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADXPlayerCharacter(ADXPlayerCharacter&&); \
	ADXPlayerCharacter(const ADXPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADXPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADXPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADXPlayerCharacter) \
	NO_API virtual ~ADXPlayerCharacter();


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_15_PROLOG
#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_18_CALLBACK_WRAPPERS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEDICATEDX_API UClass* StaticClass<class ADXPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
