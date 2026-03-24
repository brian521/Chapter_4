// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/UI/UW_GameResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUW_GameResult() {}

// Begin Cross Module References
DEDICATEDX_API UClass* Z_Construct_UClass_UUW_GameResult();
DEDICATEDX_API UClass* Z_Construct_UClass_UUW_GameResult_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class UUW_GameResult Function OnReturnToTitleButtonClicked
struct Z_Construct_UFunction_UUW_GameResult_OnReturnToTitleButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/UW_GameResult.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_GameResult_OnReturnToTitleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUW_GameResult, nullptr, "OnReturnToTitleButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_GameResult_OnReturnToTitleButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_GameResult_OnReturnToTitleButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUW_GameResult_OnReturnToTitleButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_GameResult_OnReturnToTitleButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_GameResult::execOnReturnToTitleButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReturnToTitleButtonClicked();
	P_NATIVE_END;
}
// End Class UUW_GameResult Function OnReturnToTitleButtonClicked

// Begin Class UUW_GameResult
void UUW_GameResult::StaticRegisterNativesUUW_GameResult()
{
	UClass* Class = UUW_GameResult::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnReturnToTitleButtonClicked", &UUW_GameResult::execOnReturnToTitleButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUW_GameResult);
UClass* Z_Construct_UClass_UUW_GameResult_NoRegister()
{
	return UUW_GameResult::StaticClass();
}
struct Z_Construct_UClass_UUW_GameResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/UW_GameResult.h" },
		{ "ModuleRelativePath", "UI/UW_GameResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UW_GameResult" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/UW_GameResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RankingText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UW_GameResult" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/UW_GameResult.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnToTitleButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UW_GameResult" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/UW_GameResult.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RankingText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnToTitleButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUW_GameResult_OnReturnToTitleButtonClicked, "OnReturnToTitleButtonClicked" }, // 1894864610
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_GameResult>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_GameResult_Statics::NewProp_ResultText = { "ResultText", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_GameResult, ResultText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultText_MetaData), NewProp_ResultText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_GameResult_Statics::NewProp_RankingText = { "RankingText", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_GameResult, RankingText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RankingText_MetaData), NewProp_RankingText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_GameResult_Statics::NewProp_ReturnToTitleButton = { "ReturnToTitleButton", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_GameResult, ReturnToTitleButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnToTitleButton_MetaData), NewProp_ReturnToTitleButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUW_GameResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_GameResult_Statics::NewProp_ResultText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_GameResult_Statics::NewProp_RankingText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_GameResult_Statics::NewProp_ReturnToTitleButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_GameResult_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUW_GameResult_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_GameResult_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_GameResult_Statics::ClassParams = {
	&UUW_GameResult::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUW_GameResult_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUW_GameResult_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_GameResult_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_GameResult_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUW_GameResult()
{
	if (!Z_Registration_Info_UClass_UUW_GameResult.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_GameResult.OuterSingleton, Z_Construct_UClass_UUW_GameResult_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_GameResult.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<UUW_GameResult>()
{
	return UUW_GameResult::StaticClass();
}
UUW_GameResult::UUW_GameResult(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUW_GameResult);
UUW_GameResult::~UUW_GameResult() {}
// End Class UUW_GameResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_UI_UW_GameResult_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_GameResult, UUW_GameResult::StaticClass, TEXT("UUW_GameResult"), &Z_Registration_Info_UClass_UUW_GameResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_GameResult), 401869640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_UI_UW_GameResult_h_1278807639(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_UI_UW_GameResult_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_UI_UW_GameResult_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
