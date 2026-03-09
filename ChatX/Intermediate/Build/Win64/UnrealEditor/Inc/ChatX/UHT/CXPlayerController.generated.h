// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/CXPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHATX_CXPlayerController_generated_h
#error "CXPlayerController.generated.h already included, missing '#pragma once' in CXPlayerController.h"
#endif
#define CHATX_CXPlayerController_generated_h

#define FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXPlayerController(); \
	friend struct Z_Construct_UClass_ACXPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACXPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChatX"), NO_API) \
	DECLARE_SERIALIZER(ACXPlayerController)


#define FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACXPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXPlayerController(ACXPlayerController&&); \
	ACXPlayerController(const ACXPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACXPlayerController) \
	NO_API virtual ~ACXPlayerController();


#define FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPlayerController_h_12_PROLOG
#define FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHATX_API UClass* StaticClass<class ACXPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
