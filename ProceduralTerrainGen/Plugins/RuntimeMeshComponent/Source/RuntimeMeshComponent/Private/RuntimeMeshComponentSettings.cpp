// Fill out your copyright notice in the Description page of Project Settings.


#include "RuntimeMeshComponentSettings.h"

URuntimeMeshComponentSettings::URuntimeMeshComponentSettings(const FObjectInitializer & ObjectInitializer)
	: Super(ObjectInitializer)
	, bUse32BitIndicesByDefault(false)
	, bUseHighPrecisionTexCoordsByDefault(false)
	, bUseHighPrecisionTangentsByDefault(false)
	, bCookCollisionAsync(true)
	, DefaultCookingMode(ERuntimeMeshCollisionCookingMode::CookingPerformance)
	, MinMaxThreadPoolThreads(1, 4)
	, SystemThreadDivisor(2)
	, ThreadPriority(ERuntimeMeshThreadingPriority::BelowNormal)
	, ThreadStackSize(0)
	, MaxAllowedTimePerTick(1000 / 90)
{

}

FName URuntimeMeshComponentSettings::GetCategoryName() const
{
	return TEXT("Plugins");
}

#if WITH_EDITOR
FText URuntimeMeshComponentSettings::GetSectionText() const
{
	return NSLOCTEXT("RuntimeMeshComponent", "RuntimeMeshComponentSettingsSection", "Runtime Mesh Component");
}

void URuntimeMeshComponentSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.Property != nullptr)
	{
		SettingsChangedDelegate.Broadcast(PropertyChangedEvent.Property->GetName(), this);
	}
}

URuntimeMeshComponentSettings::FOnRuntimeMeshComponentSettingsChanged& URuntimeMeshComponentSettings::OnSettingsChanged()
{
	return SettingsChangedDelegate;
}

URuntimeMeshComponentSettings::FOnRuntimeMeshComponentSettingsChanged URuntimeMeshComponentSettings::SettingsChangedDelegate;
#endif