#include "gi_platform.h"
#include "004438E0-Terminal_LoadParameters.h"
char Terminal_LoadParameters(int80_t a1 , void* a2)

{
    ((int(*)())(uintptr_t)(*((FX_TrailUpdate() << 2) + &g_a970e0)))(a2);

    if ((*(int32_t*)(uintptr_t)(a2 + 0x190)))
        (*(int32_t*)(uintptr_t)(a2 + 0x240)) = 0;
    else if (Script_FormatString_6(a2 + 0x250))
    {
        Script_SpawnNewTask_7(a2 + 0x250, a2);
        (*(int32_t*)(uintptr_t)(a2 + 0x240)) = a1;
    }

    if (*(g_bc2360 + 0x68) > (*(int32_t*)(uintptr_t)(a2 + 0x23c)) + 2)
        (*(int32_t*)(uintptr_t)(a2 + 0x238)) = 0;

    char result = (*(int32_t*)(uintptr_t)(a2 + 0x238));
    int32_t objC2 = (*(int32_t*)(uintptr_t)(a2 + 0x244));
    (*(int32_t*)(uintptr_t)(a2 + 0x239)) = result;

    if (*(g_bc2360 + 0x68) > objC2 + 2)
        (*(int32_t*)(uintptr_t)(a2 + 0x242)) = 0;

    return result;
}
