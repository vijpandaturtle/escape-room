// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ESCAPE_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define ESCAPE_OpenDoor_generated_h

#define Escape_Source_Escape_OpenDoor_h_13_RPC_WRAPPERS
#define Escape_Source_Escape_OpenDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Escape_Source_Escape_OpenDoor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Escape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define Escape_Source_Escape_OpenDoor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend struct Z_Construct_UClass_UOpenDoor_Statics; \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Escape"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor)


#define Escape_Source_Escape_OpenDoor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public:


#define Escape_Source_Escape_OpenDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define Escape_Source_Escape_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET
#define Escape_Source_Escape_OpenDoor_h_10_PROLOG
#define Escape_Source_Escape_OpenDoor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Escape_Source_Escape_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	Escape_Source_Escape_OpenDoor_h_13_RPC_WRAPPERS \
	Escape_Source_Escape_OpenDoor_h_13_INCLASS \
	Escape_Source_Escape_OpenDoor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Escape_Source_Escape_OpenDoor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Escape_Source_Escape_OpenDoor_h_13_PRIVATE_PROPERTY_OFFSET \
	Escape_Source_Escape_OpenDoor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Escape_Source_Escape_OpenDoor_h_13_INCLASS_NO_PURE_DECLS \
	Escape_Source_Escape_OpenDoor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESCAPE_API UClass* StaticClass<class UOpenDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Escape_Source_Escape_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
