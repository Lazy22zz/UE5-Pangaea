// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangaea/PangaeaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangaeaGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PANGAEA_API UClass* Z_Construct_UClass_APangaeaGameMode();
PANGAEA_API UClass* Z_Construct_UClass_APangaeaGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pangaea();
// End Cross Module References

// Begin Class APangaeaGameMode
void APangaeaGameMode::StaticRegisterNativesAPangaeaGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APangaeaGameMode);
UClass* Z_Construct_UClass_APangaeaGameMode_NoRegister()
{
	return APangaeaGameMode::StaticClass();
}
struct Z_Construct_UClass_APangaeaGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PangaeaGameMode.h" },
		{ "ModuleRelativePath", "PangaeaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APangaeaGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APangaeaGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Pangaea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APangaeaGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APangaeaGameMode_Statics::ClassParams = {
	&APangaeaGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APangaeaGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APangaeaGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APangaeaGameMode()
{
	if (!Z_Registration_Info_UClass_APangaeaGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APangaeaGameMode.OuterSingleton, Z_Construct_UClass_APangaeaGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APangaeaGameMode.OuterSingleton;
}
template<> PANGAEA_API UClass* StaticClass<APangaeaGameMode>()
{
	return APangaeaGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APangaeaGameMode);
APangaeaGameMode::~APangaeaGameMode() {}
// End Class APangaeaGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APangaeaGameMode, APangaeaGameMode::StaticClass, TEXT("APangaeaGameMode"), &Z_Registration_Info_UClass_APangaeaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APangaeaGameMode), 153567578U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_145701710(TEXT("/Script/Pangaea"),
	Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
