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
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

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

// Begin Class ADXPlayerCharacter
void ADXPlayerCharacter::StaticRegisterNativesADXPlayerCharacter()
{
	UClass* Class = ADXPlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ServerRPCSpawnLandMine", &ADXPlayerCharacter::execServerRPCSpawnLandMine },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandMineClass_MetaData[] = {
		{ "Category", "DXPlayerCharacter" },
		{ "ModuleRelativePath", "Character/DXPlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandMineAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LandMineClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADXPlayerCharacter_ServerRPCSpawnLandMine, "ServerRPCSpawnLandMine" }, // 1896295914
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADXPlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x012408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_LandMineAction = { "LandMineAction", nullptr, (EPropertyFlags)0x0124080000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, LandMineAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandMineAction_MetaData), NewProp_LandMineAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_LandMineClass = { "LandMineClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXPlayerCharacter, LandMineClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandMineClass_MetaData), NewProp_LandMineClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADXPlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_LandMineAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXPlayerCharacter_Statics::NewProp_LandMineClass,
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
DEFINE_VTABLE_PTR_HELPER_CTOR(ADXPlayerCharacter);
ADXPlayerCharacter::~ADXPlayerCharacter() {}
// End Class ADXPlayerCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADXPlayerCharacter, ADXPlayerCharacter::StaticClass, TEXT("ADXPlayerCharacter"), &Z_Registration_Info_UClass_ADXPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADXPlayerCharacter), 1132622482U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_356742830(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Character_DXPlayerCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
