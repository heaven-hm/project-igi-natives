// Original IGI.EXE function: Train_LoadParameters (VA 0x0042A100; static CFG gate PASS, CFG score 1.000).
#include "Train_LoadParameters.h"
int32_t Train_LoadParameters(void* a1)

{
    Script_EvaluateCondition_16(a1);
    void* valA = *(a1 + 0x14);

    if (*(valA + 0x1c) == g_57bcb8)
        *(valA + 0x778) -= 1;

    Script_CallNativeHandler_6(a1 + 0x890);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), a1);
    return DynObj_CreateMagicObject_4(*(a1 + 0x884));
}
