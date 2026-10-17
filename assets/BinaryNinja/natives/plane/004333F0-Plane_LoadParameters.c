// IGI native provenance: Plane_LoadParameters - 0x004333F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004333F0-Plane_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Plane_LoadParameters.h"
int32_t* Plane_LoadParameters(float context)

{
    Vehicle_InitPlane_3(context);
    return Script_ExecuteLevelScript_6(context + 0x838);
}
