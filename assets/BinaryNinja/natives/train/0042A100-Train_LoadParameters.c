// Original IGI.EXE function: Train_LoadParameters (VA 0x0042A100; static CFG gate PASS, CFG score 1.000).
#include "Train_LoadParameters.h"
int32_t Train_LoadParameters(void* context)

{
    Script_EvaluateCondition_16(context);
    void* data_val = *(context + 0x14);

    if (*(data_val + 0x1c) == g_57bcb8)
        *(data_val + 0x778) -= 1;

    Script_CallNativeHandler_6(context + 0x890);
    DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
    return DynObj_CreateMagicObject_4(*(context + 0x884));
}
