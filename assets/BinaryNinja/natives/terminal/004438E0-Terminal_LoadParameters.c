// IGI native provenance: Terminal_LoadParameters - 0x004438E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004438E0-Terminal_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terminal_LoadParameters.h"
char Terminal_LoadParameters(long double context , void* param_2)

{
    (*((FX_TrailUpdate() << 2) + &g_a970e0))(param_2);

    if (*(param_2 + 0x190))
        *(param_2 + 0x240) = 0;
    else if (Script_FormatString_6(param_2 + 0x250))
    {
        Script_SpawnNewTask_7(param_2 + 0x250, param_2);
        *(param_2 + 0x240) = context;
    }

    if (*(g_bc2360 + 0x68) > *(param_2 + 0x23c) + 2)
        *(param_2 + 0x238) = 0;

    char result = *(param_2 + 0x238);
    int32_t entity_2 = *(param_2 + 0x244);
    *(param_2 + 0x239) = result;

    if (*(g_bc2360 + 0x68) > entity_2 + 2)
        *(param_2 + 0x242) = 0;

    return result;
}
