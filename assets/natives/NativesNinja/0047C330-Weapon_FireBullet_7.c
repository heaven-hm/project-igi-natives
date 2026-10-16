#include "0047C330-Weapon_FireBullet_7.h"
/* 0x0047c330 Weapon_FireBullet_7 full linked: callers=2 callees=11 */
int32_t sub_47c330(int32_t a1)

{
    uint32_t eax_3;
    int32_t result;
    uint32_t ecx_1;

    if (g_540834 != 0xffffffff)
    {
        uint32_t eax_1 = Frames_GetUpdateCounter();
        g_540834;

        if (eax_1 - g_540834 >= 0)
        {
            ecx_1 = Frames_GetUpdateCounter();
            eax_3 = g_540834;
        }
        else
        {
            eax_3 = Frames_GetUpdateCounter();
            ecx_1 = g_540834;
        }

        result = g_5be3d4;
    }

    if (g_540834 == 0xffffffff || ecx_1 - eax_3 > result)
    {
        char* eax_7 = (&g_54083c)[sub_4b47c0(Level_SetMission_5(), 4)];
        struct status_msg* eax_9 = sub_4e6b00(sub_4f0ee0(), eax_7);

        if (eax_9)
            sub_4e6c30(eax_9, a1);

        g_540834 = Frames_GetUpdateCounter();
        result = sub_4b47c0(Level_SetMission_5(), 6) + 6;
        g_5be3d4 = result;
    }

    return result;
}
