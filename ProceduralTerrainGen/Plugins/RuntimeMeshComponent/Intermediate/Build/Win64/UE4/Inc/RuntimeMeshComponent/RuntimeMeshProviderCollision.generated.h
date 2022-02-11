// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRuntimeMeshCollisionData;
struct FRuntimeMeshCollisionSettings;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshProviderCollision_generated_h
#error "RuntimeMeshProviderCollision.generated.h already included, missing '#pragma once' in RuntimeMeshProviderCollision.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshProviderCollision_generated_h

#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_SPARSE_DATA
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRenderableSectionAffectsCollision); \
	DECLARE_FUNCTION(execSetRenderableLODForCollision); \
	DECLARE_FUNCTION(execSetCollisionMesh); \
	DECLARE_FUNCTION(execSetCollisionSettings);


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRenderableSectionAffectsCollision); \
	DECLARE_FUNCTION(execSetRenderableLODForCollision); \
	DECLARE_FUNCTION(execSetCollisionMesh); \
	DECLARE_FUNCTION(execSetCollisionSettings);


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderCollision(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderCollision_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderCollision, URuntimeMeshProviderPassthrough, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderCollision)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderCollision(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderCollision_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderCollision, URuntimeMeshProviderPassthrough, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderCollision)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshProviderCollision(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshProviderCollision) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderCollision); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderCollision); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderCollision(URuntimeMeshProviderCollision&&); \
	NO_API URuntimeMeshProviderCollision(const URuntimeMeshProviderCollision&); \
public:


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderCollision(URuntimeMeshProviderCollision&&); \
	NO_API URuntimeMeshProviderCollision(const URuntimeMeshProviderCollision&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderCollision); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderCollision); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeMeshProviderCollision)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LODForMeshCollision() { return STRUCT_OFFSET(URuntimeMeshProviderCollision, LODForMeshCollision); } \
	FORCEINLINE static uint32 __PPO__RenderableCollisionData() { return STRUCT_OFFSET(URuntimeMeshProviderCollision, RenderableCollisionData); } \
	FORCEINLINE static uint32 __PPO__SectionsAffectingCollision() { return STRUCT_OFFSET(URuntimeMeshProviderCollision, SectionsAffectingCollision); } \
	FORCEINLINE static uint32 __PPO__CollisionSettings() { return STRUCT_OFFSET(URuntimeMeshProviderCollision, CollisionSettings); } \
	FORCEINLINE static uint32 __PPO__CollisionMesh() { return STRUCT_OFFSET(URuntimeMeshProviderCollision, CollisionMesh); }


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_9_PROLOG
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_PRIVATE_PROPERTY_OFFSET \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_SPARSE_DATA \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_RPC_WRAPPERS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_INCLASS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_PRIVATE_PROPERTY_OFFSET \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_SPARSE_DATA \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_INCLASS_NO_PURE_DECLS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshProviderCollision>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderCollision_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
