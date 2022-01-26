// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URuntimeMeshModifier;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshProviderModifiers_generated_h
#error "RuntimeMeshProviderModifiers.generated.h already included, missing '#pragma once' in RuntimeMeshProviderModifiers.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshProviderModifiers_generated_h

#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_SPARSE_DATA
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveModifier); \
	DECLARE_FUNCTION(execAddModifier);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveModifier); \
	DECLARE_FUNCTION(execAddModifier);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderModifiers(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderModifiers, URuntimeMeshProviderPassthrough, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderModifiers)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderModifiers(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderModifiers_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderModifiers, URuntimeMeshProviderPassthrough, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderModifiers)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshProviderModifiers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshProviderModifiers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderModifiers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderModifiers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderModifiers(URuntimeMeshProviderModifiers&&); \
	NO_API URuntimeMeshProviderModifiers(const URuntimeMeshProviderModifiers&); \
public:


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshProviderModifiers() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderModifiers(URuntimeMeshProviderModifiers&&); \
	NO_API URuntimeMeshProviderModifiers(const URuntimeMeshProviderModifiers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderModifiers); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderModifiers); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeMeshProviderModifiers)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Modifiers() { return STRUCT_OFFSET(URuntimeMeshProviderModifiers, Modifiers); }


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_11_PROLOG
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_RPC_WRAPPERS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_INCLASS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshProviderModifiers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderModifiers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
