// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/GameMode/DXGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXGameModeBase() {}

// Begin Cross Module References
DEDICATEDX_API UClass* Z_Construct_UClass_ADXGameModeBase();
DEDICATEDX_API UClass* Z_Construct_UClass_ADXGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class ADXGameModeBase
void ADXGameModeBase::StaticRegisterNativesADXGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADXGameModeBase);
UClass* Z_Construct_UClass_ADXGameModeBase_NoRegister()
{
	return ADXGameModeBase::StaticClass();
}
struct Z_Construct_UClass_ADXGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/DXGameModeBase.h" },
		{ "ModuleRelativePath", "GameMode/DXGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADXGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADXGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADXGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADXGameModeBase_Statics::ClassParams = {
	&ADXGameModeBase::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADXGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADXGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADXGameModeBase()
{
	if (!Z_Registration_Info_UClass_ADXGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADXGameModeBase.OuterSingleton, Z_Construct_UClass_ADXGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADXGameModeBase.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<ADXGameModeBase>()
{
	return ADXGameModeBase::StaticClass();
}
ADXGameModeBase::ADXGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADXGameModeBase);
ADXGameModeBase::~ADXGameModeBase() {}
// End Class ADXGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADXGameModeBase, ADXGameModeBase::StaticClass, TEXT("ADXGameModeBase"), &Z_Registration_Info_UClass_ADXGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADXGameModeBase), 3839050950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_3114849640(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_GameMode_DXGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
