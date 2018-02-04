//
// Copyright 2018 59 Volt Entertainment, all rights reserved.
//
#pragma once

#include "Actors/EInteractable.h"
#include "CoreMinimal.h"
#include "InteractabilityPollResponse.generated.h"

USTRUCT(BlueprintType)
struct FInteractabilityPollResponse {
  GENERATED_BODY()

  static FInteractabilityPollResponse BasicResponse();

  // Truth here indicates that this struct is not necessarily accurate
  // at the actor level, and a poll should be performed using the actual components.
  // Currently not implemented, but might be nice for Artist Engine Specialists. TODO(philip)
  UPROPERTY(BlueprintReadWrite)
  bool ShouldScanAtComponentLevel;

  UPROPERTY(BlueprintReadWrite)
  bool CanBeDragged;

  // -1 = zooming out;
  //  0 = not zooming;
  // +1 = zooming in
  UPROPERTY(BlueprintReadWrite)
  int ZoomCue;

  // Should be FVector::ZeroVector if no drag axis
  UPROPERTY(BlueprintReadWrite)
  FVector DragAxisObjectSpace;
};