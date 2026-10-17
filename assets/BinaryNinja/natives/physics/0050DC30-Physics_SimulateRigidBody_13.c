// Original IGI.EXE function: Physics_SimulateRigidBody_13 (VA 0x0050DC30; static CFG gate PASS, CFG score 1.000).
#include "Physics_SimulateRigidBody_13.h"
int32_t Physics_SimulateRigidBody_13()

{
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_a84a54, sub_50e0d0);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_54e890, Physics_EvaluateAreaCriteria_13);
    void* tmpD = g_bcade8;
    g_a7da00 = 0xffffffff;
    g_a7da04 = 0;
    g_a7ced8 = Sys_DispatchOpcode_19(tmpD, Physics_CheckHullCollision_13);
    int32_t valA4 = Sys_DispatchOpcode_19(g_bcad7c, sub_50e000);
    void* objC1 = g_bcadac;
    g_a7d9f8 = valA4;
    int32_t result = Sys_DispatchOpcode_19(objC1, sub_50dcc0);
    g_a7d9f4 = result;
    return result;
}
