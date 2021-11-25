// Created by Bionic Ape. All Rights Reserved.

#include "Factories/MyObjectFactory.h"
#include "MyObject.h"

UMyObjectFactory::UMyObjectFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	SupportedClass = UMyObject::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
	bEditorImport = true;
	Formats.Add(TEXT(".MyFormat;Format file for importing MyObjects"));
}

UObject* UMyObjectFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) {
	UMyObject* NewAsset = NewObject<UMyObject>(InParent, Class, Name, Flags);
	return NewAsset;
}


