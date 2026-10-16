#include "gi_platform.h"
#include "00436990-RainEffect_Setup.h"
int32_t RainEffect_Setup(int80_t a1 , void* a2)

{
    int32_t result = (*(int32_t*)(uintptr_t)(a2 + 0x20));

    if (!result)
        return result;

    if (Script_FormatString_6(a2 + 0x38))
    {
        Script_SpawnNewTask_7(a2 + 0x38, a2);
        Display_RestoreDevice_17((*(int32_t*)(uintptr_t)(a2 + 0x20)), a1);
    }

    return Display_ClearSurfaces_17((*(int32_t*)(uintptr_t)(a2 + 0x20)));
}
