// Fill out your copyright notice in the Description page of Project Settings.

#include "VirtualMarketPrivatePCH.h"
#include "MainMarketFrameBase.h"
#define LOCTEXT_NAMESPACE "Your Namespace" 

void UMainMarketFrameBase::UpdateList(FName MarketName) {
	//AddProductItem(TEXT("adfasdfsalk"));
	FText TestHUDText = LOCTEXT("Your Key", "Your Text");
	AddProductMenuItem(TestHUDText);
}



