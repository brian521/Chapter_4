// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/Animation/DXAnimInstanceBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXAnimInstanceBase() {}

// Begin Cross Module References
DEDICATEDX_API UClass* Z_Construct_UClass_UDXAnimInstanceBase();
DEDICATEDX_API UClass* Z_Construct_UClass_UDXAnimInstanceBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class UDXAnimInstanceBase
void UDXAnimInstanceBase::StaticRegisterNativesUDXAnimInstanceBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDXAnimInstanceBase);
UClass* Z_Construct_UClass_UDXAnimInstanceBase_NoRegister()
{
	return UDXAnimInstanceBase::StaticClass();
}
struct Z_Construct_UClass_UDXAnimInstanceBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/DXAnimInstanceBase.h" },
		{ "ModuleRelativePath", "Animation/DXAnimInstanceBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDXAnimInstanceBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDXAnimInstanceBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDXAnimInstanceBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDXAnimInstanceBase_Statics::ClassParams = {
	&UDXAnimInstanceBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDXAnimInstanceBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDXAnimInstanceBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDXAnimInstanceBase()
{
	if (!Z_Registration_Info_UClass_UDXAnimInstanceBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDXAnimInstanceBase.OuterSingleton, Z_Construct_UClass_UDXAnimInstanceBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDXAnimInstanceBase.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<UDXAnimInstanceBase>()
{
	return UDXAnimInstanceBase::StaticClass();
}
UDXAnimInstanceBase::UDXAnimInstanceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDXAnimInstanceBase);
UDXAnimInstanceBase::~UDXAnimInstanceBase() {}
// End Class UDXAnimInstanceBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDXAnimInstanceBase, UDXAnimInstanceBase::StaticClass, TEXT("UDXAnimInstanceBase"), &Z_Registration_Info_UClass_UDXAnimInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDXAnimInstanceBase), 2419420707U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_3517962536(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Animation_DXAnimInstanceBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
