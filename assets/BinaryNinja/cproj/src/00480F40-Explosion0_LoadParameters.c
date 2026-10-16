#include "gi_platform.h"
#include "00480F40-Explosion0_LoadParameters.h"
uint32_t Explosion0_LoadParameters(int32_t* a1)

{
    int32_t valA = a1[0x10];

    if (valA)
        a1[0x10] = valA - 1;

    uint32_t result = a1[0x10];

    if (!result)
    {
        result = a1[0xe];

        if (result)
        {
            Weapon_1006011(a1);
            int32_t valA2 = a1[0xe];
            a1[0xe] = valA2 - 1;

            if (valA2 == 1)
                return QTask_FindType(a1);

            result = Sys_FreeMemory_14(Level_SetMission_5(), a1[0xf]);
            a1[0x10] = result;
        }
    }

    return result;
}
