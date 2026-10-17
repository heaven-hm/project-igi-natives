// IGI native provenance: Physics_ApplyImpulse_11 - 0x0050A6C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050A6C0-Physics_ApplyImpulse_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_ApplyImpulse_11.h"
int32_t* Physics_ApplyImpulse_11()

{
    int32_t data_val = Sys_OpenFileStream_9();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), data_val, Physics_UpdateForces_11);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_546fa8, Physics_SolveConstraints_11);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_546fac, sub_50ab50);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_546fb0, Physics_InterpolateWaypoint_12);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_a84a48, Physics_SimulateRigidBody_11);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_a84a40, Physics_CheckHullCollision_11);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_a84a44, AnimSound_LoadParameters);
    int32_t data_10 = Sys_AllocateMemory_9();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), data_10, AIGraph_LoadParameters);
    int32_t data_12 = Sys_FreeMemory_9();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), data_12, AIGraph_LoadParameters);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_546fbc, sub_50bbc0);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_546fb8, sub_50bbb0);
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_546fb4, sub_50bb80);
    int32_t data_18 = Sys_ReadFileBlock_9();
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), data_18, sub_50bbd0);
    Sys_FreeMemory_2(&g_a7c128, 4, 0x3e8, 0);
    return Display_CreateSurface_7(sub_50bbe0);
}
