// Created by Bionic Ape. All Rights Reserved.

#include "Factories/MyBAObjectToRenameFactory.h"
#include "MyBAObjectToRename.h"

UMyBAObjectToRenameFactory::UMyBAObjectToRenameFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	SupportedClass = UMyBAObjectToRename::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UObject* UMyBAObjectToRenameFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) {
	UMyBAObjectToRename* NewAsset = NewObject<UMyBAObjectToRename>(InParent, Class, Name, Flags);
	return NewAsset;
}


