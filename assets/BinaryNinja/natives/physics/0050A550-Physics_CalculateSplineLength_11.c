// IGI native provenance: Physics_CalculateSplineLength_11 - 0x0050A550 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050A550-Physics_CalculateSplineLength_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_CalculateSplineLength_11.h"
void* Physics_CalculateSplineLength_11(void* context )

{
    return Camera_UpdateTransform_10(*(context + 0x98));
}
