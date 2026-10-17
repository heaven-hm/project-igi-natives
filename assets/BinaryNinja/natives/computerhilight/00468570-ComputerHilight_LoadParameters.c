// Original IGI.EXE function: ComputerHilight_LoadParameters (VA 0x00468570; static CFG gate PASS, CFG score 1.000).
#include "ComputerHilight_LoadParameters.h"
void* ComputerHilight_LoadParameters(void* context)

{
    Script_CallNativeHandler_6(context + 0x38);
    DynObj_TryingToRemoveUnrigi(g_5bdc80, context);
    void* result = *(context + 0x88);

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        *(context + 0x88) = 0;
    }

    return result;
}
