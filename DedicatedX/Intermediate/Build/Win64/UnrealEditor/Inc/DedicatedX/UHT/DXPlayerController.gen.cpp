// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/Controller/DXPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXPlayerController() {}

// Begin Cross Module References
DEDICATEDX_API UClass* Z_Construct_UClass_ADXPlayerController();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class ADXPlayerController
void ADXPlayerController::StaticRegisterNativesADXPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADXPlayerController);
UClass* Z_Construct_UClass_ADXPlayerController_NoRegister()
{
	return ADXPlayerController::StaticClass();
}
struct Z_Construct_UClass_ADXPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/DXPlayerController.h" },
		{ "ModuleRelativePath", "Controller/DXPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADXPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADXPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADXPlayerController_Statics::ClassParams = {
	&ADXPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADXPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADXPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADXPlayerController()
{
	if (!Z_Registration_Info_UClass_ADXPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADXPlayerController.OuterSingleton, Z_Construct_UClass_ADXPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADXPlayerController.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<ADXPlayerController>()
{
	return ADXPlayerController::StaticClass();
}
ADXPlayerController::ADXPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADXPlayerController);
ADXPlayerController::~ADXPlayerController() {}
// End Class ADXPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADXPlayerController, ADXPlayerController::StaticClass, TEXT("ADXPlayerController"), &Z_Registration_Info_UClass_ADXPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADXPlayerController), 590694276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_56277723(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Controller_DXPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
