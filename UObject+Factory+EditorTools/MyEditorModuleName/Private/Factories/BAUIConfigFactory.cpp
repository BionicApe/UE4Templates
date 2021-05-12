// Created by Bionic Ape. All Rights Reserved.

#include "Factories/BAUIConfigFactory.h"
#include "BAUIConfig.h"

UBAUIConfigFactory::UBAUIConfigFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	SupportedClass = UBAUIConfig::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UBAUIConfigFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) {
	UBAUIConfig* NewAsset = NewObject<UBAUIConfig>(InParent, Class, Name, Flags);
	return NewAsset;
}


