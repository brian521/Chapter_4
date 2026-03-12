// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/PlayerState/DXPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXPlayerState() {}

// Begin Cross Module References
DEDICATEDX_API UClass* Z_Construct_UClass_ADXPlayerState();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXPlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class ADXPlayerState
void ADXPlayerState::StaticRegisterNativesADXPlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADXPlayerState);
UClass* Z_Construct_UClass_ADXPlayerState_NoRegister()
{
	return ADXPlayerState::StaticClass();
}
struct Z_Construct_UClass_ADXPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerState/DXPlayerState.h" },
		{ "ModuleRelativePath", "PlayerState/DXPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADXPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADXPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADXPlayerState_Statics::ClassParams = {
	&ADXPlayerState::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADXPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ADXPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADXPlayerState()
{
	if (!Z_Registration_Info_UClass_ADXPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADXPlayerState.OuterSingleton, Z_Construct_UClass_ADXPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADXPlayerState.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<ADXPlayerState>()
{
	return ADXPlayerState::StaticClass();
}
ADXPlayerState::ADXPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADXPlayerState);
ADXPlayerState::~ADXPlayerState() {}
// End Class ADXPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_PlayerState_DXPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADXPlayerState, ADXPlayerState::StaticClass, TEXT("ADXPlayerState"), &Z_Registration_Info_UClass_ADXPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADXPlayerState), 3524529862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_PlayerState_DXPlayerState_h_3089629435(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_PlayerState_DXPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_PlayerState_DXPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
