// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRuntimeMeshRenderableMeshData;
struct FPlane;
enum class ERuntimeMeshSliceCapOption : uint8;
class URuntimeMeshComponent;
struct FVector;
class UMaterialInterface;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshSlicer_generated_h
#error "RuntimeMeshSlicer.generated.h already included, missing '#pragma once' in RuntimeMeshSlicer.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshSlicer_generated_h

#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_SPARSE_DATA
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSliceRuntimeMeshData); \
	DECLARE_FUNCTION(execSliceRuntimeMesh);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSliceRuntimeMeshData); \
	DECLARE_FUNCTION(execSliceRuntimeMesh);


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshSlicer(); \
	friend struct Z_Construct_UClass_URuntimeMeshSlicer_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshSlicer, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshSlicer)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshSlicer(); \
	friend struct Z_Construct_UClass_URuntimeMeshSlicer_Statics; \
public: \
	DECLARE_CLASS(URuntimeMeshSlicer, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshSlicer)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshSlicer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshSlicer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshSlicer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshSlicer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshSlicer(URuntimeMeshSlicer&&); \
	NO_API URuntimeMeshSlicer(const URuntimeMeshSlicer&); \
public:


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshSlicer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshSlicer(URuntimeMeshSlicer&&); \
	NO_API URuntimeMeshSlicer(const URuntimeMeshSlicer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshSlicer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshSlicer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshSlicer)


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_23_PROLOG
#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_RPC_WRAPPERS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_INCLASS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_SPARSE_DATA \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<class URuntimeMeshSlicer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h


#define FOREACH_ENUM_ERUNTIMEMESHSLICECAPOPTION(op) \
	op(ERuntimeMeshSliceCapOption::NoCap) \
	op(ERuntimeMeshSliceCapOption::CreateNewSectionForCap) \
	op(ERuntimeMeshSliceCapOption::UseLastSectionForCap) 

enum class ERuntimeMeshSliceCapOption : uint8;
template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshSliceCapOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
