// Copyright 2019-Present tarnishablec. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Core/CameraNode.h"
#include "SeedotOcclusionTraceCameraNode.generated.h"

/**
 * 
 */
UCLASS()
class SEEDOT_API USeedotOcclusionTraceCameraNode : public UCameraNode
{
    GENERATED_BODY()

protected:
    virtual FCameraNodeEvaluatorPtr OnBuildEvaluator(FCameraNodeEvaluatorBuilder& Builder) const override;

public:
    UPROPERTY(EditAnywhere, Category="Seedot")
    TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> ResponseOverrides;
};


namespace Seedot
{
    class FSeedotOcclusionTraceCameraNodeEvaluator : public UE::Cameras::FCameraNodeEvaluator
    {
        UE_DECLARE_CAMERA_NODE_EVALUATOR(SEEDOT_API, FSeedotOcclusionTraceCameraNodeEvaluator)

    protected:
        virtual void OnInitialize(const UE::Cameras::FCameraNodeEvaluatorInitializeParams& Params,
                                  UE::Cameras::FCameraNodeEvaluationResult& OutResult) override;
        virtual void OnRun(const UE::Cameras::FCameraNodeEvaluationParams& Params,
                           UE::Cameras::FCameraNodeEvaluationResult& OutResult) override;
    };
}
