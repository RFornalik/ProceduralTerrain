// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
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
class URuntimeMeshModifier;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshProviderStatic_generated_h
#error "RuntimeMeshProviderStatic.generated.h already included, missing '#pragma once' in RuntimeMeshProviderStatic.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshProviderStatic_generated_h

#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_SPARSE_DATA
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_RPC_WRAPPERS \
 \
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
	DECLARE_FUNCTION(execGetCollisionMeshStatic); \
	DECLARE_FUNCTION(execSetCollisionSettings); \
	DECLARE_FUNCTION(execGetCollisionSettingsStatic); \
	DECLARE_FUNCTION(execUpdateSectionFromComponents); \
	DECLARE_FUNCTION(execCreateSectionFromComponents); \
	DECLARE_FUNCTION(execUpdateSection_Blueprint); \
	DECLARE_FUNCTION(execCreateSection_Blueprint); \
	DECLARE_FUNCTION(execUnRegisterModifier); \
	DECLARE_FUNCTION(execRegisterModifier);


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
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
	DECLARE_FUNCTION(execGetCollisionMeshStatic); \
	DECLARE_FUNCTION(execSetCollisionSettings); \
	DECLARE_FUNCTION(execGetCollisionSettingsStatic); \
	DECLARE_FUNCTION(execUpdateSectionFromComponents); \
	DECLARE_FUNCTION(execCreateSectionFromComponents); \
	DECLARE_FUNCTION(execUpdateSection_Blueprint); \
	DECLARE_FUNCTION(execCreateSection_Blueprint); \
	DECLARE_FUNCTION(execUnRegisterModifier); \
	DECLARE_FUNCTION(execRegisterModifier);


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URuntimeMeshProviderStatic, NO_API)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderStatic(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderStatic_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderStatic, URuntimeMeshProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderStatic) \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_ARCHIVESERIALIZER


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshProviderStatic(); \
	friend struct Z_Construct_UClass_URuntimeMeshProviderStatic_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshProviderStatic, URuntimeMeshProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshProviderStatic) \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_ARCHIVESERIALIZER


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshProviderStatic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshProviderStatic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderStatic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderStatic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderStatic(URuntimeMeshProviderStatic&&); \
	NO_API URuntimeMeshProviderStatic(const URuntimeMeshProviderStatic&); \
public:


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshProviderStatic(URuntimeMeshProviderStatic&&); \
	NO_API URuntimeMeshProviderStatic(const URuntimeMeshProviderStatic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshProviderStatic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshProviderStatic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeMeshProviderStatic)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StoreEditorGeneratedDataForGame() { return STRUCT_OFFSET(URuntimeMeshProviderStatic, StoreEditorGeneratedDataForGame); } \
	FORCEINLINE static uint32 __PPO__CurrentMeshModifiers() { return STRUCT_OFFSET(URuntimeMeshProviderStatic, CurrentMeshModifiers); }


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_11_PROLOG
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_PRIVATE_PROPERTY_OFFSET \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_SPARSE_DATA \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_RPC_WRAPPERS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_INCLASS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_PRIVATE_PROPERTY_OFFSET \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_SPARSE_DATA \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_INCLASS_NO_PURE_DECLS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshProviderStatic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_Providers_RuntimeMeshProviderStatic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
