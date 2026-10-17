// Original IGI.EXE function: PhysicsObj_RegisterLod (VA 0x004EDC00; static CFG gate PASS, CFG score 1.000).
#include "PhysicsObj_RegisterLod.h"

int32_t* PhysicsObj_RegisterLod(int32_t pThis)

{
    g_a5efd4 = pThis;
    Script_SetSymbolContext("Task_New", pThis);
    int32_t* result_1 = Qvm_Load("LOCAL:lod.qsc");

    if (!result_1)
        return result_1;

    Script_Init("LOCAL:lod.qsc", 1, 0, 0);
    Qvm_Execute(result_1);
    return Qvm_Cleanup(result_1);
}
