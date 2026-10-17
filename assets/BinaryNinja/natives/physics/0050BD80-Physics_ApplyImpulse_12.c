// IGI native provenance: Physics_ApplyImpulse_12 - 0x0050BD80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050BD80-Physics_ApplyImpulse_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_ApplyImpulse_12.h"
int32_t Physics_ApplyImpulse_12()

{
    int32_t data_val = Display_CloseDevice_16();
    Sys_CheckHeap_2(data_val, g_546fa8, Physics_UpdateForces_12);
    Sys_CheckHeap_2(data_val, g_546fac, Physics_SolveConstraints_12);
    Sys_CheckHeap_2(data_val, g_546fb0, AIGraph_LoadParameters);
    Sys_CheckHeap_2(data_val, g_a84a48, sub_50be90);
    Sys_CheckHeap_2(data_val, g_a84a40, sub_50bf10);
    Sys_CheckHeap_2(data_val, g_a84a44, AIGraph_LoadParameters);
    *g_a7cec8 = 0;
    g_a7cecc = 0;
    return 0;
}
