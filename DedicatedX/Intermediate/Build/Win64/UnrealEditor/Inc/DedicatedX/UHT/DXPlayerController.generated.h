// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controller/DXPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEDICATEDX_DXPlayerController_generated_h
#error "DXPlayerController.generated.h already included, missing '#pragma once' in DXPlayerController.h"
#endif
#define DEDICATEDX_DXPlayerController_generated_h

#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientRPCReturnToTitle_Implementation(); \
	virtual void ClientRPCShowGameResultWidget_Implementation(int32 InRanking); \
	DECLARE_FUNCTION(execClientRPCReturnToTitle); \
	DECLARE_FUNCTION(execClientRPCShowGameResultWidget);


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_18_CALLBACK_WRAPPERS
#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADXPlayerController(); \
	friend struct Z_Construct_UClass_ADXPlayerController_Statics; \
public: \
	DECLARE_CLASS(ADXPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DedicatedX"), NO_API) \
	DECLARE_SERIALIZER(ADXPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NotificationText=NETFIELD_REP_START, \
		NETFIELD_REP_END=NotificationText	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADXPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADXPlayerController(ADXPlayerController&&); \
	ADXPlayerController(const ADXPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADXPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADXPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADXPlayerController) \
	NO_API virtual ~ADXPlayerController();


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_15_PROLOG
#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_18_CALLBACK_WRAPPERS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEDICATEDX_API UClass* StaticClass<class ADXPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
