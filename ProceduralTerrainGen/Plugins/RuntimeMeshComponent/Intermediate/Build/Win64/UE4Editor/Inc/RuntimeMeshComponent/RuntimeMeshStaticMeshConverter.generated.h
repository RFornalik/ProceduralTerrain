// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
class URuntimeMeshComponent;
class UStaticMesh;
struct FRuntimeMeshCollisionData;
struct FRuntimeMeshCollisionSettings;
struct FRuntimeMeshRenderableMeshData;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshStaticMeshConverter_generated_h
#error "RuntimeMeshStaticMeshConverter.generated.h already included, missing '#pragma once' in RuntimeMeshStaticMeshConverter.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshStaticMeshConverter_generated_h

#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_SPARSE_DATA
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyStaticMeshComponentToRuntimeMesh); \
	DECLARE_FUNCTION(execCopyStaticMeshToRuntimeMesh); \
	DECLARE_FUNCTION(execCopyStaticMeshLODToCollisionData); \
	DECLARE_FUNCTION(execCopyStaticMeshCollisionToCollisionSettings); \
	DECLARE_FUNCTION(execCopyStaticMeshSectionToRenderableMeshData);


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyStaticMeshComponentToRuntimeMesh); \
	DECLARE_FUNCTION(execCopyStaticMeshToRuntimeMesh); \
	DECLARE_FUNCTION(execCopyStaticMeshLODToCollisionData); \
	DECLARE_FUNCTION(execCopyStaticMeshCollisionToCollisionSettings); \
	DECLARE_FUNCTION(execCopyStaticMeshSectionToRenderableMeshData);


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshStaticMeshConverter(); \
	friend struct Z_Construct_UClass_URuntimeMeshStaticMeshConverter_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshStaticMeshConverter, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshStaticMeshConverter)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshStaticMeshConverter(); \
	friend struct Z_Construct_UClass_URuntimeMeshStaticMeshConverter_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshStaticMeshConverter, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshStaticMeshConverter)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshStaticMeshConverter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshStaticMeshConverter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshStaticMeshConverter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshStaticMeshConverter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshStaticMeshConverter(URuntimeMeshStaticMeshConverter&&); \
	NO_API URuntimeMeshStaticMeshConverter(const URuntimeMeshStaticMeshConverter&); \
public:


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshStaticMeshConverter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshStaticMeshConverter(URuntimeMeshStaticMeshConverter&&); \
	NO_API URuntimeMeshStaticMeshConverter(const URuntimeMeshStaticMeshConverter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshStaticMeshConverter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshStaticMeshConverter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshStaticMeshConverter)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_PRIVATE_PROPERTY_OFFSET
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_15_PROLOG
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_PRIVATE_PROPERTY_OFFSET \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_SPARSE_DATA \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_RPC_WRAPPERS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_INCLASS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_PRIVATE_PROPERTY_OFFSET \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_SPARSE_DATA \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_INCLASS_NO_PURE_DECLS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshStaticMeshConverter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshStaticMeshConverter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
