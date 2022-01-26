// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRuntimeMeshCollisionSettings;
struct FRuntimeMeshCollisionConvexMesh;
struct FRuntimeMeshCollisionCapsule;
struct FRuntimeMeshCollisionSphere;
struct FRuntimeMeshCollisionBox;
struct FRuntimeMeshCollisionMaterialIndexStream;
struct FRuntimeMeshVertexTexCoordStream;
struct FVector2D;
struct FRuntimeMeshCollisionTexCoordStream;
struct FRuntimeMeshCollisionTriangleStream;
struct FRuntimeMeshCollisionVertexStream;
struct FVector;
struct FRuntimeMeshCollisionData;
struct FRuntimeMeshTriangleStream;
struct FRuntimeMeshVertexColorStream;
struct FLinearColor;
struct FRuntimeMeshVertexTangentStream;
struct FRuntimeMeshVertexPositionStream;
struct FBox;
struct FRuntimeMeshRenderableMeshData;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshBlueprintFunctions_generated_h
#error "RuntimeMeshBlueprintFunctions.generated.h already included, missing '#pragma once' in RuntimeMeshBlueprintFunctions.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshBlueprintFunctions_generated_h

#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_SPARSE_DATA
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCollisionConvex); \
	DECLARE_FUNCTION(execAddCollisionCapsule); \
	DECLARE_FUNCTION(execAddCollisionSphere); \
	DECLARE_FUNCTION(execAddCollisionBox); \
	DECLARE_FUNCTION(execSeCollisionMaterialIndex); \
	DECLARE_FUNCTION(execGetCollisionMaterialIndex); \
	DECLARE_FUNCTION(execAddCollisionMaterialIndex); \
	DECLARE_FUNCTION(execEmptyCollisionMaterialIndices); \
	DECLARE_FUNCTION(execNumCollisionMaterialIndices); \
	DECLARE_FUNCTION(execSetNumCollisionMaterialIndices); \
	DECLARE_FUNCTION(execSetCollisionTexCoord); \
	DECLARE_FUNCTION(execGetCollisionTexCoord); \
	DECLARE_FUNCTION(execAddCollisionTexCoord); \
	DECLARE_FUNCTION(execEmptyCollisionTexCoords); \
	DECLARE_FUNCTION(execNumCollisionTexCoordChannels); \
	DECLARE_FUNCTION(execNumCollisionTexCoords); \
	DECLARE_FUNCTION(execSetNumCollisionTexCoords); \
	DECLARE_FUNCTION(execGetCollisionTriangle); \
	DECLARE_FUNCTION(execAddCollisionTriangle); \
	DECLARE_FUNCTION(execEmptyCollisionTriangles); \
	DECLARE_FUNCTION(execNumCollisionTriangles); \
	DECLARE_FUNCTION(execSetNumCollisionTriangles); \
	DECLARE_FUNCTION(execSetCollisionVertex); \
	DECLARE_FUNCTION(execGetCollisionVertex); \
	DECLARE_FUNCTION(execAddCollisionVertex); \
	DECLARE_FUNCTION(execEmptyCollisionVertices); \
	DECLARE_FUNCTION(execNumCollisionVertices); \
	DECLARE_FUNCTION(execSetNumCollisionVertices); \
	DECLARE_FUNCTION(execGetCollisionMaterialIndexStream); \
	DECLARE_FUNCTION(execGetCollisionTexCoordStream); \
	DECLARE_FUNCTION(execGetCollisionTriangleStream); \
	DECLARE_FUNCTION(execGetCollisionVertexStream); \
	DECLARE_FUNCTION(execSetVertexIndex); \
	DECLARE_FUNCTION(execGetVertexIndex); \
	DECLARE_FUNCTION(execAppendTriangles); \
	DECLARE_FUNCTION(execAddTriangle); \
	DECLARE_FUNCTION(execAddIndex); \
	DECLARE_FUNCTION(execEmptyTriangles); \
	DECLARE_FUNCTION(execNumTriangles); \
	DECLARE_FUNCTION(execNumIndices); \
	DECLARE_FUNCTION(execSetNumTriangles); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execAppendColors); \
	DECLARE_FUNCTION(execAddColor); \
	DECLARE_FUNCTION(execEmptyColors); \
	DECLARE_FUNCTION(execNumColors); \
	DECLARE_FUNCTION(execSetNumColors); \
	DECLARE_FUNCTION(execSetTexCoord); \
	DECLARE_FUNCTION(execGetTexCoord); \
	DECLARE_FUNCTION(execAppendTexCoords); \
	DECLARE_FUNCTION(execAddTexCoord); \
	DECLARE_FUNCTION(execEmptyTexCoords); \
	DECLARE_FUNCTION(execNumTexCoordChannels); \
	DECLARE_FUNCTION(execNumTexCoords); \
	DECLARE_FUNCTION(execSetNumTexCoords); \
	DECLARE_FUNCTION(execSetTangents); \
	DECLARE_FUNCTION(execGetTangents); \
	DECLARE_FUNCTION(execSetTangent); \
	DECLARE_FUNCTION(execGetTangent); \
	DECLARE_FUNCTION(execSetNormal); \
	DECLARE_FUNCTION(execGetNormal); \
	DECLARE_FUNCTION(execAppendTangents); \
	DECLARE_FUNCTION(execAddTangents); \
	DECLARE_FUNCTION(execAddNormalAndTangent); \
	DECLARE_FUNCTION(execEmptyTangents); \
	DECLARE_FUNCTION(execNumTangents); \
	DECLARE_FUNCTION(execSetNumTangents); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execAppendPositions); \
	DECLARE_FUNCTION(execAddPosition); \
	DECLARE_FUNCTION(execEmptyPositions); \
	DECLARE_FUNCTION(execNumPositions); \
	DECLARE_FUNCTION(execSetNumPositions); \
	DECLARE_FUNCTION(execGetAdjacencyTriangleStream); \
	DECLARE_FUNCTION(execGetTriangleStream); \
	DECLARE_FUNCTION(execGetColorStream); \
	DECLARE_FUNCTION(execGetTexCoordStream); \
	DECLARE_FUNCTION(execGetTangentStream); \
	DECLARE_FUNCTION(execGetPositionStream); \
	DECLARE_FUNCTION(execCreateRenderableMeshData);


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCollisionConvex); \
	DECLARE_FUNCTION(execAddCollisionCapsule); \
	DECLARE_FUNCTION(execAddCollisionSphere); \
	DECLARE_FUNCTION(execAddCollisionBox); \
	DECLARE_FUNCTION(execSeCollisionMaterialIndex); \
	DECLARE_FUNCTION(execGetCollisionMaterialIndex); \
	DECLARE_FUNCTION(execAddCollisionMaterialIndex); \
	DECLARE_FUNCTION(execEmptyCollisionMaterialIndices); \
	DECLARE_FUNCTION(execNumCollisionMaterialIndices); \
	DECLARE_FUNCTION(execSetNumCollisionMaterialIndices); \
	DECLARE_FUNCTION(execSetCollisionTexCoord); \
	DECLARE_FUNCTION(execGetCollisionTexCoord); \
	DECLARE_FUNCTION(execAddCollisionTexCoord); \
	DECLARE_FUNCTION(execEmptyCollisionTexCoords); \
	DECLARE_FUNCTION(execNumCollisionTexCoordChannels); \
	DECLARE_FUNCTION(execNumCollisionTexCoords); \
	DECLARE_FUNCTION(execSetNumCollisionTexCoords); \
	DECLARE_FUNCTION(execGetCollisionTriangle); \
	DECLARE_FUNCTION(execAddCollisionTriangle); \
	DECLARE_FUNCTION(execEmptyCollisionTriangles); \
	DECLARE_FUNCTION(execNumCollisionTriangles); \
	DECLARE_FUNCTION(execSetNumCollisionTriangles); \
	DECLARE_FUNCTION(execSetCollisionVertex); \
	DECLARE_FUNCTION(execGetCollisionVertex); \
	DECLARE_FUNCTION(execAddCollisionVertex); \
	DECLARE_FUNCTION(execEmptyCollisionVertices); \
	DECLARE_FUNCTION(execNumCollisionVertices); \
	DECLARE_FUNCTION(execSetNumCollisionVertices); \
	DECLARE_FUNCTION(execGetCollisionMaterialIndexStream); \
	DECLARE_FUNCTION(execGetCollisionTexCoordStream); \
	DECLARE_FUNCTION(execGetCollisionTriangleStream); \
	DECLARE_FUNCTION(execGetCollisionVertexStream); \
	DECLARE_FUNCTION(execSetVertexIndex); \
	DECLARE_FUNCTION(execGetVertexIndex); \
	DECLARE_FUNCTION(execAppendTriangles); \
	DECLARE_FUNCTION(execAddTriangle); \
	DECLARE_FUNCTION(execAddIndex); \
	DECLARE_FUNCTION(execEmptyTriangles); \
	DECLARE_FUNCTION(execNumTriangles); \
	DECLARE_FUNCTION(execNumIndices); \
	DECLARE_FUNCTION(execSetNumTriangles); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execAppendColors); \
	DECLARE_FUNCTION(execAddColor); \
	DECLARE_FUNCTION(execEmptyColors); \
	DECLARE_FUNCTION(execNumColors); \
	DECLARE_FUNCTION(execSetNumColors); \
	DECLARE_FUNCTION(execSetTexCoord); \
	DECLARE_FUNCTION(execGetTexCoord); \
	DECLARE_FUNCTION(execAppendTexCoords); \
	DECLARE_FUNCTION(execAddTexCoord); \
	DECLARE_FUNCTION(execEmptyTexCoords); \
	DECLARE_FUNCTION(execNumTexCoordChannels); \
	DECLARE_FUNCTION(execNumTexCoords); \
	DECLARE_FUNCTION(execSetNumTexCoords); \
	DECLARE_FUNCTION(execSetTangents); \
	DECLARE_FUNCTION(execGetTangents); \
	DECLARE_FUNCTION(execSetTangent); \
	DECLARE_FUNCTION(execGetTangent); \
	DECLARE_FUNCTION(execSetNormal); \
	DECLARE_FUNCTION(execGetNormal); \
	DECLARE_FUNCTION(execAppendTangents); \
	DECLARE_FUNCTION(execAddTangents); \
	DECLARE_FUNCTION(execAddNormalAndTangent); \
	DECLARE_FUNCTION(execEmptyTangents); \
	DECLARE_FUNCTION(execNumTangents); \
	DECLARE_FUNCTION(execSetNumTangents); \
	DECLARE_FUNCTION(execGetBounds); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execAppendPositions); \
	DECLARE_FUNCTION(execAddPosition); \
	DECLARE_FUNCTION(execEmptyPositions); \
	DECLARE_FUNCTION(execNumPositions); \
	DECLARE_FUNCTION(execSetNumPositions); \
	DECLARE_FUNCTION(execGetAdjacencyTriangleStream); \
	DECLARE_FUNCTION(execGetTriangleStream); \
	DECLARE_FUNCTION(execGetColorStream); \
	DECLARE_FUNCTION(execGetTexCoordStream); \
	DECLARE_FUNCTION(execGetTangentStream); \
	DECLARE_FUNCTION(execGetPositionStream); \
	DECLARE_FUNCTION(execCreateRenderableMeshData);


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshBlueprintFunctions(); \
	friend struct Z_Construct_UClass_URuntimeMeshBlueprintFunctions_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshBlueprintFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshBlueprintFunctions)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshBlueprintFunctions(); \
	friend struct Z_Construct_UClass_URuntimeMeshBlueprintFunctions_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshBlueprintFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshBlueprintFunctions)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshBlueprintFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshBlueprintFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshBlueprintFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshBlueprintFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshBlueprintFunctions(URuntimeMeshBlueprintFunctions&&); \
	NO_API URuntimeMeshBlueprintFunctions(const URuntimeMeshBlueprintFunctions&); \
public:


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshBlueprintFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshBlueprintFunctions(URuntimeMeshBlueprintFunctions&&); \
	NO_API URuntimeMeshBlueprintFunctions(const URuntimeMeshBlueprintFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshBlueprintFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshBlueprintFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshBlueprintFunctions)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_PRIVATE_PROPERTY_OFFSET
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_14_PROLOG
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_PRIVATE_PROPERTY_OFFSET \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_SPARSE_DATA \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_RPC_WRAPPERS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_INCLASS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_PRIVATE_PROPERTY_OFFSET \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_SPARSE_DATA \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_INCLASS_NO_PURE_DECLS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshBlueprintFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshBlueprintFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
