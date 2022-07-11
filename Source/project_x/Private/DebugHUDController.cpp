// Fill out your copyright notice in the Description page of Project Settings.


#include "DebugLogger.h"
#include "DebugHUDController.h"

void UDebugHUDController::NativeConstruct()
{
	Super::NativeConstruct();

}

void UDebugHUDController::WriteToDebug()
{

}

void UDebugHUDController::SetVisibilityOfDebug(bool value)
{
	Super::SetVisibility(ESlateVisibility::Hidden);
}