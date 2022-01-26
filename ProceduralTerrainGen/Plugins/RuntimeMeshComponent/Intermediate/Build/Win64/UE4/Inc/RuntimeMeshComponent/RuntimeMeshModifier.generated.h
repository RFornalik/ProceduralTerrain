// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRuntimeMeshCollisionData;
struct FRuntimeMeshRenderableMeshData;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshModifier_generated_h
#error "RuntimeMeshModifier.generated.h already included, missing '#pragma once' in RuntimeMeshModifier.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshModifier_generated_h

#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_SPARSE_DATA
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_RPC_WRAPPERS \
	virtual void ApplyToCollisionMesh_Implementation(FRuntimeMeshCollisionData& MeshData); \
	virtual void ApplyToMesh_Implementation(FRuntimeMeshRenderableMeshData& MeshData); \
 \
	DECLARE_FUNCTION(execApplyToCollisionMesh); \
	DECLARE_FUNCTION(execApplyToMesh);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ApplyToCollisionMesh_Implementation(FRuntimeMeshCollisionData& MeshData); \
	virtual void ApplyToMesh_Implementation(FRuntimeMeshRenderableMeshData& MeshData); \
 \
	DECLARE_FUNCTION(execApplyToCollisionMesh); \
	DECLARE_FUNCTION(execApplyToMesh);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_EVENT_PARMS \
	struct RuntimeMeshModifier_eventApplyToCollisionMesh_Parms \
	{ \
		FRuntimeMeshCollisionData MeshData; \
	}; \
	struct RuntimeMeshModifier_eventApplyToMesh_Parms \
	{ \
		FRuntimeMeshRenderableMeshData MeshData; \
	};


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_CALLBACK_WRAPPERS
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshModifier(); \
	friend struct Z_Construct_UClass_URuntimeMeshModifier_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshModifier, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshModifier)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshModifier(); \
	friend struct Z_Construct_UClass_URuntimeMeshModifier_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshModifier, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshModifier)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshModifier(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshModifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshModifier(URuntimeMeshModifier&&); \
	NO_API URuntimeMeshModifier(const URuntimeMeshModifier&); \
public:


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshModifier(URuntimeMeshModifier&&); \
	NO_API URuntimeMeshModifier(const URuntimeMeshModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshModifier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeMeshModifier)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_13_PROLOG \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_EVENT_PARMS


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_RPC_WRAPPERS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_INCLASS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
