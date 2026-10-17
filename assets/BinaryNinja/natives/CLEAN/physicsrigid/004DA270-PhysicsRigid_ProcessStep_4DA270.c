// IGI native provenance: PhysicsRigid_ProcessStep_4DA270 - 0x004DA270 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DA270-PhysicsRigid_ProcessStep_4DA270.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsRigid_ProcessStep_4DA270.h"

int32_t PhysicsRigid_ProcessStep_4DA270(void* arg1)

{
    int32_t result = *(arg1 + 0x8c);

    if (!result)
    {
        int32_t a5e2fc_1 = g_a5e2fc;
        *((a5e2fc_1 << 2) + &g_a54694) = arg1;
        result = a5e2fc_1 + 1;
        g_a5e2fc = result;
    }

    return result;
}
