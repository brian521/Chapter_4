// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gimmick/DXLandMine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DEDICATEDX_DXLandMine_generated_h
#error "DXLandMine.generated.h already included, missing '#pragma once' in DXLandMine.h"
#endif
#define DEDICATEDX_DXLandMine_generated_h

#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCSpawnEffect_Implementation(); \
	DECLARE_FUNCTION(execOnRep_IsExploded); \
	DECLARE_FUNCTION(execMulticastRPCSpawnEffect); \
	DECLARE_FUNCTION(execOnLandMineBeginOverlap);


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h_17_CALLBACK_WRAPPERS
#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADXLandMine(); \
	friend struct Z_Construct_UClass_ADXLandMine_Statics; \
public: \
	DECLARE_CLASS(ADXLandMine, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DedicatedX"), NO_API) \
	DECLARE_SERIALIZER(ADXLandMine) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsExploded=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsExploded	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADXLandMine(ADXLandMine&&); \
	ADXLandMine(const ADXLandMine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADXLandMine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADXLandMine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADXLandMine) \
	NO_API virtual ~ADXLandMine();


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h_14_PROLOG
#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h_17_CALLBACK_WRAPPERS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEDICATEDX_API UClass* StaticClass<class ADXLandMine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Gimmick_DXLandMine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
