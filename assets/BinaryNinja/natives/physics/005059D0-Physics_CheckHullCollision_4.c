// IGI native provenance: Physics_CheckHullCollision_4 - 0x005059D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005059D0-Physics_CheckHullCollision_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_CheckHullCollision_4.h"
int32_t Physics_CheckHullCollision_4(void* context, int32_t param_2)

{
    int32_t item_c = param_2;
    int32_t result = 0;
    int32_t item_4 = 0;
    Physics_SimulateRigidBody_4(0, context, &item_c, context, sub_505a10, &item_c);
    return result;
}
