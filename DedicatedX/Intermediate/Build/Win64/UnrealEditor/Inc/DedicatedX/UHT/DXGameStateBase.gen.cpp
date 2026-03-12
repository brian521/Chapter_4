// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/GameState/DXGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXGameStateBase() {}

// Begin Cross Module References
DEDICATEDX_API UClass* Z_Construct_UClass_ADXGameStateBase();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXGameStateBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class ADXGameStateBase
void ADXGameStateBase::StaticRegisterNativesADXGameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADXGameStateBase);
UClass* Z_Construct_UClass_ADXGameStateBase_NoRegister()
{
	return ADXGameStateBase::StaticClass();
}
struct Z_Construct_UClass_ADXGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameState/DXGameStateBase.h" },
		{ "ModuleRelativePath", "GameState/DXGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADXGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADXGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADXGameStateBase_Statics::ClassParams = {
	&ADXGameStateBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADXGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADXGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADXGameStateBase()
{
	if (!Z_Registration_Info_UClass_ADXGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADXGameStateBase.OuterSingleton, Z_Construct_UClass_ADXGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADXGameStateBase.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<ADXGameStateBase>()
{
	return ADXGameStateBase::StaticClass();
}
ADXGameStateBase::ADXGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADXGameStateBase);
ADXGameStateBase::~ADXGameStateBase() {}
// End Class ADXGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameState_DXGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADXGameStateBase, ADXGameStateBase::StaticClass, TEXT("ADXGameStateBase"), &Z_Registration_Info_UClass_ADXGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADXGameStateBase), 3943461486U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameState_DXGameStateBase_h_1445419719(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameState_DXGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameState_DXGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
