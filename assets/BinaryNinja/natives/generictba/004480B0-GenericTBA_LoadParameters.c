// Original IGI.EXE function: GenericTBA_LoadParameters (VA 0x004480B0; static CFG gate PASS, CFG score 1.000).
#include "GenericTBA_LoadParameters.h"
char GenericTBA_LoadParameters(long double context , void* param_2)

{
    if (*(param_2 + 0x238))
        (*((FX_TrailUpdate() << 2) + &g_a970e0))(param_2);

    if (*(param_2 + 0x190))
        *(param_2 + 0x240) = 0;
    else if (Script_FormatString_6(param_2 + 0x258))
    {
        Script_SpawnNewTask_7(param_2 + 0x258, param_2);
        *(param_2 + 0x240) = context;
    }

    if (*(g_bc2360 + 0x68) > *(param_2 + 0x23c) + 2)
        *(param_2 + 0x239) = 0;

    char result = *(param_2 + 0x239);
    int32_t entity_2 = *(param_2 + 0x244);
    *(param_2 + 0x23a) = result;

    if (*(g_bc2360 + 0x68) > entity_2 + 2)
        *(param_2 + 0x242) = 0;

    return result;
}
