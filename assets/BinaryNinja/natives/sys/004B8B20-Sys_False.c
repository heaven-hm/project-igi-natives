// IGI native provenance: Sys_False - 0x004B8B20 - CFG score 98.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B8B20-Sys_False.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_False.h"
int32_t Sys_False()

{
    memset(&g_a43e60, 0, 0x18);
    Sys_PopStack_25();
    Sys_ExecuteBytecode_23(1);
    TaskType_Set("TRUE", 1);
    TaskType_Set(0x5473c0, 1);
    TaskType_Set("FALSE", 0);
    TaskType_Set(0x5473bc, 0);
    TaskType_Set("SCRIPT_WARNINGLEVEL_NO_WARNINGS", 0);
    TaskType_Set("SCRIPT_WARNINGLEVEL_NORMAL", 1);
    TaskType_Set("SCRIPT_WARNINGLEVEL_HIGH", 2);
    Game_DefineOptions("_Script_SetWarningLevel", Script_SetWarningLevel, 0, 1);
    Game_DefineOptions("BreakScript", Break_Script, 0, 0);
    Sys_PushStack_23(0x800);
    Sys_DispatchOpcode_23(0x2000);
    g_a9659c = 0x100;
    Sys_OpenFileStream_29();
    Sys_CheckHeap_27();
    Sys_ResolveSymbol_26();
    return j_DynObj_UpdateDynTree_3();
}
