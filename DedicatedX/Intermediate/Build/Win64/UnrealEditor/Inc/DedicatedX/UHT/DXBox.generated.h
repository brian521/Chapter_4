// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gimmick/DXBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEDICATEDX_DXBox_generated_h
#error "DXBox.generated.h already included, missing '#pragma once' in DXBox.h"
#endif
#define DEDICATEDX_DXBox_generated_h

#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBox_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_ServerLightColor); \
	DECLARE_FUNCTION(execOnRep_ServerRotationYaw);


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBox_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADXBox(); \
	friend struct Z_Construct_UClass_ADXBox_Statics; \
public: \
	DECLARE_CLASS(ADXBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DedicatedX"), NO_API) \
	DECLARE_SERIALIZER(ADXBox) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerRotationYaw=NETFIELD_REP_START, \
		ServerLightColor, \
		NETFIELD_REP_END=ServerLightColor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADXBox(ADXBox&&); \
	ADXBox(const ADXBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADXBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADXBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADXBox) \
	NO_API virtual ~ADXBox();


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBox_h_13_PROLOG
#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBox_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBox_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBox_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBox_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEDICATEDX_API UClass* StaticClass<class ADXBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
