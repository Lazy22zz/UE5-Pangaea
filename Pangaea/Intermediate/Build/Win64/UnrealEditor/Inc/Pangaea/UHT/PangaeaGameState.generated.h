// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PangaeaGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANGAEA_PangaeaGameState_generated_h
#error "PangaeaGameState.generated.h already included, missing '#pragma once' in PangaeaGameState.h"
#endif
#define PANGAEA_PangaeaGameState_generated_h

#define FID_Pangaea_Source_Pangaea_PangaeaGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPangaeaGameState(); \
	friend struct Z_Construct_UClass_APangaeaGameState_Statics; \
public: \
	DECLARE_CLASS(APangaeaGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pangaea"), NO_API) \
	DECLARE_SERIALIZER(APangaeaGameState)


#define FID_Pangaea_Source_Pangaea_PangaeaGameState_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APangaeaGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APangaeaGameState(APangaeaGameState&&); \
	APangaeaGameState(const APangaeaGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APangaeaGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APangaeaGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APangaeaGameState) \
	NO_API virtual ~APangaeaGameState();


#define FID_Pangaea_Source_Pangaea_PangaeaGameState_h_12_PROLOG
#define FID_Pangaea_Source_Pangaea_PangaeaGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pangaea_Source_Pangaea_PangaeaGameState_h_15_INCLASS_NO_PURE_DECLS \
	FID_Pangaea_Source_Pangaea_PangaeaGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANGAEA_API UClass* StaticClass<class APangaeaGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pangaea_Source_Pangaea_PangaeaGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
