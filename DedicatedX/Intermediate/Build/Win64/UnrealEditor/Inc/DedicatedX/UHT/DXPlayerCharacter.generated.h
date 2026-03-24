// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/DXPlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class ADXPlayerCharacter;
#ifdef DEDICATEDX_DXPlayerCharacter_generated_h
#error "DXPlayerCharacter.generated.h already included, missing '#pragma once' in DXPlayerCharacter.h"
#endif
#define DEDICATEDX_DXPlayerCharacter_generated_h

#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientRPCPlayMeleeAttackMontage_Implementation(ADXPlayerCharacter* InTargetCharacter); \
	virtual bool ServerRPCPerformMeleeHit_Validate(ACharacter* , float ); \
	virtual void ServerRPCPerformMeleeHit_Implementation(ACharacter* InDamagedCharacters, float InCheckTime); \
	virtual void MulticastRPCMeleeAttack_Implementation(); \
	virtual bool ServerRPCMeleeAttack_Validate(float ); \
	virtual void ServerRPCMeleeAttack_Implementation(float InStartMeleeAttackTime); \
	virtual bool ServerRPCSpawnLandMine_Validate(); \
	virtual void ServerRPCSpawnLandMine_Implementation(); \
	virtual void ServerRPCUpdateAimValue_Implementation(float const& InAimPitchValue); \
	DECLARE_FUNCTION(execClientRPCPlayMeleeAttackMontage); \
	DECLARE_FUNCTION(execServerRPCPerformMeleeHit); \
	DECLARE_FUNCTION(execOnRep_CanAttack); \
	DECLARE_FUNCTION(execMulticastRPCMeleeAttack); \
	DECLARE_FUNCTION(execServerRPCMeleeAttack); \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execServerRPCSpawnLandMine); \
	DECLARE_FUNCTION(execServerRPCUpdateAimValue);


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_21_CALLBACK_WRAPPERS
#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADXPlayerCharacter(); \
	friend struct Z_Construct_UClass_ADXPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(ADXPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DedicatedX"), NO_API) \
	DECLARE_SERIALIZER(ADXPlayerCharacter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentAimPitch=NETFIELD_REP_START, \
		bCanAttack, \
		NETFIELD_REP_END=bCanAttack	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADXPlayerCharacter(ADXPlayerCharacter&&); \
	ADXPlayerCharacter(const ADXPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADXPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADXPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADXPlayerCharacter) \
	NO_API virtual ~ADXPlayerCharacter();


#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_18_PROLOG
#define FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_21_CALLBACK_WRAPPERS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEDICATEDX_API UClass* StaticClass<class ADXPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
