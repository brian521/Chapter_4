// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/Animation/DXAnimInstanceBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXAnimInstanceBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXPlayerCharacter_NoRegister();
DEDICATEDX_API UClass* Z_Construct_UClass_UDXAnimInstanceBase();
DEDICATEDX_API UClass* Z_Construct_UClass_UDXAnimInstanceBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class UDXAnimInstanceBase Function AnimNotify_CheckMeleeAttackHit
struct Z_Construct_UFunction_UDXAnimInstanceBase_AnimNotify_CheckMeleeAttackHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/DXAnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDXAnimInstanceBase_AnimNotify_CheckMeleeAttackHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDXAnimInstanceBase, nullptr, "AnimNotify_CheckMeleeAttackHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDXAnimInstanceBase_AnimNotify_CheckMeleeAttackHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDXAnimInstanceBase_AnimNotify_CheckMeleeAttackHit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDXAnimInstanceBase_AnimNotify_CheckMeleeAttackHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDXAnimInstanceBase_AnimNotify_CheckMeleeAttackHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDXAnimInstanceBase::execAnimNotify_CheckMeleeAttackHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimNotify_CheckMeleeAttackHit();
	P_NATIVE_END;
}
// End Class UDXAnimInstanceBase Function AnimNotify_CheckMeleeAttackHit

// Begin Class UDXAnimInstanceBase
void UDXAnimInstanceBase::StaticRegisterNativesUDXAnimInstanceBase()
{
	UClass* Class = UDXAnimInstanceBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimNotify_CheckMeleeAttackHit", &UDXAnimInstanceBase::execAnimNotify_CheckMeleeAttackHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDXAnimInstanceBase);
UClass* Z_Construct_UClass_UDXAnimInstanceBase_NoRegister()
{
	return UDXAnimInstanceBase::StaticClass();
}
struct Z_Construct_UClass_UDXAnimInstanceBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/DXAnimInstanceBase.h" },
		{ "ModuleRelativePath", "Animation/DXAnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Animation/DXAnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacterMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Animation/DXAnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "DXAnimInstanceBase" },
		{ "ModuleRelativePath", "Animation/DXAnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "DXAnimInstanceBase" },
		{ "ModuleRelativePath", "Animation/DXAnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMove_MetaData[] = {
		{ "Category", "DXAnimInstanceBase" },
		{ "ModuleRelativePath", "Animation/DXAnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[] = {
		{ "Category", "DXAnimInstanceBase" },
		{ "ModuleRelativePath", "Animation/DXAnimInstanceBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimPitch_MetaData[] = {
		{ "Category", "DXAnimInstanceBase" },
		{ "ModuleRelativePath", "Animation/DXAnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacterMovementComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static void NewProp_bShouldMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
	static void NewProp_bIsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimPitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDXAnimInstanceBase_AnimNotify_CheckMeleeAttackHit, "AnimNotify_CheckMeleeAttackHit" }, // 4245532078
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDXAnimInstanceBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDXAnimInstanceBase, OwnerCharacter), Z_Construct_UClass_ADXPlayerCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_OwnerCharacterMovementComponent = { "OwnerCharacterMovementComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDXAnimInstanceBase, OwnerCharacterMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacterMovementComponent_MetaData), NewProp_OwnerCharacterMovementComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDXAnimInstanceBase, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDXAnimInstanceBase, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
void Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_bShouldMove_SetBit(void* Obj)
{
	((UDXAnimInstanceBase*)Obj)->bShouldMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDXAnimInstanceBase), &Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldMove_MetaData), NewProp_bShouldMove_MetaData) };
void Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_bIsFalling_SetBit(void* Obj)
{
	((UDXAnimInstanceBase*)Obj)->bIsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDXAnimInstanceBase), &Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFalling_MetaData), NewProp_bIsFalling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_AimPitch = { "AimPitch", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDXAnimInstanceBase, AimPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimPitch_MetaData), NewProp_AimPitch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDXAnimInstanceBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_OwnerCharacterMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_bShouldMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_bIsFalling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDXAnimInstanceBase_Statics::NewProp_AimPitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDXAnimInstanceBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDXAnimInstanceBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDXAnimInstanceBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDXAnimInstanceBase_Statics::ClassParams = {
	&UDXAnimInstanceBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDXAnimInstanceBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDXAnimInstanceBase_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDXAnimInstanceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDXAnimInstanceBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDXAnimInstanceBase()
{
	if (!Z_Registration_Info_UClass_UDXAnimInstanceBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDXAnimInstanceBase.OuterSingleton, Z_Construct_UClass_UDXAnimInstanceBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDXAnimInstanceBase.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<UDXAnimInstanceBase>()
{
	return UDXAnimInstanceBase::StaticClass();
}
UDXAnimInstanceBase::UDXAnimInstanceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDXAnimInstanceBase);
UDXAnimInstanceBase::~UDXAnimInstanceBase() {}
// End Class UDXAnimInstanceBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDXAnimInstanceBase, UDXAnimInstanceBase::StaticClass, TEXT("UDXAnimInstanceBase"), &Z_Registration_Info_UClass_UDXAnimInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDXAnimInstanceBase), 3437496101U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_469298721(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
