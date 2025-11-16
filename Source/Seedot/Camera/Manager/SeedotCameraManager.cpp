// Copyright 2019-Present tarnishablec. All Rights Reserved.


#include "SeedotCameraManager.h"

#include "Core/CameraSystemEvaluator.h"
#include "GameFramework/GameplayCameraComponentBase.h"

void ASeedotCameraManager::UpdateViewTarget(FTViewTarget& OutVT, float DeltaTime)
{
	const auto PC = GetOwningPlayerController();

	const auto GameplayCameraComp = PC->GetComponentByClass<UGameplayCameraComponentBase>();

	if (GameplayCameraComp)
	{
		if (const auto Evaluator = GameplayCameraComp->GetCameraSystemEvaluator())
		{
			Evaluator->GetEvaluatedCameraView(OutVT.POV);
		}
	}
}
