// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBodySetup;
struct FBoxSphereBounds;
struct FRuntimeMeshCollisionHitInfo;
class URuntimeMeshProvider;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMesh_generated_h
#error "RuntimeMesh.generated.h already included, missing '#pragma once' in RuntimeMesh.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMesh_generated_h

#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_40_DELEGATE \
static inline void FRuntimeMeshCollisionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& RuntimeMeshCollisionUpdatedDelegate) \
{ \
	RuntimeMeshCollisionUpdatedDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_SPARSE_DATA
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBodySetup); \
	DECLARE_FUNCTION(execGetLocalBounds); \
	DECLARE_FUNCTION(execGetHitSource); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execGetProviderPtr); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execInitialize);


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBodySetup); \
	DECLARE_FUNCTION(execGetLocalBounds); \
	DECLARE_FUNCTION(execGetHitSource); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execGetProviderPtr); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execInitialize);


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMesh(); \
	friend struct Z_Construct_UClass_URuntimeMesh_Statics; \
public: \
	DECLARE_CLASS(URuntimeMesh, URuntimeMeshProviderTargetInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMesh) \
	virtual UObject* _getUObject() const override { return const_cast<URuntimeMesh*>(this); }


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMesh(); \
	friend struct Z_Construct_UClass_URuntimeMesh_Statics; \
public: \
	DECLARE_CLASS(URuntimeMesh, URuntimeMeshProviderTargetInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMesh) \
	virtual UObject* _getUObject() const override { return const_cast<URuntimeMesh*>(this); }


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMesh(URuntimeMesh&&); \
	NO_API URuntimeMesh(const URuntimeMesh&); \
public:


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMesh(URuntimeMesh&&); \
	NO_API URuntimeMesh(const URuntimeMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMesh); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMesh)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshProviderPtr() { return STRUCT_OFFSET(URuntimeMesh, MeshProviderPtr); } \
	FORCEINLINE static uint32 __PPO__BodySetup() { return STRUCT_OFFSET(URuntimeMesh, BodySetup); } \
	FORCEINLINE static uint32 __PPO__CollisionSource() { return STRUCT_OFFSET(URuntimeMesh, CollisionSource); } \
	FORCEINLINE static uint32 __PPO__AsyncBodySetupQueue() { return STRUCT_OFFSET(URuntimeMesh, AsyncBodySetupQueue); } \
	FORCEINLINE static uint32 __PPO__MaterialSlots() { return STRUCT_OFFSET(URuntimeMesh, MaterialSlots); } \
	FORCEINLINE static uint32 __PPO__SlotNameLookup() { return STRUCT_OFFSET(URuntimeMesh, SlotNameLookup); }


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_43_PROLOG
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_PRIVATE_PROPERTY_OFFSET \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_SPARSE_DATA \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_RPC_WRAPPERS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_INCLASS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_PRIVATE_PROPERTY_OFFSET \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_SPARSE_DATA \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_INCLASS_NO_PURE_DECLS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h_48_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RuntimeMesh."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
