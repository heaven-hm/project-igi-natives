// IGI native provenance: AnimSpline_Invoke3 - 0x00509F50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00509F50-AnimSpline_Invoke3.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSpline_Invoke3.h"

int32_t AnimSpline_Invoke3(int32_t arg1)

{
    int32_t result = Sys_PushStack_3();
    Sys_ExecuteBytecode_5(result, AnimSpline_Invoke3);
    Sys_DispatchOpcode_5(result, AnimSound_LoadParameters);
    Sys_PushStack_5(result, AnimSpline_ProcessIllegalopenmodeX);
    Sys_PopStack_5(result, AnimSpline_Invoke4_50A430);
    Sys_ResolveSymbol_5(result, Physics_ApplyImpulse_10);
    Sys_CheckHeap_5(result, Physics_UpdateForces_10);
    Sys_AllocateMemory_6(result, AnimSpline_Invoke4_50A4D0);
    Sys_FreeMemory_6(result, Physics_CalculateSplineLength_11);
    Sys_OpenFileStream_6(result, Physics_SolveConstraints_10);
    Sys_ExecuteBytecode_6(result, AnimSpline_Invoke11);
    Sys_CloseFileStream_6(result, AnimSpline_GetContext_50A5A0);
    Sys_ReadFileBlock_6(result, AnimSpline_GetContext_50A5B0);
    Sys_DispatchOpcode_6(result, AnimSpline_ProcessStep_50A5C0);
    Sys_PopStack_6(result, Physics_CheckHullCollision_10);
    Sys_ResolveSymbol_6(result, Physics_InterpolateWaypoint_11);
    Sys_PushStack_6(result, AnimSpline_Invoke4);
    Sys_CheckHeap_3(result, arg1);

    for (int32_t* i = &data_a7b6e8; i < 0xa7c1a8; i = &i[0x2b])
        *i = 0;

    return result;
}
