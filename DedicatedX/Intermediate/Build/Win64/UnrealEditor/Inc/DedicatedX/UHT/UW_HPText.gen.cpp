// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/UI/UW_HPText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUW_HPText() {}

// Begin Cross Module References
DEDICATEDX_API UClass* Z_Construct_UClass_UUW_HPText();
DEDICATEDX_API UClass* Z_Construct_UClass_UUW_HPText_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class UUW_HPText Function OnCurrentHPChange
struct Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange_Statics
{
	struct UW_HPText_eventOnCurrentHPChange_Parms
	{
		float InCurrentHP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/UW_HPText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InCurrentHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange_Statics::NewProp_InCurrentHP = { "InCurrentHP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_HPText_eventOnCurrentHPChange_Parms, InCurrentHP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange_Statics::NewProp_InCurrentHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUW_HPText, nullptr, "OnCurrentHPChange", nullptr, nullptr, Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange_Statics::UW_HPText_eventOnCurrentHPChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange_Statics::UW_HPText_eventOnCurrentHPChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_HPText::execOnCurrentHPChange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InCurrentHP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCurrentHPChange(Z_Param_InCurrentHP);
	P_NATIVE_END;
}
// End Class UUW_HPText Function OnCurrentHPChange

// Begin Class UUW_HPText Function OnMaxHPChange
struct Z_Construct_UFunction_UUW_HPText_OnMaxHPChange_Statics
{
	struct UW_HPText_eventOnMaxHPChange_Parms
	{
		float InMaxHP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/UW_HPText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxHP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUW_HPText_OnMaxHPChange_Statics::NewProp_InMaxHP = { "InMaxHP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_HPText_eventOnMaxHPChange_Parms, InMaxHP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUW_HPText_OnMaxHPChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUW_HPText_OnMaxHPChange_Statics::NewProp_InMaxHP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HPText_OnMaxHPChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_HPText_OnMaxHPChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUW_HPText, nullptr, "OnMaxHPChange", nullptr, nullptr, Z_Construct_UFunction_UUW_HPText_OnMaxHPChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HPText_OnMaxHPChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUW_HPText_OnMaxHPChange_Statics::UW_HPText_eventOnMaxHPChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_HPText_OnMaxHPChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_HPText_OnMaxHPChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUW_HPText_OnMaxHPChange_Statics::UW_HPText_eventOnMaxHPChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUW_HPText_OnMaxHPChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_HPText_OnMaxHPChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_HPText::execOnMaxHPChange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxHP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMaxHPChange(Z_Param_InMaxHP);
	P_NATIVE_END;
}
// End Class UUW_HPText Function OnMaxHPChange

// Begin Class UUW_HPText
void UUW_HPText::StaticRegisterNativesUUW_HPText()
{
	UClass* Class = UUW_HPText::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCurrentHPChange", &UUW_HPText::execOnCurrentHPChange },
		{ "OnMaxHPChange", &UUW_HPText::execOnMaxHPChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUW_HPText);
UClass* Z_Construct_UClass_UUW_HPText_NoRegister()
{
	return UUW_HPText::StaticClass();
}
struct Z_Construct_UClass_UUW_HPText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/UW_HPText.h" },
		{ "ModuleRelativePath", "UI/UW_HPText.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHPText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UW_HPText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/UW_HPText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHPText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UW_HPText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/UW_HPText.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningActor_MetaData[] = {
		{ "Category", "UW_HPText" },
		{ "ModuleRelativePath", "UI/UW_HPText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentHPText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxHPText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUW_HPText_OnCurrentHPChange, "OnCurrentHPChange" }, // 1931533069
		{ &Z_Construct_UFunction_UUW_HPText_OnMaxHPChange, "OnMaxHPChange" }, // 2809288231
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_HPText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_HPText_Statics::NewProp_CurrentHPText = { "CurrentHPText", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_HPText, CurrentHPText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHPText_MetaData), NewProp_CurrentHPText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_HPText_Statics::NewProp_MaxHPText = { "MaxHPText", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_HPText, MaxHPText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHPText_MetaData), NewProp_MaxHPText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_HPText_Statics::NewProp_OwningActor = { "OwningActor", nullptr, (EPropertyFlags)0x0124080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_HPText, OwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningActor_MetaData), NewProp_OwningActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUW_HPText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_HPText_Statics::NewProp_CurrentHPText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_HPText_Statics::NewProp_MaxHPText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_HPText_Statics::NewProp_OwningActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_HPText_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUW_HPText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_HPText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_HPText_Statics::ClassParams = {
	&UUW_HPText::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUW_HPText_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUW_HPText_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_HPText_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_HPText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUW_HPText()
{
	if (!Z_Registration_Info_UClass_UUW_HPText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_HPText.OuterSingleton, Z_Construct_UClass_UUW_HPText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_HPText.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<UUW_HPText>()
{
	return UUW_HPText::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUW_HPText);
UUW_HPText::~UUW_HPText() {}
// End Class UUW_HPText

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_UI_UW_HPText_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_HPText, UUW_HPText::StaticClass, TEXT("UUW_HPText"), &Z_Registration_Info_UClass_UUW_HPText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_HPText), 4242747170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_UI_UW_HPText_h_749969237(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_UI_UW_HPText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_UI_UW_HPText_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
