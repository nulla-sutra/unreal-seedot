// Copyright 2019-Present tarnishablec. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "SeedotCameraManager.generated.h"

/**
 * 
 */
UCLASS()
class SEEDOT_API ASeedotCameraManager : public APlayerCameraManager
{
    GENERATED_BODY()

protected:
    virtual void UpdateViewTarget(FTViewTarget& OutVT, float DeltaTime) override;
};
