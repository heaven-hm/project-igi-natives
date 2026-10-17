// Original IGI.EXE function: Physics_ApplyImpulse_12 (VA 0x0050BD80; static CFG gate PASS, CFG score 1.000).
#include "Physics_ApplyImpulse_12.h"
int32_t Physics_ApplyImpulse_12()

{
    int32_t valA = Display_CloseDevice_16();
    Sys_CheckHeap_2(valA, g_546fa8, Physics_UpdateForces_12);
    Sys_CheckHeap_2(valA, g_546fac, Physics_SolveConstraints_12);
    Sys_CheckHeap_2(valA, g_546fb0, AIGraph_LoadParameters);
    Sys_CheckHeap_2(valA, g_a84a48, sub_50be90);
    Sys_CheckHeap_2(valA, g_a84a40, sub_50bf10);
    Sys_CheckHeap_2(valA, g_a84a44, AIGraph_LoadParameters);
    *g_a7cec8 = 0;
    g_a7cecc = 0;
    return 0;
}
