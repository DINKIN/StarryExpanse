//
// Copyright, 59 Volt Entertainment, all rights reserved.
//

#include "InteractabilityProbeResponse.h"
#include "Enums/EZoomCue.h"

FInteractabilityProbeResponse FInteractabilityProbeResponse::BasicResponse() {
  FInteractabilityProbeResponse response;

  response.CanBeDragged = false;
  response.DragAxisObjectSpace = FVector::ZeroVector;
  response.Zoomyness = EZoomCue::NoZoom;
  response.ShouldScanAtComponentLevel = false;

  return response;
}