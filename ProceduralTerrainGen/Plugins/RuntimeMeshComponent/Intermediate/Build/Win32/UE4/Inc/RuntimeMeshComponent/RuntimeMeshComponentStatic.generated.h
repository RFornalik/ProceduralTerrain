// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URuntimeMeshProviderStatic;
struct FRuntimeMeshRenderableMeshData;
struct FRuntimeMeshSectionProperties;
struct FBoxSphereBounds;
struct FRuntimeMeshCollisionData;
struct FRuntimeMeshCollisionSettings;
struct FVector;
struct FVector2D;
struct FLinearColor;
struct FRuntimeMeshTangent;
enum class ERuntimeMeshUpdateFrequency : uint8;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshComponentStatic_generated_h
#error "RuntimeMeshComponentStatic.generated.h already included, missing '#pragma once' in RuntimeMeshComponentStatic.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshComponentStatic_generated_h

#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_SPARSE_DATA
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasTessellationTriangleGenerationEnabled); \
	DECLARE_FUNCTION(execDisableTessellationTrianglesGeneration); \
	DECLARE_FUNCTION(execEnabledTessellationTrianglesGeneration); \
	DECLARE_FUNCTION(execHasNormalTangentGenerationEnabled); \
	DECLARE_FUNCTION(execDisableNormalTangentGeneration); \
	DECLARE_FUNCTION(execEnableNormalTangentGeneration); \
	DECLARE_FUNCTION(execGetStaticProvider); \
	DECLARE_FUNCTION(execGetSectionRenderDataAndClear); \
	DECLARE_FUNCTION(execGetSectionRenderData); \
	DECLARE_FUNCTION(execGetSectionProperties); \
	DECLARE_FUNCTION(execGetSectionBounds); \
	DECLARE_FUNCTION(execRemoveAllSectionsForLOD); \
	DECLARE_FUNCTION(execDoesSectionHaveValidMeshData); \
	DECLARE_FUNCTION(execGetLastSectionId); \
	DECLARE_FUNCTION(execGetSectionIds); \
	DECLARE_FUNCTION(execSetRenderableSectionAffectsCollision); \
	DECLARE_FUNCTION(execGetSectionsForMeshCollision); \
	DECLARE_FUNCTION(execSetRenderableLODForCollision); \
	DECLARE_FUNCTION(execGetLODForMeshCollision); \
	DECLARE_FUNCTION(execSetCollisionMesh); \
	DECLARE_FUNCTION(execGetCollisionMesh); \
	DECLARE_FUNCTION(execSetCollisionSettings); \
	DECLARE_FUNCTION(execGetCollisionSettings); \
	DECLARE_FUNCTION(execClearSection); \
	DECLARE_FUNCTION(execUpdateSectionFromComponents); \
	DECLARE_FUNCTION(execUpdateSection_Blueprint); \
	DECLARE_FUNCTION(execCreateSectionFromComponents); \
	DECLARE_FUNCTION(execCreateSection_Blueprint);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasTessellationTriangleGenerationEnabled); \
	DECLARE_FUNCTION(execDisableTessellationTrianglesGeneration); \
	DECLARE_FUNCTION(execEnabledTessellationTrianglesGeneration); \
	DECLARE_FUNCTION(execHasNormalTangentGenerationEnabled); \
	DECLARE_FUNCTION(execDisableNormalTangentGeneration); \
	DECLARE_FUNCTION(execEnableNormalTangentGeneration); \
	DECLARE_FUNCTION(execGetStaticProvider); \
	DECLARE_FUNCTION(execGetSectionRenderDataAndClear); \
	DECLARE_FUNCTION(execGetSectionRenderData); \
	DECLARE_FUNCTION(execGetSectionProperties); \
	DECLARE_FUNCTION(execGetSectionBounds); \
	DECLARE_FUNCTION(execRemoveAllSectionsForLOD); \
	DECLARE_FUNCTION(execDoesSectionHaveValidMeshData); \
	DECLARE_FUNCTION(execGetLastSectionId); \
	DECLARE_FUNCTION(execGetSectionIds); \
	DECLARE_FUNCTION(execSetRenderableSectionAffectsCollision); \
	DECLARE_FUNCTION(execGetSectionsForMeshCollision); \
	DECLARE_FUNCTION(execSetRenderableLODForCollision); \
	DECLARE_FUNCTION(execGetLODForMeshCollision); \
	DECLARE_FUNCTION(execSetCollisionMesh); \
	DECLARE_FUNCTION(execGetCollisionMesh); \
	DECLARE_FUNCTION(execSetCollisionSettings); \
	DECLARE_FUNCTION(execGetCollisionSettings); \
	DECLARE_FUNCTION(execClearSection); \
	DECLARE_FUNCTION(execUpdateSectionFromComponents); \
	DECLARE_FUNCTION(execUpdateSection_Blueprint); \
	DECLARE_FUNCTION(execCreateSectionFromComponents); \
	DECLARE_FUNCTION(execCreateSection_Blueprint);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshComponentStatic(); \
	friend struct Z_Construct_UClass_URuntimeMeshComponentStatic_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshComponentStatic, URuntimeMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshComponentStatic)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshComponentStatic(); \
	friend struct Z_Construct_UClass_URuntimeMeshComponentStatic_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshComponentStatic, URuntimeMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshComponentStatic)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshComponentStatic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshComponentStatic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshComponentStatic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshComponentStatic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshComponentStatic(URuntimeMeshComponentStatic&&); \
	NO_API URuntimeMeshComponentStatic(const URuntimeMeshComponentStatic&); \
public:


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshComponentStatic(URuntimeMeshComponentStatic&&); \
	NO_API URuntimeMeshComponentStatic(const URuntimeMeshComponentStatic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshComponentStatic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshComponentStatic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeMeshComponentStatic)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RuntimeMesh() { return STRUCT_OFFSET(URuntimeMeshComponentStatic, RuntimeMesh); } \
	FORCEINLINE static uint32 __PPO__StaticProvider() { return STRUCT_OFFSET(URuntimeMeshComponentStatic, StaticProvider); } \
	FORCEINLINE static uint32 __PPO__NormalsModifier() { return STRUCT_OFFSET(URuntimeMeshComponentStatic, NormalsModifier); } \
	FORCEINLINE static uint32 __PPO__AdjacencyModifier() { return STRUCT_OFFSET(URuntimeMeshComponentStatic, AdjacencyModifier); }


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_14_PROLOG
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_RPC_WRAPPERS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_INCLASS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshComponentStatic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Components_RuntimeMeshComponentStatic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
