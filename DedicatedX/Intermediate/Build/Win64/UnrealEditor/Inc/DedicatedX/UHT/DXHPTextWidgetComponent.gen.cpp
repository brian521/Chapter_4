// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DedicatedX/Component/DXHPTextWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDXHPTextWidgetComponent() {}

// Begin Cross Module References
DEDICATEDX_API UClass* Z_Construct_UClass_UDXHPTextWidgetComponent();
DEDICATEDX_API UClass* Z_Construct_UClass_UDXHPTextWidgetComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
UPackage* Z_Construct_UPackage__Script_DedicatedX();
// End Cross Module References

// Begin Class UDXHPTextWidgetComponent
void UDXHPTextWidgetComponent::StaticRegisterNativesUDXHPTextWidgetComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDXHPTextWidgetComponent);
UClass* Z_Construct_UClass_UDXHPTextWidgetComponent_NoRegister()
{
	return UDXHPTextWidgetComponent::StaticClass();
}
struct Z_Construct_UClass_UDXHPTextWidgetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "Component/DXHPTextWidgetComponent.h" },
		{ "ModuleRelativePath", "Component/DXHPTextWidgetComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDXHPTextWidgetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDXHPTextWidgetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DedicatedX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDXHPTextWidgetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDXHPTextWidgetComponent_Statics::ClassParams = {
	&UDXHPTextWidgetComponent::StaticClass,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDXHPTextWidgetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDXHPTextWidgetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDXHPTextWidgetComponent()
{
	if (!Z_Registration_Info_UClass_UDXHPTextWidgetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDXHPTextWidgetComponent.OuterSingleton, Z_Construct_UClass_UDXHPTextWidgetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDXHPTextWidgetComponent.OuterSingleton;
}
template<> DEDICATEDX_API UClass* StaticClass<UDXHPTextWidgetComponent>()
{
	return UDXHPTextWidgetComponent::StaticClass();
}
UDXHPTextWidgetComponent::UDXHPTextWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDXHPTextWidgetComponent);
UDXHPTextWidgetComponent::~UDXHPTextWidgetComponent() {}
// End Class UDXHPTextWidgetComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Component_DXHPTextWidgetComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDXHPTextWidgetComponent, UDXHPTextWidgetComponent::StaticClass, TEXT("UDXHPTextWidgetComponent"), &Z_Registration_Info_UClass_UDXHPTextWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDXHPTextWidgetComponent), 1633430247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Component_DXHPTextWidgetComponent_h_4036384630(TEXT("/Script/DedicatedX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Component_DXHPTextWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_DedicatedX_Source_DedicatedX_Component_DXHPTextWidgetComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
