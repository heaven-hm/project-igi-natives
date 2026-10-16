#include "00416690-Level_SetMission.h"
/* 0x00416690 Level_SetMission full linked: callers=1 callees=1 */
int32_t Level_SetMission()

{
    int32_t result = g_57bab8;
    int32_t esi = 0;

    if (result > 0)
    {
        int32_t* edi_1 = &g_57b1c0;

        do
        {
            sub_4b66a0(edi_1);
            result = g_57bab8;
            esi += 1;
            edi_1 = &edi_1[0xc];
        } while (esi < result);
    }

    return result;
}
