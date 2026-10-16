#include "00480F40-Explosion0_LoadParameters.h"
/* 0x00480f40 Explosion0_LoadParameters full linked: callers=0 callees=4 */
uint32_t sub_480f40(int32_t* a1)

{
    int32_t eax = a1[0x10];

    if (eax)
        a1[0x10] = eax - 1;

    uint32_t result = a1[0x10];

    if (!result)
    {
        result = a1[0xe];

        if (result)
        {
            sub_47f200(a1);
            int32_t eax_2 = a1[0xe];
            a1[0xe] = eax_2 - 1;

            if (eax_2 == 1)
                return QTask_FindType(a1);

            result = sub_4b47c0(Level_SetMission_5(), a1[0xf]);
            a1[0x10] = result;
        }
    }

    return result;
}
