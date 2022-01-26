// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/Modifiers/RuntimeMeshModifierNormals.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshModifierNormals() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifierNormals_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifierNormals();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshModifier();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeMeshModifierNormals::execCalculateNormalsTangents)
	{
		P_GET_STRUCT_REF(FRuntimeMeshRenderableMeshData,Z_Param_Out_MeshData);
		P_GET_UBOOL(Z_Param_bInComputeSmoothNormals);
		P_FINISH;
		P_NATIVE_BEGIN;
		URuntimeMeshModifierNormals::CalculateNormalsTangents(Z_Param_Out_MeshData,Z_Param_bInComputeSmoothNormals);
		P_NATIVE_END;
	}
	void URuntimeMeshModifierNormals::StaticRegisterNativesURuntimeMeshModifierNormals()
	{
		UClass* Class = URuntimeMeshModifierNormals::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateNormalsTangents", &URuntimeMeshModifierNormals::execCalculateNormalsTangents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics
	{
		struct RuntimeMeshModifierNormals_eventCalculateNormalsTangents_Parms
		{
			FRuntimeMeshRenderableMeshData MeshData;
			bool bInComputeSmoothNormals;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static void NewProp_bInComputeSmoothNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInComputeSmoothNormals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RuntimeMeshModifierNormals_eventCalculateNormalsTangents_Parms, MeshData), Z_Construct_UScriptStruct_FRuntimeMeshRenderableMeshData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::NewProp_bInComputeSmoothNormals_SetBit(void* Obj)
	{
		((RuntimeMeshModifierNormals_eventCalculateNormalsTangents_Parms*)Obj)->bInComputeSmoothNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::NewProp_bInComputeSmoothNormals = { "bInComputeSmoothNormals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RuntimeMeshModifierNormals_eventCalculateNormalsTangents_Parms), &Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::NewProp_bInComputeSmoothNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::NewProp_MeshData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::NewProp_bInComputeSmoothNormals,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::Function_MetaDataParams[] = {
		{ "Category", "RuntimeMesh|Modifiers|Normals" },
		{ "CPP_Default_bInComputeSmoothNormals", "false" },
		{ "ModuleRelativePath", "Public/Modifiers/RuntimeMeshModifierNormals.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshModifierNormals, nullptr, "CalculateNormalsTangents", nullptr, nullptr, sizeof(RuntimeMeshModifierNormals_eventCalculateNormalsTangents_Parms), Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshModifierNormals_NoRegister()
	{
		return URuntimeMeshModifierNormals::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeMeshModifierNormals_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeSmoothNormals_MetaData[];
#endif
		static void NewProp_bComputeSmoothNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeSmoothNormals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeMeshModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeMeshModifierNormals_CalculateNormalsTangents, "CalculateNormalsTangents" }, // 4267179122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Modifiers/RuntimeMeshModifierNormals.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Modifiers/RuntimeMeshModifierNormals.h" },
		{ "ShortTooltip", "A RuntimeMeshModifierNormals is a class that implements logic to generate normals and tangents for a supplied mesh." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::NewProp_bComputeSmoothNormals_MetaData[] = {
		{ "Category", "RuntimeMesh|Modifiers|Normals" },
		{ "ModuleRelativePath", "Public/Modifiers/RuntimeMeshModifierNormals.h" },
	};
#endif
	void Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::NewProp_bComputeSmoothNormals_SetBit(void* Obj)
	{
		((URuntimeMeshModifierNormals*)Obj)->bComputeSmoothNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::NewProp_bComputeSmoothNormals = { "bComputeSmoothNormals", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URuntimeMeshModifierNormals), &Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::NewProp_bComputeSmoothNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::NewProp_bComputeSmoothNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::NewProp_bComputeSmoothNormals_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::NewProp_bComputeSmoothNormals,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeMeshModifierNormals>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::ClassParams = {
		&URuntimeMeshModifierNormals::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeMeshModifierNormals()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URuntimeMeshModifierNormals_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshModifierNormals, 3329702961);
	template<> RUNTIMEMESHCOMPONENT_API UClass* StaticClass<URuntimeMeshModifierNormals>()
	{
		return URuntimeMeshModifierNormals::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshModifierNormals(Z_Construct_UClass_URuntimeMeshModifierNormals, &URuntimeMeshModifierNormals::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshModifierNormals"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshModifierNormals);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
