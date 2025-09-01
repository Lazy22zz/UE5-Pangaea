// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PangaeaGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGAEA_PangaeaGameMode_generated_h
#error "PangaeaGameMode.generated.h already included, missing '#pragma once' in PangaeaGameMode.h"
#endif
#define PANGAEA_PangaeaGameMode_generated_h

#define FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPangaeaGameMode(); \
	friend struct Z_Construct_UClass_APangaeaGameMode_Statics; \
public: \
	DECLARE_CLASS(APangaeaGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pangaea"), PANGAEA_API) \
	DECLARE_SERIALIZER(APangaeaGameMode)


#define FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APangaeaGameMode(APangaeaGameMode&&); \
	APangaeaGameMode(const APangaeaGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PANGAEA_API, APangaeaGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APangaeaGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APangaeaGameMode) \
	PANGAEA_API virtual ~APangaeaGameMode();


#define FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_9_PROLOG
#define FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Pangaea_Source_Pangaea_PangaeaGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGAEA_API UClass* StaticClass<class APangaeaGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pangaea_Source_Pangaea_PangaeaGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
