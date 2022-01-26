// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshCore_generated_h
#error "RuntimeMeshCore.generated.h already included, missing '#pragma once' in RuntimeMeshCore.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshCore_generated_h

#define HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCore_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeMeshTangent_Statics; \
	RUNTIMEMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


template<> RUNTIMEMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FRuntimeMeshTangent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshCore_h


#define FOREACH_ENUM_ERUNTIMEMESHTHREADINGPRIORITY(op) \
	op(ERuntimeMeshThreadingPriority::Normal) \
	op(ERuntimeMeshThreadingPriority::AboveNormal) \
	op(ERuntimeMeshThreadingPriority::BelowNormal) \
	op(ERuntimeMeshThreadingPriority::Highest) \
	op(ERuntimeMeshThreadingPriority::Lowest) \
	op(ERuntimeMeshThreadingPriority::SlightlyBelowNormal) \
	op(ERuntimeMeshThreadingPriority::TimeCritical) 

enum class ERuntimeMeshThreadingPriority : uint8;
template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshThreadingPriority>();

#define FOREACH_ENUM_ERUNTIMEMESHCOLLISIONCOOKINGMODE(op) \
	op(ERuntimeMeshCollisionCookingMode::CollisionPerformance) \
	op(ERuntimeMeshCollisionCookingMode::CookingPerformance) 

enum class ERuntimeMeshCollisionCookingMode : uint8;
template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshCollisionCookingMode>();

#define FOREACH_ENUM_ERUNTIMEMESHUPDATEFREQUENCY(op) \
	op(ERuntimeMeshUpdateFrequency::Average) \
	op(ERuntimeMeshUpdateFrequency::Frequent) \
	op(ERuntimeMeshUpdateFrequency::Infrequent) 

enum class ERuntimeMeshUpdateFrequency : uint8;
template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshUpdateFrequency>();

#define FOREACH_ENUM_ERUNTIMEMESHMOBILITY(op) \
	op(ERuntimeMeshMobility::Movable) \
	op(ERuntimeMeshMobility::Stationary) \
	op(ERuntimeMeshMobility::Static) 

enum class ERuntimeMeshMobility : uint8;
template<> RUNTIMEMESHCOMPONENT_API UEnum* StaticEnum<ERuntimeMeshMobility>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
