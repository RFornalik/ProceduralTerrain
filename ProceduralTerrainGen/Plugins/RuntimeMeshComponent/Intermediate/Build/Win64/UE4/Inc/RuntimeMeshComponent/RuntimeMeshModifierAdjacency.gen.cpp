// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/Modifiers/RuntimeMeshModifierAdjacency.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshModifierAdjacency() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifierAdjacency_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifierAdjacency();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifier();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshModifierAdjacency::execCalculateTessellationIndices)
	{
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_MeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshModifierAdjacency::CalculateTessellationIndices(Z_Param_Out_MeshData);
		P_NATIVE_END;
	}
	void URuntimeMeshModifierAdjacency::StaticRegisterNativesURuntimeMeshModifierAdjacency()
	{
		UClass* Class = URuntimeMeshModifierAdjacency::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateTessellationIndices", &URuntimeMeshModifierAdjacency::execCalculateTessellationIndices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics
	{
		struct RuntimeMeshModifierAdjacency_eventCalculateTessellationIndices_Parms
		{
			FRuntimeMeshRenderableMeshData MeshData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshModifierAdjacency_eventCalculateTessellationIndices_Parms, MeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::NewProp_MeshData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Modifiers|Adjacency" },
		{ "Comment", "/*\n\x09*\x09""Calculates the tessellation indices for the supplied mesh data, setting the result back to the tessellation triangles in the mesh data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Modifiers/RuntimeMeshModifierAdjacency.h" },
		{ "ToolTip", "*       Calculates the tessellation indices for the supplied mesh data, setting the result back to the tessellation triangles in the mesh data." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshModifierAdjacency, nullptr, "CalculateTessellationIndices", nullptr, nullptr, sizeof(RuntimeMeshModifierAdjacency_eventCalculateTessellationIndices_Parms), Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshModifierAdjacency_NoRegister()
	{
		return URuntimeMeshModifierAdjacency::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshModifierAdjacency_CalculateTessellationIndices, "CalculateTessellationIndices" }, // 2796627398
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Modifiers/RuntimeMeshModifierAdjacency.h" },
		{ "ModuleRelativePath", "Public/Modifiers/RuntimeMeshModifierAdjacency.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshModifierAdjacency>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::ClassParams = {
		&URuntimeMeshModifierAdjacency::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshModifierAdjacency()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeMeshModifierAdjacency_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshModifierAdjacency, 3976759214);
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshModifierAdjacency>()
	{
		return URuntimeMeshModifierAdjacency::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshModifierAdjacency(Z_Construct_UClass_URuntimeMeshModifierAdjacency, &URuntimeMeshModifierAdjacency::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshModifierAdjacency"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshModifierAdjacency);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
