// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pangaea/PangaeaGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangaeaGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PANGAEA_API UClass* Z_Construct_UClass_UPangaeaGameInstance();
PANGAEA_API UClass* Z_Construct_UClass_UPangaeaGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pangaea();
// End Cross Module References

// Begin Class UPangaeaGameInstance
void UPangaeaGameInstance::StaticRegisterNativesUPangaeaGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPangaeaGameInstance);
UClass* Z_Construct_UClass_UPangaeaGameInstance_NoRegister()
{
	return UPangaeaGameInstance::StaticClass();
}
struct Z_Construct_UClass_UPangaeaGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PangaeaGameInstance.h" },
		{ "ModuleRelativePath", "PangaeaGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPangaeaGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPangaeaGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Pangaea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPangaeaGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPangaeaGameInstance_Statics::ClassParams = {
	&UPangaeaGameInstance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPangaeaGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPangaeaGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPangaeaGameInstance()
{
	if (!Z_Registration_Info_UClass_UPangaeaGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPangaeaGameInstance.OuterSingleton, Z_Construct_UClass_UPangaeaGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPangaeaGameInstance.OuterSingleton;
}
template<> PANGAEA_API UClass* StaticClass<UPangaeaGameInstance>()
{
	return UPangaeaGameInstance::StaticClass();
}
UPangaeaGameInstance::UPangaeaGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPangaeaGameInstance);
UPangaeaGameInstance::~UPangaeaGameInstance() {}
// End Class UPangaeaGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPangaeaGameInstance, UPangaeaGameInstance::StaticClass, TEXT("UPangaeaGameInstance"), &Z_Registration_Info_UClass_UPangaeaGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPangaeaGameInstance), 1871167200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_2789509529(TEXT("/Script/Pangaea"),
	Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
