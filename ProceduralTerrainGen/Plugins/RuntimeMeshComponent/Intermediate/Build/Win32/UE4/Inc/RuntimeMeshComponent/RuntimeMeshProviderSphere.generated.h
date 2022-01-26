// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshProviderSphere_generated_h
#error "RuntimeMeshProviderSphere.generated.h already included, missing '#pragma once' in RuntimeMeshProviderSphere.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshProviderSphere_generated_h

#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_SPARSE_DATA
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSphereMaterial); \
	DECLARE_FUNCTION(execGetSphereMaterial); \
	DECLARE_FUNCTION(execSetLODMultiplier); \
	DECLARE_FUNCTION(execGetLODMultiplier); \
	DECLARE_FUNCTION(execSetMinLongitudeSegments); \
	DECLARE_FUNCTION(execGetMinLongitudeSegments); \
	DECLARE_FUNCTION(execSetMaxLongitudeSegments); \
	DECLARE_FUNCTION(execGetMaxLongitudeSegments); \
	DECLARE_FUNCTION(execSetMinLatitudeSegments); \
	DECLARE_FUNCTION(execGetMinLatitudeSegments); \
	DECLARE_FUNCTION(execSetMaxLatitudeSegments); \
	DECLARE_FUNCTION(execGetMaxLatitudeSegments); \
	DECLARE_FUNCTION(execSetSphereRadius); \
	DECLARE_FUNCTION(execGetSphereRadius);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSphereMaterial); \
	DECLARE_FUNCTION(execGetSphereMaterial); \
	DECLARE_FUNCTION(execSetLODMultiplier); \
	DECLARE_FUNCTION(execGetLODMultiplier); \
	DECLARE_FUNCTION(execSetMinLongitudeSegments); \
	DECLARE_FUNCTION(execGetMinLongitudeSegments); \
	DECLARE_FUNCTION(execSetMaxLongitudeSegments); \
	DECLARE_FUNCTION(execGetMaxLongitudeSegments); \
	DECLARE_FUNCTION(execSetMinLatitudeSegments); \
	DECLARE_FUNCTION(execGetMinLatitudeSegments); \
	DECLARE_FUNCTION(execSetMaxLatitudeSegments); \
	DECLARE_FUNCTION(execGetMaxLatitudeSegments); \
	DECLARE_FUNCTION(execSetSphereRadius); \
	DECLARE_FUNCTION(execGetSphereRadius);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderSphere(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderSphere_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderSphere, URuntimeMeshProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderSphere)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderSphere(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderSphere_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderSphere, URuntimeMeshProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderSphere)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshProviderSphere(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshProviderSphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderSphere); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderSphere); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderSphere(URuntimeMeshProviderSphere&&); \
	NO_API URuntimeMeshProviderSphere(const URuntimeMeshProviderSphere&); \
public:


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderSphere(URuntimeMeshProviderSphere&&); \
	NO_API URuntimeMeshProviderSphere(const URuntimeMeshProviderSphere&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderSphere); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderSphere); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeMeshProviderSphere)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxLOD() { return STRUCT_OFFSET(URuntimeMeshProviderSphere, MaxLOD); } \
	FORCEINLINE static uint32 __PPO__SphereRadius() { return STRUCT_OFFSET(URuntimeMeshProviderSphere, SphereRadius); } \
	FORCEINLINE static uint32 __PPO__MaxLatitudeSegments() { return STRUCT_OFFSET(URuntimeMeshProviderSphere, MaxLatitudeSegments); } \
	FORCEINLINE static uint32 __PPO__MinLatitudeSegments() { return STRUCT_OFFSET(URuntimeMeshProviderSphere, MinLatitudeSegments); } \
	FORCEINLINE static uint32 __PPO__MaxLongitudeSegments() { return STRUCT_OFFSET(URuntimeMeshProviderSphere, MaxLongitudeSegments); } \
	FORCEINLINE static uint32 __PPO__MinLongitudeSegments() { return STRUCT_OFFSET(URuntimeMeshProviderSphere, MinLongitudeSegments); } \
	FORCEINLINE static uint32 __PPO__LODMultiplier() { return STRUCT_OFFSET(URuntimeMeshProviderSphere, LODMultiplier); } \
	FORCEINLINE static uint32 __PPO__SphereMaterial() { return STRUCT_OFFSET(URuntimeMeshProviderSphere, SphereMaterial); }


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_9_PROLOG
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_RPC_WRAPPERS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_INCLASS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshProviderSphere>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderSphere_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
