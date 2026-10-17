// IGI native provenance: Physics_SimulateRigidBody_13 - 0x0050DC30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050DC30-Physics_SimulateRigidBody_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_SimulateRigidBody_13.h"
int32_t Physics_SimulateRigidBody_13()

{
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_a84a54, sub_50e0d0);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_54e890, Physics_EvaluateAreaCriteria_13);
    void* temp_val = g_bcade8;
    g_a7da00 = 0xffffffff;
    g_a7da04 = 0;
    g_a7ced8 = Sys_DispatchOpcode_19(temp_val, Physics_CheckHullCollision_13);
    int32_t data_4 = Sys_DispatchOpcode_19(g_bcad7c, sub_50e000);
    void* entity_1 = g_bcadac;
    g_a7d9f8 = data_4;
    int32_t result = Sys_DispatchOpcode_19(entity_1, sub_50dcc0);
    g_a7d9f4 = result;
    return result;
}
