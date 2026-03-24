// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/Controller/DXTitlePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXTitlePlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXTitlePlayerController();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXTitlePlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class ADXTitlePlayerController
void ADXTitlePlayerController::StaticRegisterNativesADXTitlePlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADXTitlePlayerController);
UClass* Z_Construct_UClass_ADXTitlePlayerController_NoRegister()
{
	return ADXTitlePlayerController::StaticClass();
}
struct Z_Construct_UClass_ADXTitlePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/DXTitlePlayerController.h" },
		{ "ModuleRelativePath", "Controller/DXTitlePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ASUIPlayerController" },
		{ "ModuleRelativePath", "Controller/DXTitlePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIWidgetInstance_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "ASUIPlayerController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Controller/DXTitlePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_UIWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIWidgetInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADXTitlePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADXTitlePlayerController_Statics::NewProp_UIWidgetClass = { "UIWidgetClass", nullptr, (EPropertyFlags)0x0044000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXTitlePlayerController, UIWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIWidgetClass_MetaData), NewProp_UIWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADXTitlePlayerController_Statics::NewProp_UIWidgetInstance = { "UIWidgetInstance", nullptr, (EPropertyFlags)0x01440000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADXTitlePlayerController, UIWidgetInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIWidgetInstance_MetaData), NewProp_UIWidgetInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADXTitlePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXTitlePlayerController_Statics::NewProp_UIWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADXTitlePlayerController_Statics::NewProp_UIWidgetInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXTitlePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADXTitlePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXTitlePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADXTitlePlayerController_Statics::ClassParams = {
	&ADXTitlePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADXTitlePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADXTitlePlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADXTitlePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADXTitlePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADXTitlePlayerController()
{
	if (!Z_Registration_Info_UClass_ADXTitlePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADXTitlePlayerController.OuterSingleton, Z_Construct_UClass_ADXTitlePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADXTitlePlayerController.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<ADXTitlePlayerController>()
{
	return ADXTitlePlayerController::StaticClass();
}
ADXTitlePlayerController::ADXTitlePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADXTitlePlayerController);
ADXTitlePlayerController::~ADXTitlePlayerController() {}
// End Class ADXTitlePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXTitlePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADXTitlePlayerController, ADXTitlePlayerController::StaticClass, TEXT("ADXTitlePlayerController"), &Z_Registration_Info_UClass_ADXTitlePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADXTitlePlayerController), 2031014241U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXTitlePlayerController_h_913103595(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXTitlePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXTitlePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
