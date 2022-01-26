// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FRuntimeMeshMaterialSlot;
struct FRuntimeMeshSectionProperties;
struct FRuntimeMeshLODProperties;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshProviderTargetInterface_generated_h
#error "RuntimeMeshProviderTargetInterface.generated.h already included, missing '#pragma once' in RuntimeMeshProviderTargetInterface.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshProviderTargetInterface_generated_h

#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_SPARSE_DATA
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execGetMaterialSlots); \
	DECLARE_FUNCTION(execGetMaterialSlotNames); \
	DECLARE_FUNCTION(execGetNumMaterials); \
	DECLARE_FUNCTION(execGetMaterialSlot); \
	DECLARE_FUNCTION(execIsMaterialSlotNameValid); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execSetupMaterialSlot); \
	DECLARE_FUNCTION(execMarkCollisionDirty); \
	DECLARE_FUNCTION(execRemoveSection); \
	DECLARE_FUNCTION(execClearSection); \
	DECLARE_FUNCTION(execMarkSectionDirty); \
	DECLARE_FUNCTION(execSetSectionCastsShadow); \
	DECLARE_FUNCTION(execSetSectionVisibility); \
	DECLARE_FUNCTION(execCreateSection); \
	DECLARE_FUNCTION(execMarkAllLODsDirty); \
	DECLARE_FUNCTION(execMarkLODDirty); \
	DECLARE_FUNCTION(execSetLODScreenSize); \
	DECLARE_FUNCTION(execConfigureLODs);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaterial); \
	DECLARE_FUNCTION(execGetMaterialSlots); \
	DECLARE_FUNCTION(execGetMaterialSlotNames); \
	DECLARE_FUNCTION(execGetNumMaterials); \
	DECLARE_FUNCTION(execGetMaterialSlot); \
	DECLARE_FUNCTION(execIsMaterialSlotNameValid); \
	DECLARE_FUNCTION(execGetMaterialIndex); \
	DECLARE_FUNCTION(execSetupMaterialSlot); \
	DECLARE_FUNCTION(execMarkCollisionDirty); \
	DECLARE_FUNCTION(execRemoveSection); \
	DECLARE_FUNCTION(execClearSection); \
	DECLARE_FUNCTION(execMarkSectionDirty); \
	DECLARE_FUNCTION(execSetSectionCastsShadow); \
	DECLARE_FUNCTION(execSetSectionVisibility); \
	DECLARE_FUNCTION(execCreateSection); \
	DECLARE_FUNCTION(execMarkAllLODsDirty); \
	DECLARE_FUNCTION(execMarkLODDirty); \
	DECLARE_FUNCTION(execSetLODScreenSize); \
	DECLARE_FUNCTION(execConfigureLODs);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderTargetInterface(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderTargetInterface_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderTargetInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderTargetInterface)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderTargetInterface(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderTargetInterface_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderTargetInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderTargetInterface)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshProviderTargetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshProviderTargetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderTargetInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderTargetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderTargetInterface(URuntimeMeshProviderTargetInterface&&); \
	NO_API URuntimeMeshProviderTargetInterface(const URuntimeMeshProviderTargetInterface&); \
public:


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshProviderTargetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderTargetInterface(URuntimeMeshProviderTargetInterface&&); \
	NO_API URuntimeMeshProviderTargetInterface(const URuntimeMeshProviderTargetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderTargetInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderTargetInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshProviderTargetInterface)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_14_PROLOG
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_RPC_WRAPPERS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_INCLASS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshProviderTargetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshProviderTargetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
