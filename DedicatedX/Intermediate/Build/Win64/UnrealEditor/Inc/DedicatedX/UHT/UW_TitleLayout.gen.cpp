// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/UI/UW_TitleLayout.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUW_TitleLayout() {}

// Begin Cross Module References
DEDICATEDX_API UClass* Z_Construct_UClass_UUW_TitleLayout();
DEDICATEDX_API UClass* Z_Construct_UClass_UUW_TitleLayout_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableText_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class UUW_TitleLayout Function OnExitButtonClicked
struct Z_Construct_UFunction_UUW_TitleLayout_OnExitButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/UW_TitleLayout.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_TitleLayout_OnExitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUW_TitleLayout, nullptr, "OnExitButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_TitleLayout_OnExitButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_TitleLayout_OnExitButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUW_TitleLayout_OnExitButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_TitleLayout_OnExitButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_TitleLayout::execOnExitButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitButtonClicked();
	P_NATIVE_END;
}
// End Class UUW_TitleLayout Function OnExitButtonClicked

// Begin Class UUW_TitleLayout Function OnPlayButtonClicked
struct Z_Construct_UFunction_UUW_TitleLayout_OnPlayButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/UW_TitleLayout.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUW_TitleLayout_OnPlayButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUW_TitleLayout, nullptr, "OnPlayButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUW_TitleLayout_OnPlayButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUW_TitleLayout_OnPlayButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUW_TitleLayout_OnPlayButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUW_TitleLayout_OnPlayButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUW_TitleLayout::execOnPlayButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayButtonClicked();
	P_NATIVE_END;
}
// End Class UUW_TitleLayout Function OnPlayButtonClicked

// Begin Class UUW_TitleLayout
void UUW_TitleLayout::StaticRegisterNativesUUW_TitleLayout()
{
	UClass* Class = UUW_TitleLayout::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnExitButtonClicked", &UUW_TitleLayout::execOnExitButtonClicked },
		{ "OnPlayButtonClicked", &UUW_TitleLayout::execOnPlayButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUW_TitleLayout);
UClass* Z_Construct_UClass_UUW_TitleLayout_NoRegister()
{
	return UUW_TitleLayout::StaticClass();
}
struct Z_Construct_UClass_UUW_TitleLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/UW_TitleLayout.h" },
		{ "ModuleRelativePath", "UI/UW_TitleLayout.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayButton_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "BindWidget", "" },
		{ "Category", "USTitleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/UW_TitleLayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitButton_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "BindWidget", "" },
		{ "Category", "USTitleWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/UW_TitleLayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerIPEditableText_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "BindWidget", "" },
		{ "Category", "USLobbyLevelUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/UW_TitleLayout.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerIPEditableText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUW_TitleLayout_OnExitButtonClicked, "OnExitButtonClicked" }, // 389820781
		{ &Z_Construct_UFunction_UUW_TitleLayout_OnPlayButtonClicked, "OnPlayButtonClicked" }, // 2204128946
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_TitleLayout>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_TitleLayout_Statics::NewProp_PlayButton = { "PlayButton", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_TitleLayout, PlayButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayButton_MetaData), NewProp_PlayButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_TitleLayout_Statics::NewProp_ExitButton = { "ExitButton", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_TitleLayout, ExitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitButton_MetaData), NewProp_ExitButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUW_TitleLayout_Statics::NewProp_ServerIPEditableText = { "ServerIPEditableText", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUW_TitleLayout, ServerIPEditableText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerIPEditableText_MetaData), NewProp_ServerIPEditableText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUW_TitleLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_TitleLayout_Statics::NewProp_PlayButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_TitleLayout_Statics::NewProp_ExitButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUW_TitleLayout_Statics::NewProp_ServerIPEditableText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_TitleLayout_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUW_TitleLayout_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_TitleLayout_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_TitleLayout_Statics::ClassParams = {
	&UUW_TitleLayout::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUW_TitleLayout_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUW_TitleLayout_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_TitleLayout_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_TitleLayout_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUW_TitleLayout()
{
	if (!Z_Registration_Info_UClass_UUW_TitleLayout.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_TitleLayout.OuterSingleton, Z_Construct_UClass_UUW_TitleLayout_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_TitleLayout.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<UUW_TitleLayout>()
{
	return UUW_TitleLayout::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUW_TitleLayout);
UUW_TitleLayout::~UUW_TitleLayout() {}
// End Class UUW_TitleLayout

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_UI_UW_TitleLayout_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_TitleLayout, UUW_TitleLayout::StaticClass, TEXT("UUW_TitleLayout"), &Z_Registration_Info_UClass_UUW_TitleLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_TitleLayout), 1438964078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_UI_UW_TitleLayout_h_930565136(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_UI_UW_TitleLayout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_UI_UW_TitleLayout_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
