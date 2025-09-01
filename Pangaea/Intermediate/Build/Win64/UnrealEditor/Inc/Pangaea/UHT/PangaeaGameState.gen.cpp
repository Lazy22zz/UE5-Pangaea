// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangaea/PangaeaGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangaeaGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
PANGAEA_API UClass* Z_Construct_UClass_APangaeaGameState();
PANGAEA_API UClass* Z_Construct_UClass_APangaeaGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pangaea();
// End Cross Module References

// Begin Class APangaeaGameState
void APangaeaGameState::StaticRegisterNativesAPangaeaGameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APangaeaGameState);
UClass* Z_Construct_UClass_APangaeaGameState_NoRegister()
{
	return APangaeaGameState::StaticClass();
}
struct Z_Construct_UClass_APangaeaGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PangaeaGameState.h" },
		{ "ModuleRelativePath", "PangaeaGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APangaeaGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APangaeaGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Pangaea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APangaeaGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APangaeaGameState_Statics::ClassParams = {
	&APangaeaGameState::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APangaeaGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_APangaeaGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APangaeaGameState()
{
	if (!Z_Registration_Info_UClass_APangaeaGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APangaeaGameState.OuterSingleton, Z_Construct_UClass_APangaeaGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APangaeaGameState.OuterSingleton;
}
template<> PANGAEA_API UClass* StaticClass<APangaeaGameState>()
{
	return APangaeaGameState::StaticClass();
}
APangaeaGameState::APangaeaGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APangaeaGameState);
APangaeaGameState::~APangaeaGameState() {}
// End Class APangaeaGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APangaeaGameState, APangaeaGameState::StaticClass, TEXT("APangaeaGameState"), &Z_Registration_Info_UClass_APangaeaGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APangaeaGameState), 174463711U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameState_h_3521521314(TEXT("/Script/Pangaea"),
	Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
