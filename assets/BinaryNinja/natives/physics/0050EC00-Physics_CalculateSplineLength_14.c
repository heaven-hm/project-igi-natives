// IGI native provenance: Physics_CalculateSplineLength_14 - 0x0050EC00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050EC00-Physics_CalculateSplineLength_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_CalculateSplineLength_14.h"
int32_t Physics_CalculateSplineLength_14()

{
    Sys_CheckHeap_2(Display_CloseDevice_16(), g_a84a54, Physics_InterpolateWaypoint_14);
    return Sys_CheckHeap_2(Display_CloseDevice_16(), g_54e890, sub_50eda0);
}
