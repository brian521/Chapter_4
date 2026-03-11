// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChatX/Player/CXPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXPawn() {}

// Begin Cross Module References
CHATX_API UClass* Z_Construct_UClass_ACXPawn();
CHATX_API UClass* Z_Construct_UClass_ACXPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_ChatX();
// End Cross Module References

// Begin Class ACXPawn
void ACXPawn::StaticRegisterNativesACXPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXPawn);
UClass* Z_Construct_UClass_ACXPawn_NoRegister()
{
	return ACXPawn::StaticClass();
}
struct Z_Construct_UClass_ACXPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/CXPawn.h" },
		{ "ModuleRelativePath", "Player/CXPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACXPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ChatX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXPawn_Statics::ClassParams = {
	&ACXPawn::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXPawn()
{
	if (!Z_Registration_Info_UClass_ACXPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXPawn.OuterSingleton, Z_Construct_UClass_ACXPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXPawn.OuterSingleton;
}
template<> CHATX_API UClass* StaticClass<ACXPawn>()
{
	return ACXPawn::StaticClass();
}
ACXPawn::ACXPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXPawn);
ACXPawn::~ACXPawn() {}
// End Class ACXPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXPawn, ACXPawn::StaticClass, TEXT("ACXPawn"), &Z_Registration_Info_UClass_ACXPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXPawn), 2133996920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPawn_h_2975916770(TEXT("/Script/ChatX"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_NBC_Chapter_4_ChatX_Source_ChatX_Player_CXPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
