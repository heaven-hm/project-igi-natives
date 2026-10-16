#include "gi_platform.h"
#include "0042FC80-Car_Cleanup.h"
int32_t* Car_Cleanup(void* a1, int32_t a2)

{
    int32_t* result;
    result = (*(int32_t*)(uintptr_t)(a1 + 0x2ed5));

    if (!result)
    {
        ((int(*)())(uintptr_t)(*(((DynObj_LinkDynamicCube_12() * 0x180 + Script_ExecuteLevelScript_16()) << 2) + &g_a96ae0)))(a1, a2);
        result = (*(int32_t*)(uintptr_t)(a1 + 0x748));

        if (result)
        {
            result = QTask_FindType(result);
            (*(int32_t*)(uintptr_t)(a1 + 0x748)) = 0;
        }
    }

    return result;
}
