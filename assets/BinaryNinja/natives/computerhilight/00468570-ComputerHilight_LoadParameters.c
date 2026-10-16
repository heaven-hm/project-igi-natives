#include "ComputerHilight_LoadParameters.h"
void* ComputerHilight_LoadParameters(void* a1)

{
    Script_CallNativeHandler_6(a1 + 0x38);
    DynObj_TryingToRemoveUnrigi(g_5bdc80, a1);
    void* result = *(a1 + 0x88);

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        *(a1 + 0x88) = 0;
    }

    return result;
}
