// Created by Bionic Ape. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), Blueprintable)
class MYPROJECT_API UMyComponent : public UActorComponent
{
	GENERATED_BODY()


public:

	UMyComponent();

};