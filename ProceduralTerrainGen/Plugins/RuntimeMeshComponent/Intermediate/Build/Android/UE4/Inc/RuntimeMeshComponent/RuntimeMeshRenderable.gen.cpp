// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshRenderable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshRenderable() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshSectionData();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshLODProperties();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency();
// End Cross Module References
class UScriptStruct* FRuntimeMeshSectionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshSectionData, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshSectionData"), sizeof(FRuntimeMeshSectionData), Get_Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshSectionData>()
{
	return FRuntimeMeshSectionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshSectionData(FRuntimeMeshSectionData::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshSectionData"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshSectionData
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshSectionData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshSectionData")),new UScriptStruct::TCppStructOps<FRuntimeMeshSectionData>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshSectionData;
	struct Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshSectionData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshSectionData",
		sizeof(FRuntimeMeshSectionData),
		alignof(FRuntimeMeshSectionData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshSectionData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshSectionData"), sizeof(FRuntimeMeshSectionData), Get_Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshSectionData_Hash() { return 2062915924U; }
class UScriptStruct* FRuntimeMeshRenderableMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshRenderableMeshData"), sizeof(FRuntimeMeshRenderableMeshData), Get_Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshRenderableMeshData>()
{
	return FRuntimeMeshRenderableMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshRenderableMeshData(FRuntimeMeshRenderableMeshData::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshRenderableMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshRenderableMeshData
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshRenderableMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshRenderableMeshData")),new UScriptStruct::TCppStructOps<FRuntimeMeshRenderableMeshData>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshRenderableMeshData;
	struct Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjacencyTriangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdjacencyTriangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Triangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexCoords_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TexCoords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Positions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshRenderableMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_AdjacencyTriangles_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_AdjacencyTriangles = { "AdjacencyTriangles", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshRenderableMeshData, AdjacencyTriangles), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_AdjacencyTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_AdjacencyTriangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshRenderableMeshData, Triangles), Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Triangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Colors_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshRenderableMeshData, Colors), Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Colors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_TexCoords_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_TexCoords = { "TexCoords", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshRenderableMeshData, TexCoords), Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_TexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_TexCoords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Tangents_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshRenderableMeshData, Tangents), Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Tangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Positions_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MeshData" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshRenderableMeshData, Positions), Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Positions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Positions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_AdjacencyTriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Colors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_TexCoords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Tangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::NewProp_Positions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshRenderableMeshData",
		sizeof(FRuntimeMeshRenderableMeshData),
		alignof(FRuntimeMeshRenderableMeshData),
		Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshRenderableMeshData"), sizeof(FRuntimeMeshRenderableMeshData), Get_Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData_Hash() { return 2170992002U; }
class UScriptStruct* FRuntimeMeshMaterialSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshMaterialSlot"), sizeof(FRuntimeMeshMaterialSlot), Get_Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshMaterialSlot>()
{
	return FRuntimeMeshMaterialSlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshMaterialSlot(FRuntimeMeshMaterialSlot::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshMaterialSlot"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshMaterialSlot
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshMaterialSlot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshMaterialSlot")),new UScriptStruct::TCppStructOps<FRuntimeMeshMaterialSlot>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshMaterialSlot;
	struct Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshMaterialSlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MaterialSlot" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshMaterialSlot, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|MaterialSlot" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshMaterialSlot, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::NewProp_SlotName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshMaterialSlot",
		sizeof(FRuntimeMeshMaterialSlot),
		alignof(FRuntimeMeshMaterialSlot),
		Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshMaterialSlot"), sizeof(FRuntimeMeshMaterialSlot), Get_Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshMaterialSlot_Hash() { return 3793268566U; }
class UScriptStruct* FRuntimeMeshLODProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshLODProperties"), sizeof(FRuntimeMeshLODProperties), Get_Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshLODProperties>()
{
	return FRuntimeMeshLODProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshLODProperties(FRuntimeMeshLODProperties::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshLODProperties"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshLODProperties
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshLODProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshLODProperties")),new UScriptStruct::TCppStructOps<FRuntimeMeshLODProperties>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshLODProperties;
	struct Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldMergeStaticSectionBuffers_MetaData[];
#endif
		static void NewProp_bShouldMergeStaticSectionBuffers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldMergeStaticSectionBuffers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanGetAllSectionsAtOnce_MetaData[];
#endif
		static void NewProp_bCanGetAllSectionsAtOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanGetAllSectionsAtOnce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanGetSectionsIndependently_MetaData[];
#endif
		static void NewProp_bCanGetSectionsIndependently_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanGetSectionsIndependently;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshLODProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bShouldMergeStaticSectionBuffers_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|LODProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bShouldMergeStaticSectionBuffers_SetBit(void* Obj)
	{
		((FRuntimeMeshLODProperties*)Obj)->bShouldMergeStaticSectionBuffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bShouldMergeStaticSectionBuffers = { "bShouldMergeStaticSectionBuffers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshLODProperties), &Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bShouldMergeStaticSectionBuffers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bShouldMergeStaticSectionBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bShouldMergeStaticSectionBuffers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetAllSectionsAtOnce_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|LODProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetAllSectionsAtOnce_SetBit(void* Obj)
	{
		((FRuntimeMeshLODProperties*)Obj)->bCanGetAllSectionsAtOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetAllSectionsAtOnce = { "bCanGetAllSectionsAtOnce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshLODProperties), &Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetAllSectionsAtOnce_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetAllSectionsAtOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetAllSectionsAtOnce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetSectionsIndependently_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|LODProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetSectionsIndependently_SetBit(void* Obj)
	{
		((FRuntimeMeshLODProperties*)Obj)->bCanGetSectionsIndependently = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetSectionsIndependently = { "bCanGetSectionsIndependently", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshLODProperties), &Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetSectionsIndependently_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetSectionsIndependently_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetSectionsIndependently_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|LODProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshLODProperties, ScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_ScreenSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bShouldMergeStaticSectionBuffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetAllSectionsAtOnce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_bCanGetSectionsIndependently,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::NewProp_ScreenSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshLODProperties",
		sizeof(FRuntimeMeshLODProperties),
		alignof(FRuntimeMeshLODProperties),
		Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshLODProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshLODProperties"), sizeof(FRuntimeMeshLODProperties), Get_Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshLODProperties_Hash() { return 272782896U; }
class UScriptStruct* FRuntimeMeshSectionProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshSectionProperties"), sizeof(FRuntimeMeshSectionProperties), Get_Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshSectionProperties>()
{
	return FRuntimeMeshSectionProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshSectionProperties(FRuntimeMeshSectionProperties::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshSectionProperties"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshSectionProperties
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshSectionProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshSectionProperties")),new UScriptStruct::TCppStructOps<FRuntimeMeshSectionProperties>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshSectionProperties;
	struct Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWants32BitIndices_MetaData[];
#endif
		static void NewProp_bWants32BitIndices_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWants32BitIndices;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTexCoords_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NumTexCoords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTexCoords_MetaData[];
#endif
		static void NewProp_bUseHighPrecisionTexCoords_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTexCoords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangents_MetaData[];
#endif
		static void NewProp_bUseHighPrecisionTangents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceOpaque_MetaData[];
#endif
		static void NewProp_bForceOpaque_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceOpaque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastsShadow_MetaData[];
#endif
		static void NewProp_bCastsShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastsShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMainPassRenderable_MetaData[];
#endif
		static void NewProp_bIsMainPassRenderable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMainPassRenderable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UpdateFrequency;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpdateFrequency_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshSectionProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bWants32BitIndices_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bWants32BitIndices_SetBit(void* Obj)
	{
		((FRuntimeMeshSectionProperties*)Obj)->bWants32BitIndices = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bWants32BitIndices = { "bWants32BitIndices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshSectionProperties), &Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bWants32BitIndices_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bWants32BitIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bWants32BitIndices_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_NumTexCoords_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_NumTexCoords = { "NumTexCoords", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshSectionProperties, NumTexCoords), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_NumTexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_NumTexCoords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTexCoords_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTexCoords_SetBit(void* Obj)
	{
		((FRuntimeMeshSectionProperties*)Obj)->bUseHighPrecisionTexCoords = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTexCoords = { "bUseHighPrecisionTexCoords", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshSectionProperties), &Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTexCoords_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTexCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTexCoords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTangents_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTangents_SetBit(void* Obj)
	{
		((FRuntimeMeshSectionProperties*)Obj)->bUseHighPrecisionTangents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTangents = { "bUseHighPrecisionTangents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshSectionProperties), &Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTangents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bForceOpaque_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bForceOpaque_SetBit(void* Obj)
	{
		((FRuntimeMeshSectionProperties*)Obj)->bForceOpaque = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bForceOpaque = { "bForceOpaque", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshSectionProperties), &Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bForceOpaque_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bForceOpaque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bForceOpaque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bCastsShadow_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bCastsShadow_SetBit(void* Obj)
	{
		((FRuntimeMeshSectionProperties*)Obj)->bCastsShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bCastsShadow = { "bCastsShadow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshSectionProperties), &Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bCastsShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bCastsShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bCastsShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsMainPassRenderable_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsMainPassRenderable_SetBit(void* Obj)
	{
		((FRuntimeMeshSectionProperties*)Obj)->bIsMainPassRenderable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsMainPassRenderable = { "bIsMainPassRenderable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshSectionProperties), &Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsMainPassRenderable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsMainPassRenderable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsMainPassRenderable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((FRuntimeMeshSectionProperties*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshSectionProperties), &Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_MaterialSlot_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_MaterialSlot = { "MaterialSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshSectionProperties, MaterialSlot), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_MaterialSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_MaterialSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_UpdateFrequency_MetaData[] = {
		{ "Category", "RuntimeMesh|Rendering|SectionProperties" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshSectionProperties, UpdateFrequency), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_UpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_UpdateFrequency_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_UpdateFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bWants32BitIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_NumTexCoords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTexCoords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bUseHighPrecisionTangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bForceOpaque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bCastsShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsMainPassRenderable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_bIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_MaterialSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_UpdateFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::NewProp_UpdateFrequency_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshSectionProperties",
		sizeof(FRuntimeMeshSectionProperties),
		alignof(FRuntimeMeshSectionProperties),
		Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshSectionProperties"), sizeof(FRuntimeMeshSectionProperties), Get_Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshSectionProperties_Hash() { return 1050790229U; }
class UScriptStruct* FRuntimeMeshTriangleStream::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshTriangleStream"), sizeof(FRuntimeMeshTriangleStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshTriangleStream>()
{
	return FRuntimeMeshTriangleStream::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshTriangleStream(FRuntimeMeshTriangleStream::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshTriangleStream"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshTriangleStream
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshTriangleStream()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshTriangleStream")),new UScriptStruct::TCppStructOps<FRuntimeMeshTriangleStream>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshTriangleStream;
	struct Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshTriangleStream>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshTriangleStream",
		sizeof(FRuntimeMeshTriangleStream),
		alignof(FRuntimeMeshTriangleStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshTriangleStream"), sizeof(FRuntimeMeshTriangleStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshTriangleStream_Hash() { return 472774460U; }
class UScriptStruct* FRuntimeMeshVertexColorStream::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshVertexColorStream"), sizeof(FRuntimeMeshVertexColorStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshVertexColorStream>()
{
	return FRuntimeMeshVertexColorStream::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshVertexColorStream(FRuntimeMeshVertexColorStream::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshVertexColorStream"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshVertexColorStream
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshVertexColorStream()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshVertexColorStream")),new UScriptStruct::TCppStructOps<FRuntimeMeshVertexColorStream>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshVertexColorStream;
	struct Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshVertexColorStream>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshVertexColorStream",
		sizeof(FRuntimeMeshVertexColorStream),
		alignof(FRuntimeMeshVertexColorStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshVertexColorStream"), sizeof(FRuntimeMeshVertexColorStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexColorStream_Hash() { return 1814486701U; }
class UScriptStruct* FRuntimeMeshVertexTexCoordStream::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshVertexTexCoordStream"), sizeof(FRuntimeMeshVertexTexCoordStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshVertexTexCoordStream>()
{
	return FRuntimeMeshVertexTexCoordStream::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshVertexTexCoordStream(FRuntimeMeshVertexTexCoordStream::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshVertexTexCoordStream"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshVertexTexCoordStream
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshVertexTexCoordStream()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshVertexTexCoordStream")),new UScriptStruct::TCppStructOps<FRuntimeMeshVertexTexCoordStream>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshVertexTexCoordStream;
	struct Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshVertexTexCoordStream>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshVertexTexCoordStream",
		sizeof(FRuntimeMeshVertexTexCoordStream),
		alignof(FRuntimeMeshVertexTexCoordStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshVertexTexCoordStream"), sizeof(FRuntimeMeshVertexTexCoordStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexTexCoordStream_Hash() { return 3089198620U; }
class UScriptStruct* FRuntimeMeshVertexTangentStream::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshVertexTangentStream"), sizeof(FRuntimeMeshVertexTangentStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshVertexTangentStream>()
{
	return FRuntimeMeshVertexTangentStream::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshVertexTangentStream(FRuntimeMeshVertexTangentStream::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshVertexTangentStream"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshVertexTangentStream
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshVertexTangentStream()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshVertexTangentStream")),new UScriptStruct::TCppStructOps<FRuntimeMeshVertexTangentStream>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshVertexTangentStream;
	struct Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshVertexTangentStream>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshVertexTangentStream",
		sizeof(FRuntimeMeshVertexTangentStream),
		alignof(FRuntimeMeshVertexTangentStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshVertexTangentStream"), sizeof(FRuntimeMeshVertexTangentStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexTangentStream_Hash() { return 3726826728U; }
class UScriptStruct* FRuntimeMeshVertexPositionStream::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshVertexPositionStream"), sizeof(FRuntimeMeshVertexPositionStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshVertexPositionStream>()
{
	return FRuntimeMeshVertexPositionStream::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshVertexPositionStream(FRuntimeMeshVertexPositionStream::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshVertexPositionStream"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshVertexPositionStream
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshVertexPositionStream()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshVertexPositionStream")),new UScriptStruct::TCppStructOps<FRuntimeMeshVertexPositionStream>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshVertexPositionStream;
	struct Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RuntimeMeshRenderable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshVertexPositionStream>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshVertexPositionStream",
		sizeof(FRuntimeMeshVertexPositionStream),
		alignof(FRuntimeMeshVertexPositionStream),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshVertexPositionStream"), sizeof(FRuntimeMeshVertexPositionStream), Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshVertexPositionStream_Hash() { return 777061623U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
