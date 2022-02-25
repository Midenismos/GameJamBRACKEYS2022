

// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCableComponent.h"

void ULocalCableComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
{
	if (!_previousWorldLocation.IsZero())
	{
		ApplyWorldOffset(GetComponentLocation() - _previousWorldLocation, false);
	}

	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	_previousWorldLocation = GetComponentLocation();
};