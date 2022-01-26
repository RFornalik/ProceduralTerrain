// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshProviderStaticMesh_generated_h
#error "RuntimeMeshProviderStaticMesh.generated.h already included, missing '#pragma once' in RuntimeMeshProviderStaticMesh.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshProviderStaticMesh_generated_h

#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_SPARSE_DATA
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetComplexCollisionLOD); \
	DECLARE_FUNCTION(execGetComplexCollisionLOD); \
	DECLARE_FUNCTION(execSetMaxLOD); \
	DECLARE_FUNCTION(execGetMaxLOD); \
	DECLARE_FUNCTION(execSetStaticMesh); \
	DECLARE_FUNCTION(execGetStaticMesh);


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetComplexCollisionLOD); \
	DECLARE_FUNCTION(execGetComplexCollisionLOD); \
	DECLARE_FUNCTION(execSetMaxLOD); \
	DECLARE_FUNCTION(execGetMaxLOD); \
	DECLARE_FUNCTION(execSetStaticMesh); \
	DECLARE_FUNCTION(execGetStaticMesh);


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderStaticMesh(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderStaticMesh, URuntimeMeshProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderStaticMesh)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderStaticMesh(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderStaticMesh_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderStaticMesh, URuntimeMeshProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderStaticMesh)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshProviderStaticMesh(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshProviderStaticMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderStaticMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderStaticMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderStaticMesh(URuntimeMeshProviderStaticMesh&&); \
	NO_API URuntimeMeshProviderStaticMesh(const URuntimeMeshProviderStaticMesh&); \
public:


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderStaticMesh(URuntimeMeshProviderStaticMesh&&); \
	NO_API URuntimeMeshProviderStaticMesh(const URuntimeMeshProviderStaticMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderStaticMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderStaticMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeMeshProviderStaticMesh)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(URuntimeMeshProviderStaticMesh, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__MaxLOD() { return STRUCT_OFFSET(URuntimeMeshProviderStaticMesh, MaxLOD); } \
	FORCEINLINE static uint32 __PPO__ComplexCollisionLOD() { return STRUCT_OFFSET(URuntimeMeshProviderStaticMesh, ComplexCollisionLOD); }


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_13_PROLOG
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_PRIVATE_PROPERTY_OFFSET \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_SPARSE_DATA \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_RPC_WRAPPERS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_INCLASS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_PRIVATE_PROPERTY_OFFSET \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_SPARSE_DATA \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_INCLASS_NO_PURE_DECLS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshProviderStaticMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStaticMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
