// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_OpenDoor_generated_h
#error "OpenDoor.generated.h already included, missing '#pragma once' in OpenDoor.h"
#endif
#define TESTPROJECT_OpenDoor_generated_h

#define TestProject_Source_TestProject_OpenDoor_h_10_DELEGATE \
static inline void FDoorEvent_DelegateWrapper(const FMulticastScriptDelegate& DoorEvent) \
{ \
	DoorEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define TestProject_Source_TestProject_OpenDoor_h_15_RPC_WRAPPERS
#define TestProject_Source_TestProject_OpenDoor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TestProject_Source_TestProject_OpenDoor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend TESTPROJECT_API class UClass* Z_Construct_UClass_UOpenDoor(); \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestProject_Source_TestProject_OpenDoor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOpenDoor(); \
	friend TESTPROJECT_API class UClass* Z_Construct_UClass_UOpenDoor(); \
public: \
	DECLARE_CLASS(UOpenDoor, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UOpenDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TestProject_Source_TestProject_OpenDoor_h_15_STANDARD_CONSTRUCTORS \
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


#define TestProject_Source_TestProject_OpenDoor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenDoor(UOpenDoor&&); \
	NO_API UOpenDoor(const UOpenDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenDoor)


#define TestProject_Source_TestProject_OpenDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerVolume() { return STRUCT_OFFSET(UOpenDoor, TriggerVolume); }


#define TestProject_Source_TestProject_OpenDoor_h_12_PROLOG
#define TestProject_Source_TestProject_OpenDoor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_OpenDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_OpenDoor_h_15_RPC_WRAPPERS \
	TestProject_Source_TestProject_OpenDoor_h_15_INCLASS \
	TestProject_Source_TestProject_OpenDoor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TestProject_Source_TestProject_OpenDoor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TestProject_Source_TestProject_OpenDoor_h_15_PRIVATE_PROPERTY_OFFSET \
	TestProject_Source_TestProject_OpenDoor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TestProject_Source_TestProject_OpenDoor_h_15_INCLASS_NO_PURE_DECLS \
	TestProject_Source_TestProject_OpenDoor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TestProject_Source_TestProject_OpenDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
