// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#define D(x, y) if(GEngine){GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::y, TEXT(x));}

/**
 * 
 */
class PROJECT_X_API Macros
{
public:
	Macros();
	~Macros();
};
