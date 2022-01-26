// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FVector;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshProviderBox_generated_h
#error "RuntimeMeshProviderBox.generated.h already included, missing '#pragma once' in RuntimeMeshProviderBox.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshProviderBox_generated_h

#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_SPARSE_DATA
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBoxMaterial); \
	DECLARE_FUNCTION(execGetBoxMaterial); \
	DECLARE_FUNCTION(execSetBoxRadius); \
	DECLARE_FUNCTION(execGetBoxRadius);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBoxMaterial); \
	DECLARE_FUNCTION(execGetBoxMaterial); \
	DECLARE_FUNCTION(execSetBoxRadius); \
	DECLARE_FUNCTION(execGetBoxRadius);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderBox(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderBox_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderBox, URuntimeMeshProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderBox)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderBox(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderBox_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderBox, URuntimeMeshProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderBox)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshProviderBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshProviderBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderBox(URuntimeMeshProviderBox&&); \
	NO_API URuntimeMeshProviderBox(const URuntimeMeshProviderBox&); \
public:


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshProviderBox() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderBox(URuntimeMeshProviderBox&&); \
	NO_API URuntimeMeshProviderBox(const URuntimeMeshProviderBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeMeshProviderBox)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxRadius() { return STRUCT_OFFSET(URuntimeMeshProviderBox, BoxRadius); } \
	FORCEINLINE static uint32 __PPO__Material() { return STRUCT_OFFSET(URuntimeMeshProviderBox, Material); }


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_9_PROLOG
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_RPC_WRAPPERS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_INCLASS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshProviderBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
