// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/CXPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHATX_CXPawn_generated_h
#error "CXPawn.generated.h already included, missing '#pragma once' in CXPawn.h"
#endif
#define CHATX_CXPawn_generated_h

#define FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXPawn(); \
	friend struct Z_Construct_UClass_ACXPawn_Statics; \
public: \
	DECLARE_CLASS(ACXPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChatX"), NO_API) \
	DECLARE_SERIALIZER(ACXPawn)


#define FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPawn_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACXPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXPawn(ACXPawn&&); \
	ACXPawn(const ACXPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACXPawn) \
	NO_API virtual ~ACXPawn();


#define FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPawn_h_9_PROLOG
#define FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHATX_API UClass* StaticClass<class ACXPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
