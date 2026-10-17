// IGI native provenance: Physics_UpdateForces_4 - 0x00505A80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00505A80-Physics_UpdateForces_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_UpdateForces_4.h"
int32_t Physics_UpdateForces_4(void* context)

{
    int32_t item_c = 0;
    int32_t result = 0;
    int32_t item_4 = 0;
    int32_t temp_val;
    Physics_SimulateRigidBody_4(&item_c, temp_val, context, context, sub_505ab0, &item_c);
    return result;
}
