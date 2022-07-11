// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DebugHUDController.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class PROJECT_X_API UDebugHUDController : public UUserWidget
{
	GENERATED_BODY()

protected:
	// Doing setup in the C++ constructor is not as
	// useful as using NativeConstruct.
	virtual void NativeConstruct() override;

public:
	virtual void WriteToDebug();
	virtual void SetVisibilityOfDebug(bool value);
	
};
