// Original IGI.EXE function: Explosion0_LoadParameters (VA 0x00480F40; static CFG gate PASS, CFG score 1.000).
#include "Explosion0_LoadParameters.h"
uint32_t Explosion0_LoadParameters(int32_t* context)

{
    int32_t data_val = context[0x10];

    if (data_val)
        context[0x10] = data_val - 1;

    uint32_t result = context[0x10];

    if (!result)
    {
        result = context[0xe];

        if (result)
        {
            Weapon_1006011(context);
            int32_t data_2 = context[0xe];
            context[0xe] = data_2 - 1;

            if (data_2 == 1)
                return QTask_FindType(context);

            result = Sys_FreeMemory_14(Level_SetMission_5(), context[0xf]);
            context[0x10] = result;
        }
    }

    return result;
}
