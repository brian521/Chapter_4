// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/Character/DXPlayerCharacter.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXPlayerCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXPlayerCharacter();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXPlayerCharacter_NoRegister();
DEDICATEDX_API UClass* Z_Construct_UClass_UDXHPTextWidgetComponent_NoRegister();
DEDICATEDX_API UClass* Z_Construct_UClass_UDXStatusComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class ADXPlayerCharacter Function ClientRPCPlayMeleeAttackMontage
struct DXPlayerCharacter_eventClientRPCPlayMeleeAttackMontage_Parms
{
	ADXPlayerCharacter* InTargetCharacter;
};
static const FName NAME_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage = FName(TEXT("ClientRPCPlayMeleeAttackMontage"));
void ADXPlayerCharacter::ClientRPCPlayMeleeAttackMontage(ADXPlayerCharacter* InTargetCharacter)
{
	DXPlayerCharacter_eventClientRPCPlayMeleeAttackMontage_Parms Parms;
	Parms.InTargetCharacter=InTargetCharacter;
	UFunction* Func = FindFunctionChecked(NAME_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage_Statics::NewProp_InTargetCharacter = { "InTargetCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DXPlayerCharacter_eventClientRPCPlayMeleeAttackMontage_Parms, InTargetCharacter), Z_Construct_UClass_ADXPlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage_Statics::NewProp_InTargetCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXPlayerCharacter, nullptr, "ClientRPCPlayMeleeAttackMontage", nullptr, nullptr, Z_Construct_UFunction_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage_Statics::PropPointers), sizeof(DXPlayerCharacter_eventClientRPCPlayMeleeAttackMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(DXPlayerCharacter_eventClientRPCPlayMeleeAttackMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXPlayerCharacter::execClientRPCPlayMeleeAttackMontage)
{
	P_GET_OBJECT(ADXPlayerCharacter,Z_Param_InTargetCharacter);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRPCPlayMeleeAttackMontage_Implementation(Z_Param_InTargetCharacter);
	P_NATIVE_END;
}
// End Class ADXPlayerCharacter Function ClientRPCPlayMeleeAttackMontage

// Begin Class ADXPlayerCharacter Function MulticastRPCMeleeAttack
static const FName NAME_ADXPlayerCharacter_MulticastRPCMeleeAttack = FName(TEXT("MulticastRPCMeleeAttack"));
void ADXPlayerCharacter::MulticastRPCMeleeAttack()
{
	UFunction* Func = FindFunctionChecked(NAME_ADXPlayerCharacter_MulticastRPCMeleeAttack);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ADXPlayerCharacter_MulticastRPCMeleeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXPlayerCharacter_MulticastRPCMeleeAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXPlayerCharacter, nullptr, "MulticastRPCMeleeAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_MulticastRPCMeleeAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXPlayerCharacter_MulticastRPCMeleeAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADXPlayerCharacter_MulticastRPCMeleeAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXPlayerCharacter_MulticastRPCMeleeAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXPlayerCharacter::execMulticastRPCMeleeAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastRPCMeleeAttack_Implementation();
	P_NATIVE_END;
}
// End Class ADXPlayerCharacter Function MulticastRPCMeleeAttack

// Begin Class ADXPlayerCharacter Function OnDeath
struct Z_Construct_UFunction_ADXPlayerCharacter_OnDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXPlayerCharacter_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXPlayerCharacter, nullptr, "OnDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_OnDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXPlayerCharacter_OnDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADXPlayerCharacter_OnDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXPlayerCharacter_OnDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXPlayerCharacter::execOnDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDeath();
	P_NATIVE_END;
}
// End Class ADXPlayerCharacter Function OnDeath

// Begin Class ADXPlayerCharacter Function OnRep_CanAttack
struct Z_Construct_UFunction_ADXPlayerCharacter_OnRep_CanAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXPlayerCharacter_OnRep_CanAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXPlayerCharacter, nullptr, "OnRep_CanAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_OnRep_CanAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXPlayerCharacter_OnRep_CanAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADXPlayerCharacter_OnRep_CanAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXPlayerCharacter_OnRep_CanAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXPlayerCharacter::execOnRep_CanAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CanAttack();
	P_NATIVE_END;
}
// End Class ADXPlayerCharacter Function OnRep_CanAttack

// Begin Class ADXPlayerCharacter Function ServerRPCMeleeAttack
struct DXPlayerCharacter_eventServerRPCMeleeAttack_Parms
{
	float InStartMeleeAttackTime;
};
static const FName NAME_ADXPlayerCharacter_ServerRPCMeleeAttack = FName(TEXT("ServerRPCMeleeAttack"));
void ADXPlayerCharacter::ServerRPCMeleeAttack(float InStartMeleeAttackTime)
{
	DXPlayerCharacter_eventServerRPCMeleeAttack_Parms Parms;
	Parms.InStartMeleeAttackTime=InStartMeleeAttackTime;
	UFunction* Func = FindFunctionChecked(NAME_ADXPlayerCharacter_ServerRPCMeleeAttack);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCMeleeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InStartMeleeAttackTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCMeleeAttack_Statics::NewProp_InStartMeleeAttackTime = { "InStartMeleeAttackTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DXPlayerCharacter_eventServerRPCMeleeAttack_Parms, InStartMeleeAttackTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCMeleeAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCMeleeAttack_Statics::NewProp_InStartMeleeAttackTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCMeleeAttack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCMeleeAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXPlayerCharacter, nullptr, "ServerRPCMeleeAttack", nullptr, nullptr, Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCMeleeAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCMeleeAttack_Statics::PropPointers), sizeof(DXPlayerCharacter_eventServerRPCMeleeAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCMeleeAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCMeleeAttack_Statics::Function_MetaDataParams) };
static_assert(sizeof(DXPlayerCharacter_eventServerRPCMeleeAttack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCMeleeAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCMeleeAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXPlayerCharacter::execServerRPCMeleeAttack)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InStartMeleeAttackTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerRPCMeleeAttack_Validate(Z_Param_InStartMeleeAttackTime))
	{
		RPC_ValidateFailed(TEXT("ServerRPCMeleeAttack_Validate"));
		return;
	}
	P_THIS->ServerRPCMeleeAttack_Implementation(Z_Param_InStartMeleeAttackTime);
	P_NATIVE_END;
}
// End Class ADXPlayerCharacter Function ServerRPCMeleeAttack

// Begin Class ADXPlayerCharacter Function ServerRPCPerformMeleeHit
struct DXPlayerCharacter_eventServerRPCPerformMeleeHit_Parms
{
	ACharacter* InDamagedCharacters;
	float InCheckTime;
};
static const FName NAME_ADXPlayerCharacter_ServerRPCPerformMeleeHit = FName(TEXT("ServerRPCPerformMeleeHit"));
void ADXPlayerCharacter::ServerRPCPerformMeleeHit(ACharacter* InDamagedCharacters, float InCheckTime)
{
	DXPlayerCharacter_eventServerRPCPerformMeleeHit_Parms Parms;
	Parms.InDamagedCharacters=InDamagedCharacters;
	Parms.InCheckTime=InCheckTime;
	UFunction* Func = FindFunctionChecked(NAME_ADXPlayerCharacter_ServerRPCPerformMeleeHit);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDamagedCharacters;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InCheckTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit_Statics::NewProp_InDamagedCharacters = { "InDamagedCharacters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DXPlayerCharacter_eventServerRPCPerformMeleeHit_Parms, InDamagedCharacters), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit_Statics::NewProp_InCheckTime = { "InCheckTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DXPlayerCharacter_eventServerRPCPerformMeleeHit_Parms, InCheckTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit_Statics::NewProp_InDamagedCharacters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit_Statics::NewProp_InCheckTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXPlayerCharacter, nullptr, "ServerRPCPerformMeleeHit", nullptr, nullptr, Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit_Statics::PropPointers), sizeof(DXPlayerCharacter_eventServerRPCPerformMeleeHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(DXPlayerCharacter_eventServerRPCPerformMeleeHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXPlayerCharacter::execServerRPCPerformMeleeHit)
{
	P_GET_OBJECT(ACharacter,Z_Param_InDamagedCharacters);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InCheckTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerRPCPerformMeleeHit_Validate(Z_Param_InDamagedCharacters,Z_Param_InCheckTime))
	{
		RPC_ValidateFailed(TEXT("ServerRPCPerformMeleeHit_Validate"));
		return;
	}
	P_THIS->ServerRPCPerformMeleeHit_Implementation(Z_Param_InDamagedCharacters,Z_Param_InCheckTime);
	P_NATIVE_END;
}
// End Class ADXPlayerCharacter Function ServerRPCPerformMeleeHit

// Begin Class ADXPlayerCharacter Function ServerRPCSpawnLandMine
static const FName NAME_ADXPlayerCharacter_ServerRPCSpawnLandMine = FName(TEXT("ServerRPCSpawnLandMine"));
void ADXPlayerCharacter::ServerRPCSpawnLandMine()
{
	UFunction* Func = FindFunctionChecked(NAME_ADXPlayerCharacter_ServerRPCSpawnLandMine);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCSpawnLandMine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCSpawnLandMine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXPlayerCharacter, nullptr, "ServerRPCSpawnLandMine", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCSpawnLandMine_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCSpawnLandMine_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCSpawnLandMine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCSpawnLandMine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXPlayerCharacter::execServerRPCSpawnLandMine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerRPCSpawnLandMine_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerRPCSpawnLandMine_Validate"));
		return;
	}
	P_THIS->ServerRPCSpawnLandMine_Implementation();
	P_NATIVE_END;
}
// End Class ADXPlayerCharacter Function ServerRPCSpawnLandMine

// Begin Class ADXPlayerCharacter Function ServerRPCUpdateAimValue
struct DXPlayerCharacter_eventServerRPCUpdateAimValue_Parms
{
	float InAimPitchValue;
};
static const FName NAME_ADXPlayerCharacter_ServerRPCUpdateAimValue = FName(TEXT("ServerRPCUpdateAimValue"));
void ADXPlayerCharacter::ServerRPCUpdateAimValue(float const& InAimPitchValue)
{
	DXPlayerCharacter_eventServerRPCUpdateAimValue_Parms Parms;
	Parms.InAimPitchValue=InAimPitchValue;
	UFunction* Func = FindFunctionChecked(NAME_ADXPlayerCharacter_ServerRPCUpdateAimValue);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCUpdateAimValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAimPitchValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAimPitchValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCUpdateAimValue_Statics::NewProp_InAimPitchValue = { "InAimPitchValue", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DXPlayerCharacter_eventServerRPCUpdateAimValue_Parms, InAimPitchValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAimPitchValue_MetaData), NewProp_InAimPitchValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCUpdateAimValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCUpdateAimValue_Statics::NewProp_InAimPitchValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCUpdateAimValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCUpdateAimValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADXPlayerCharacter, nullptr, "ServerRPCUpdateAimValue", nullptr, nullptr, Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCUpdateAimValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCUpdateAimValue_Statics::PropPointers), sizeof(DXPlayerCharacter_eventServerRPCUpdateAimValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCUpdateAimValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCUpdateAimValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(DXPlayerCharacter_eventServerRPCUpdateAimValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCUpdateAimValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCUpdateAimValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADXPlayerCharacter::execServerRPCUpdateAimValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAimPitchValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRPCUpdateAimValue_Implementation(Z_Param_InAimPitchValue);
	P_NATIVE_END;
}
// End Class ADXPlayerCharacter Function ServerRPCUpdateAimValue

// Begin Class ADXPlayerCharacter
void ADXPlayerCharacter::StaticRegisterNativesADXPlayerCharacter()
{
	UClass* Class = ADXPlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientRPCPlayMeleeAttackMontage", &ADXPlayerCharacter::execClientRPCPlayMeleeAttackMontage },
		{ "MulticastRPCMeleeAttack", &ADXPlayerCharacter::execMulticastRPCMeleeAttack },
		{ "OnDeath", &ADXPlayerCharacter::execOnDeath },
		{ "OnRep_CanAttack", &ADXPlayerCharacter::execOnRep_CanAttack },
		{ "ServerRPCMeleeAttack", &ADXPlayerCharacter::execServerRPCMeleeAttack },
		{ "ServerRPCPerformMeleeHit", &ADXPlayerCharacter::execServerRPCPerformMeleeHit },
		{ "ServerRPCSpawnLandMine", &ADXPlayerCharacter::execServerRPCSpawnLandMine },
		{ "ServerRPCUpdateAimValue", &ADXPlayerCharacter::execServerRPCUpdateAimValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADXPlayerCharacter);
UClass* Z_Construct_UClass_ADXPlayerCharacter_NoRegister()
{
	return ADXPlayerCharacter::StaticClass();
}
struct Z_Construct_UClass_ADXPlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/DXPlayerCharacter.h" },
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "DXPlayerCharacter|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "DXPlayerCharacter|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusComponent_MetaData[] = {
		{ "Category", "DXPlayerCharacter|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HPTextWidgetComponent_MetaData[] = {
		{ "Category", "DXPlayerCharacter|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "DXPlayerCharacter|Input" },
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "DXPlayerCharacter|Input" },
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "DXPlayerCharacter|Input" },
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "DXPlayerCharacter|Input" },
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandMineAction_MetaData[] = {
		{ "Category", "DXPlayerCharacter|Input" },
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackAction_MetaData[] = {
		{ "Category", "DXPlayerCharacter|Input" },
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAimPitch_MetaData[] = {
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandMineClass_MetaData[] = {
		{ "Category", "DXPlayerCharacter" },
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanAttack_MetaData[] = {
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackMontage_MetaData[] = {
		{ "Category", "DXPlayerCharacter" },
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HPTextWidgetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandMineAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeAttackAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentAimPitch;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LandMineClass;
	static void NewProp_bCanAttack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAttack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeAttackMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADXPlayerCharacter_ClientRPCPlayMeleeAttackMontage, "ClientRPCPlayMeleeAttackMontage" }, // 2269588859
		{ &Z_Construct_UFunction_ADXPlayerCharacter_MulticastRPCMeleeAttack, "MulticastRPCMeleeAttack" }, // 1694661744
		{ &Z_Construct_UFunction_ADXPlayerCharacter_OnDeath, "OnDeath" }, // 3258279190
		{ &Z_Construct_UFunction_ADXPlayerCharacter_OnRep_CanAttack, "OnRep_CanAttack" }, // 3979333503
		{ &Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCMeleeAttack, "ServerRPCMeleeAttack" }, // 2989505726
		{ &Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCPerformMeleeHit, "ServerRPCPerformMeleeHit" }, // 3931145204
		{ &Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCSpawnLandMine, "ServerRPCSpawnLandMine" }, // 1896295914
		{ &Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCUpdateAimValue, "ServerRPCUpdateAimValue" }, // 4039934199
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADXPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_StatusComponent = { "StatusComponent", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, StatusComponent), Z_Construct_UClass_UDXStatusComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusComponent_MetaData), NewProp_StatusComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_HPTextWidgetComponent = { "HPTextWidgetComponent", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, HPTextWidgetComponent), Z_Construct_UClass_UDXHPTextWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HPTextWidgetComponent_MetaData), NewProp_HPTextWidgetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_LandMineAction = { "LandMineAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, LandMineAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandMineAction_MetaData), NewProp_LandMineAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_MeleeAttackAction = { "MeleeAttackAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, MeleeAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeAttackAction_MetaData), NewProp_MeleeAttackAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_CurrentAimPitch = { "CurrentAimPitch", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, CurrentAimPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAimPitch_MetaData), NewProp_CurrentAimPitch_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_LandMineClass = { "LandMineClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, LandMineClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandMineClass_MetaData), NewProp_LandMineClass_MetaData) };
void Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_bCanAttack_SetBit(void* Obj)
{
	((ADXPlayerCharacter*)Obj)->bCanAttack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_bCanAttack = { "bCanAttack", "OnRep_CanAttack", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ADXPlayerCharacter), &Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_bCanAttack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanAttack_MetaData), NewProp_bCanAttack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_MeleeAttackMontage = { "MeleeAttackMontage", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, MeleeAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeAttackMontage_MetaData), NewProp_MeleeAttackMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADXPlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_StatusComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_HPTextWidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_LandMineAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_MeleeAttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_CurrentAimPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_LandMineClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_bCanAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_MeleeAttackMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXPlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADXPlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXPlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADXPlayerCharacter_Statics::ClassParams = {
	&ADXPlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADXPlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADXPlayerCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADXPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ADXPlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADXPlayerCharacter()
{
	if (!Z_Registration_Info_UClass_ADXPlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADXPlayerCharacter.OuterSingleton, Z_Construct_UClass_ADXPlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADXPlayerCharacter.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<ADXPlayerCharacter>()
{
	return ADXPlayerCharacter::StaticClass();
}
void ADXPlayerCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentAimPitch(TEXT("CurrentAimPitch"));
	static const FName Name_bCanAttack(TEXT("bCanAttack"));
	const bool bIsValid = true
		&& Name_CurrentAimPitch == ClassReps[(int32)ENetFields_Private::CurrentAimPitch].Property->GetFName()
		&& Name_bCanAttack == ClassReps[(int32)ENetFields_Private::bCanAttack].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADXPlayerCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADXPlayerCharacter);
ADXPlayerCharacter::~ADXPlayerCharacter() {}
// End Class ADXPlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADXPlayerCharacter, ADXPlayerCharacter::StaticClass, TEXT("ADXPlayerCharacter"), &Z_Registration_Info_UClass_ADXPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADXPlayerCharacter), 576017051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_1635404474(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
