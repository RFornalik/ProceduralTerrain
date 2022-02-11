// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RuntimeMeshComponent/Public/RuntimeMeshCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshCore() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* ERuntimeMeshThreadingPriority_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshThreadingPriority"));
		}
		return Singleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshThreadingPriority>()
	{
		return ERuntimeMeshThreadingPriority_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeMeshThreadingPriority(ERuntimeMeshThreadingPriority_StaticEnum, TEXT("/Script/RuntimeMeshComponent"), TEXT("ERuntimeMeshThreadingPriority"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority_Hash() { return 1710540981U; }
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeMeshThreadingPriority"), 0, Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshThreadingPriority_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERuntimeMeshThreadingPriority::Normal", (int64)ERuntimeMeshThreadingPriority::Normal },
				{ "ERuntimeMeshThreadingPriority::AboveNormal", (int64)ERuntimeMeshThreadingPriority::AboveNormal },
				{ "ERuntimeMeshThreadingPriority::BelowNormal", (int64)ERuntimeMeshThreadingPriority::BelowNormal },
				{ "ERuntimeMeshThreadingPriority::Highest", (int64)ERuntimeMeshThreadingPriority::Highest },
				{ "ERuntimeMeshThreadingPriority::Lowest", (int64)ERuntimeMeshThreadingPriority::Lowest },
				{ "ERuntimeMeshThreadingPriority::SlightlyBelowNormal", (int64)ERuntimeMeshThreadingPriority::SlightlyBelowNormal },
				{ "ERuntimeMeshThreadingPriority::TimeCritical", (int64)ERuntimeMeshThreadingPriority::TimeCritical },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AboveNormal.Name", "ERuntimeMeshThreadingPriority::AboveNormal" },
				{ "BelowNormal.Name", "ERuntimeMeshThreadingPriority::BelowNormal" },
				{ "BlueprintType", "true" },
				{ "Highest.Name", "ERuntimeMeshThreadingPriority::Highest" },
				{ "Lowest.Name", "ERuntimeMeshThreadingPriority::Lowest" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
				{ "Normal.Name", "ERuntimeMeshThreadingPriority::Normal" },
				{ "SlightlyBelowNormal.Name", "ERuntimeMeshThreadingPriority::SlightlyBelowNormal" },
				{ "TimeCritical.Name", "ERuntimeMeshThreadingPriority::TimeCritical" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				nullptr,
				"ERuntimeMeshThreadingPriority",
				"ERuntimeMeshThreadingPriority",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERuntimeMeshCollisionCookingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshCollisionCookingMode"));
		}
		return Singleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshCollisionCookingMode>()
	{
		return ERuntimeMeshCollisionCookingMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeMeshCollisionCookingMode(ERuntimeMeshCollisionCookingMode_StaticEnum, TEXT("/Script/RuntimeMeshComponent"), TEXT("ERuntimeMeshCollisionCookingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_Hash() { return 2694491098U; }
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeMeshCollisionCookingMode"), 0, Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERuntimeMeshCollisionCookingMode::CollisionPerformance", (int64)ERuntimeMeshCollisionCookingMode::CollisionPerformance },
				{ "ERuntimeMeshCollisionCookingMode::CookingPerformance", (int64)ERuntimeMeshCollisionCookingMode::CookingPerformance },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CollisionPerformance.Comment", "/*\n\x09*\x09""Favors runtime collision performance of cooking speed.\n\x09*\x09This means that cooking a new mesh will be slower, but collision will be faster.\n\x09*/" },
				{ "CollisionPerformance.DisplayName", "Collision Performance" },
				{ "CollisionPerformance.Name", "ERuntimeMeshCollisionCookingMode::CollisionPerformance" },
				{ "CollisionPerformance.ToolTip", "*       Favors runtime collision performance of cooking speed.\n*       This means that cooking a new mesh will be slower, but collision will be faster." },
				{ "Comment", "/*\n*\x09""Configuration flag for the collision cooking to prioritize cooking speed or collision performance.\n*/" },
				{ "CookingPerformance.Comment", "/*\n\x09*\x09""Favors cooking speed over collision performance.\n\x09*\x09This means that cooking a new mesh will be faster, but collision will be slower.\n\x09*/" },
				{ "CookingPerformance.DisplayName", "Cooking Performance" },
				{ "CookingPerformance.Name", "ERuntimeMeshCollisionCookingMode::CookingPerformance" },
				{ "CookingPerformance.ToolTip", "*       Favors cooking speed over collision performance.\n*       This means that cooking a new mesh will be faster, but collision will be slower." },
				{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
				{ "ToolTip", "*      Configuration flag for the collision cooking to prioritize cooking speed or collision performance." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				nullptr,
				"ERuntimeMeshCollisionCookingMode",
				"ERuntimeMeshCollisionCookingMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERuntimeMeshUpdateFrequency_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshUpdateFrequency"));
		}
		return Singleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshUpdateFrequency>()
	{
		return ERuntimeMeshUpdateFrequency_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeMeshUpdateFrequency(ERuntimeMeshUpdateFrequency_StaticEnum, TEXT("/Script/RuntimeMeshComponent"), TEXT("ERuntimeMeshUpdateFrequency"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency_Hash() { return 3535013171U; }
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeMeshUpdateFrequency"), 0, Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshUpdateFrequency_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERuntimeMeshUpdateFrequency::Average", (int64)ERuntimeMeshUpdateFrequency::Average },
				{ "ERuntimeMeshUpdateFrequency::Frequent", (int64)ERuntimeMeshUpdateFrequency::Frequent },
				{ "ERuntimeMeshUpdateFrequency::Infrequent", (int64)ERuntimeMeshUpdateFrequency::Infrequent },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Average.Comment", "/* Tries to skip recreating the scene proxy if possible. */" },
				{ "Average.DisplayName", "Average" },
				{ "Average.Name", "ERuntimeMeshUpdateFrequency::Average" },
				{ "Average.ToolTip", "Tries to skip recreating the scene proxy if possible." },
				{ "BlueprintType", "true" },
				{ "Comment", "/* Update frequency for a section. Used to optimize for update or render speed*/" },
				{ "Frequent.Comment", "/* Tries to skip recreating the scene proxy if possible and optimizes the buffers for frequent updates. */" },
				{ "Frequent.DisplayName", "Frequent" },
				{ "Frequent.Name", "ERuntimeMeshUpdateFrequency::Frequent" },
				{ "Frequent.ToolTip", "Tries to skip recreating the scene proxy if possible and optimizes the buffers for frequent updates." },
				{ "Infrequent.Comment", "/* If the component is static it will try to use the static rendering path (this will force a recreate of the scene proxy) */" },
				{ "Infrequent.DisplayName", "Infrequent" },
				{ "Infrequent.Name", "ERuntimeMeshUpdateFrequency::Infrequent" },
				{ "Infrequent.ToolTip", "If the component is static it will try to use the static rendering path (this will force a recreate of the scene proxy)" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
				{ "ToolTip", "Update frequency for a section. Used to optimize for update or render speed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				nullptr,
				"ERuntimeMeshUpdateFrequency",
				"ERuntimeMeshUpdateFrequency",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERuntimeMeshMobility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshMobility"));
		}
		return Singleton;
	}
	template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshMobility>()
	{
		return ERuntimeMeshMobility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeMeshMobility(ERuntimeMeshMobility_StaticEnum, TEXT("/Script/RuntimeMeshComponent"), TEXT("ERuntimeMeshMobility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility_Hash() { return 3378700882U; }
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeMeshMobility"), 0, Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERuntimeMeshMobility::Movable", (int64)ERuntimeMeshMobility::Movable },
				{ "ERuntimeMeshMobility::Stationary", (int64)ERuntimeMeshMobility::Stationary },
				{ "ERuntimeMeshMobility::Static", (int64)ERuntimeMeshMobility::Static },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/* Mobility status for a RuntimeMeshComponent */" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
				{ "Movable.Name", "ERuntimeMeshMobility::Movable" },
				{ "Static.Name", "ERuntimeMeshMobility::Static" },
				{ "Stationary.Name", "ERuntimeMeshMobility::Stationary" },
				{ "ToolTip", "Mobility status for a RuntimeMeshComponent" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				nullptr,
				"ERuntimeMeshMobility",
				"ERuntimeMeshMobility",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRuntimeMeshTangent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshTangent, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshTangent"), sizeof(FRuntimeMeshTangent), Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_Hash());
	}
	return Singleton;
}
template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<FRuntimeMeshTangent>()
{
	return FRuntimeMeshTangent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshTangent(FRuntimeMeshTangent::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshTangent"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshTangent
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshTangent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshTangent")),new UScriptStruct::TCppStructOps<FRuntimeMeshTangent>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshTangent;
	struct Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipTangentY_MetaData[];
#endif
		static void NewProp_bFlipTangentY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipTangentY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Struct used to specify a tangent vector for a vertex\n*\x09The Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member.\n*/" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
		{ "ToolTip", "Struct used to specify a tangent vector for a vertex\nThe Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshTangent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_TangentX_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** Direction of X tangent for this vertex */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
		{ "ToolTip", "Direction of X tangent for this vertex" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_TangentX = { "TangentX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeMeshTangent, TangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_TangentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_TangentX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_bFlipTangentY_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** Bool that indicates whether we should flip the Y tangent when we compute it using cross product */" },
		{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
		{ "ToolTip", "Bool that indicates whether we should flip the Y tangent when we compute it using cross product" },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_bFlipTangentY_SetBit(void* Obj)
	{
		((FRuntimeMeshTangent*)Obj)->bFlipTangentY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_bFlipTangentY = { "bFlipTangentY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeMeshTangent), &Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_bFlipTangentY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_bFlipTangentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_bFlipTangentY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_TangentX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::NewProp_bFlipTangentY,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
		nullptr,
		&NewStructOps,
		"RuntimeMeshTangent",
		sizeof(FRuntimeMeshTangent),
		alignof(FRuntimeMeshTangent),
		Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshTangent"), sizeof(FRuntimeMeshTangent), Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_Hash() { return 2618293894U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
