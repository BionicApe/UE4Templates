// Created by Bionic Ape. All Rights Reserved.

#include "TypeActions/MyObjectTypeActions.h"
#include "MyObject.h"

#define LOCTEXT_NAMESPACE "MyObject_TypeActions"

FMyObjectTypeActions::FMyObjectTypeActions(EAssetTypeCategories::Type InAssetCategory)
	: AssetCategory(InAssetCategory)
{
}

FText FMyObjectTypeActions::GetName() const
{
	return LOCTEXT("FMyObjectTypeActionsName", "MyObject");
}

FColor FMyObjectTypeActions::GetTypeColor() const
{
	return FColor::Cyan;
}

UClass* FMyObjectTypeActions::GetSupportedClass() const
{
	return UMyObject::StaticClass();
}

uint32 FMyObjectTypeActions::GetCategories()
{
	return AssetCategory;
}

#undef LOCTEXT_NAMESPACE