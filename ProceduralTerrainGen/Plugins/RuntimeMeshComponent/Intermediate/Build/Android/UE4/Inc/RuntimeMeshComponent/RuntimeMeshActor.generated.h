// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URuntimeMeshComponent;
enum class ERuntimeMeshMobility : uint8;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshActor_generated_h
#error "RuntimeMeshActor.generated.h already included, missing '#pragma once' in RuntimeMeshActor.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshActor_generated_h

#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_SPARSE_DATA
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRuntimeMeshComponent); \
	DECLARE_FUNCTION(execSetRuntimeMeshMobility); \
	DECLARE_FUNCTION(execGetRuntimeMeshMobility);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRuntimeMeshComponent); \
	DECLARE_FUNCTION(execSetRuntimeMeshMobility); \
	DECLARE_FUNCTION(execGetRuntimeMeshMobility);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARuntimeMeshActor(); \
	friend struct Z_Construct_UClass_ARuntimeMeshActor_Statics; \
public: \
	DECLARE_CLASS(ARuntimeMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(ARuntimeMeshActor)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesARuntimeMeshActor(); \
	friend struct Z_Construct_UClass_ARuntimeMeshActor_Statics; \
public: \
	DECLARE_CLASS(ARuntimeMeshActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(ARuntimeMeshActor)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARuntimeMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARuntimeMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARuntimeMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARuntimeMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARuntimeMeshActor(ARuntimeMeshActor&&); \
	NO_API ARuntimeMeshActor(const ARuntimeMeshActor&); \
public:


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARuntimeMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARuntimeMeshActor(ARuntimeMeshActor&&); \
	NO_API ARuntimeMeshActor(const ARuntimeMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARuntimeMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARuntimeMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARuntimeMeshActor)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RuntimeMeshComponent() { return STRUCT_OFFSET(ARuntimeMeshActor, RuntimeMeshComponent); }


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_10_PROLOG
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_RPC_WRAPPERS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_INCLASS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RuntimeMeshActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class ARuntimeMeshActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
