// Fill out your copyright notice in the Description page of Project Settings.

#include "VirtualMarketPrivatePCH.h"
#include "MarketBlueprintLibrary.h"

TArray<FProductList> UMarketBlueprintLibrary::UpdateProductList(FName MarketName) {
	TArray<FProductList> result;
	FProductList aaa;
	aaa.Names = TEXT("DASFASD");
	aaa.ProductId = 2;
	result.Add(aaa);

	return result;
}


