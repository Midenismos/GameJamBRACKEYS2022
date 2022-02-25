// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CableComponent.h"
#include "MyCableComponent.generated.h"

/**
 *
 */
	UCLASS(hidecategories = (Object, Physics, Activation, "Components|Activation"), editinlinenew, meta = (BlueprintSpawnableComponent), ClassGroup = Rendering)
	class BRACKEYJAM_API ULocalCableComponent : public UCableComponent
{
	GENERATED_BODY()

public:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	FVector _previousWorldLocation;
};