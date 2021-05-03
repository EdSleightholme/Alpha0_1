// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFL_ReadWriteFile.generated.h"

/**
 * 
 */
UCLASS()
class ALPHA0_1_API UBFL_ReadWriteFile : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "save")
		static bool WriteToFile(FString SaveTextB, FString FileNameB);

	UFUNCTION(BlueprintPure, Category = "save")
		static bool ReadFromFile(FString FileNameA, FString& SaveTextA);
};
