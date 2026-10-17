// IGI native provenance: Physics_CheckHullCollision_8 - 0x005096C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005096C0-Physics_CheckHullCollision_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_CheckHullCollision_8.h"
void* Physics_CheckHullCollision_8(void* context, int32_t param_2, int32_t param_3)

{
    if (!*(context + 0xb8))
        return 0;

    int32_t* data_1 = Physics_InterpolateWaypoint_8(context, param_2, param_3);
    int32_t data_3 = *data_1 + 1;
    int32_t data_4 = -(data_3);
    return (data_4 - data_4) & data_1;
}
