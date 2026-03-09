// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChatX/Player/CXPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXPlayerController() {}

// Begin Cross Module References
CHATX_API UClass* Z_Construct_UClass_ACXPlayerController();
CHATX_API UClass* Z_Construct_UClass_ACXPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_ChatX();
// End Cross Module References

// Begin Class ACXPlayerController
void ACXPlayerController::StaticRegisterNativesACXPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXPlayerController);
UClass* Z_Construct_UClass_ACXPlayerController_NoRegister()
{
	return ACXPlayerController::StaticClass();
}
struct Z_Construct_UClass_ACXPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/CXPlayerController.h" },
		{ "ModuleRelativePath", "Player/CXPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACXPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ChatX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXPlayerController_Statics::ClassParams = {
	&ACXPlayerController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXPlayerController()
{
	if (!Z_Registration_Info_UClass_ACXPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXPlayerController.OuterSingleton, Z_Construct_UClass_ACXPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXPlayerController.OuterSingleton;
}
template<> CHATX_API UClass* StaticClass<ACXPlayerController>()
{
	return ACXPlayerController::StaticClass();
}
ACXPlayerController::ACXPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXPlayerController);
ACXPlayerController::~ACXPlayerController() {}
// End Class ACXPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXPlayerController, ACXPlayerController::StaticClass, TEXT("ACXPlayerController"), &Z_Registration_Info_UClass_ACXPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXPlayerController), 3995717277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPlayerController_h_686749929(TEXT("/Script/ChatX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
