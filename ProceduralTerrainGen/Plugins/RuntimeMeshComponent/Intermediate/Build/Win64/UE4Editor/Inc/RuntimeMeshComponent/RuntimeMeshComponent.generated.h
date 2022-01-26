// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRuntimeMeshCollisionHitInfo;
class UMaterialInterface;
struct FRuntimeMeshMaterialSlot;
class URuntimeMeshProvider;
enum class ERuntimeMeshMobility : uint8;
class URuntimeMesh;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshComponent_generated_h
#error "RuntimeMeshComponent.generated.h already included, missing '#pragma once' in RuntimeMeshComponent.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshComponent_generated_h

#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_SPARSE_DATA
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHitSource); \
	DECLARE_FUNCTION(execSetupMaterialSlot); \
	DECLARE_FUNCTION(execGetMaterialSlots); \
	DECLARE_FUNCTION(execGetProvider); \
	DECLARE_FUNCTION(execSetRuntimeMeshMobility); \
	DECLARE_FUNCTION(execGetRuntimeMeshMobility); \
	DECLARE_FUNCTION(execGetOrCreateRuntimeMesh); \
	DECLARE_FUNCTION(execGetRuntimeMesh); \
	DECLARE_FUNCTION(execSetRuntimeMesh); \
	DECLARE_FUNCTION(execInitialize);


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHitSource); \
	DECLARE_FUNCTION(execSetupMaterialSlot); \
	DECLARE_FUNCTION(execGetMaterialSlots); \
	DECLARE_FUNCTION(execGetProvider); \
	DECLARE_FUNCTION(execSetRuntimeMeshMobility); \
	DECLARE_FUNCTION(execGetRuntimeMeshMobility); \
	DECLARE_FUNCTION(execGetOrCreateRuntimeMesh); \
	DECLARE_FUNCTION(execGetRuntimeMesh); \
	DECLARE_FUNCTION(execSetRuntimeMesh); \
	DECLARE_FUNCTION(execInitialize);


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshComponent(); \
	friend struct Z_Construct_UClass_URuntimeMeshComponent_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<URuntimeMeshComponent*>(this); }


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshComponent(); \
	friend struct Z_Construct_UClass_URuntimeMeshComponent_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<URuntimeMeshComponent*>(this); }


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshComponent(URuntimeMeshComponent&&); \
	NO_API URuntimeMeshComponent(const URuntimeMeshComponent&); \
public:


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshComponent(URuntimeMeshComponent&&); \
	NO_API URuntimeMeshComponent(const URuntimeMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeMeshComponent)


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RuntimeMeshReference() { return STRUCT_OFFSET(URuntimeMeshComponent, RuntimeMeshReference); }


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_16_PROLOG
#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_SPARSE_DATA \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_RPC_WRAPPERS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_INCLASS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_SPARSE_DATA \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_INCLASS_NO_PURE_DECLS \
	ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralTerrainGen_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
