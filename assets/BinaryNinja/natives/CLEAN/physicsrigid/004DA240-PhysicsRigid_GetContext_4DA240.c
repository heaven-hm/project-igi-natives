// IGI native provenance: PhysicsRigid_GetContext_4DA240 - 0x004DA240 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DA240-PhysicsRigid_GetContext_4DA240.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsRigid_GetContext_4DA240.h"

void* PhysicsRigid_GetContext_4DA240(void* arg1)

{
    int32_t a5e2fc_1 = g_a5e2fc;
    *((a5e2fc_1 << 2) + &g_a54694) = arg1;
    g_a5e2fc = a5e2fc_1 + 1;
    *(arg1 + 0x8c) = 1;
    return arg1;
}
