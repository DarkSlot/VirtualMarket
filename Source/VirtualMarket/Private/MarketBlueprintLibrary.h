// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "VerticalBox.h"
#include "MarketBlueprintLibrary.generated.h"
/**
 * 
 */
USTRUCT(BlueprintType)
struct VIRTUALMARKET_API FProductList
{
	GENERATED_USTRUCT_BODY()

	/** The database name (not the filename) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Market")
	int32 ProductId;

	/** The database tables we want to get data from */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Market")
	FString Names;
};
UCLASS()
class VIRTUALMARKET_API UMarketBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Market")
	static 	TArray<FProductList> UpdateProductList(FName MarketName);


	
};
