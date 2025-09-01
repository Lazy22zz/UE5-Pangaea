// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PangaeaGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGAEA_PangaeaGameInstance_generated_h
#error "PangaeaGameInstance.generated.h already included, missing '#pragma once' in PangaeaGameInstance.h"
#endif
#define PANGAEA_PangaeaGameInstance_generated_h

#define FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPangaeaGameInstance(); \
	friend struct Z_Construct_UClass_UPangaeaGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPangaeaGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Pangaea"), NO_API) \
	DECLARE_SERIALIZER(UPangaeaGameInstance)


#define FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPangaeaGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPangaeaGameInstance(UPangaeaGameInstance&&); \
	UPangaeaGameInstance(const UPangaeaGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPangaeaGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPangaeaGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPangaeaGameInstance) \
	NO_API virtual ~UPangaeaGameInstance();


#define FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_12_PROLOG
#define FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGAEA_API UClass* StaticClass<class UPangaeaGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pangaea_Source_Pangaea_PangaeaGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
