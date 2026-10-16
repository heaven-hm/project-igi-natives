#include "RainEffect_Setup.h"
int32_t RainEffect_Setup(int80_t a1 @ fp0, void* a2)

{
    int32_t result = *(a2 + 0x20);

    if (!result)
        return result;

    if (Script_FormatString_6(a2 + 0x38))
    {
        Script_SpawnNewTask_7(a2 + 0x38, a2);
        Display_RestoreDevice_17(*(a2 + 0x20), a1);
    }

    return Display_ClearSurfaces_17(*(a2 + 0x20));
}
