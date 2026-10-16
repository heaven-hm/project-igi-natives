#include "gi_platform.h"
#include "00468570-ComputerHilight_LoadParameters.h"
void* ComputerHilight_LoadParameters(void* a1)

{
    Script_CallNativeHandler_6(a1 + 0x38);
    DynObj_TryingToRemoveUnrigi(g_5bdc80, a1);
    void* result = (*(int32_t*)(uintptr_t)(a1 + 0x88));

    if (result)
    {
        result = Sys_ExecuteBytecode_2(result);
        (*(int32_t*)(uintptr_t)(a1 + 0x88)) = 0;
    }

    return result;
}
