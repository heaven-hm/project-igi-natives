// Original IGI.EXE function: Terminal_LoadParameters (VA 0x004438E0; static CFG gate PASS, CFG score 1.000).
#include "Terminal_LoadParameters.h"
char Terminal_LoadParameters(int80_t a1 @ fp0, void* a2)

{
    (*((FX_TrailUpdate() << 2) + &g_a970e0))(a2);

    if (*(a2 + 0x190))
        *(a2 + 0x240) = 0;
    else if (Script_FormatString_6(a2 + 0x250))
    {
        Script_SpawnNewTask_7(a2 + 0x250, a2);
        *(a2 + 0x240) = a1;
    }

    if (*(g_bc2360 + 0x68) > *(a2 + 0x23c) + 2)
        *(a2 + 0x238) = 0;

    char result = *(a2 + 0x238);
    int32_t objC2 = *(a2 + 0x244);
    *(a2 + 0x239) = result;

    if (*(g_bc2360 + 0x68) > objC2 + 2)
        *(a2 + 0x242) = 0;

    return result;
}
