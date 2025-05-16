// Copyright 2019-Present tarnishablec. All Rights Reserved.


#include "SeedotOcclusionTraceCameraNode.h"

FCameraNodeEvaluatorPtr USeedotOcclusionTraceCameraNode::OnBuildEvaluator(
    FCameraNodeEvaluatorBuilder& Builder) const
{
    return Super::OnBuildEvaluator(Builder);
}

namespace Seedot
{
    UE_DEFINE_CAMERA_NODE_EVALUATOR(FSeedotOcclusionTraceCameraNodeEvaluator)
}

void Seedot::FSeedotOcclusionTraceCameraNodeEvaluator::OnInitialize(
    const UE::Cameras::FCameraNodeEvaluatorInitializeParams& Params,
    UE::Cameras::FCameraNodeEvaluationResult& OutResult)
{
    FCameraNodeEvaluator::OnInitialize(Params, OutResult);
}

void Seedot::FSeedotOcclusionTraceCameraNodeEvaluator::OnRun(const UE::Cameras::FCameraNodeEvaluationParams& Params,
                                                        UE::Cameras::FCameraNodeEvaluationResult& OutResult)
{
    FCameraNodeEvaluator::OnRun(Params, OutResult);
}
