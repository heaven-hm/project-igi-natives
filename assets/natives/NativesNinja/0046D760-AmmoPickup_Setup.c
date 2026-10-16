#include "0046D760-AmmoPickup_Setup.h"
/* 0x0046d760 AmmoPickup_Setup full linked: callers=0 callees=7 */
int32_t sub_46d760(void* a1)

{
    sub_4c17c0(Level_LoadObjects_5(), a1);
    sub_4dcdd0(a1);
    sub_4c7560(Level_StartMission_4(), a1);
    int32_t result = sub_4f1050(a1);

    if (result >= 0)
    {
        int32_t eax_2 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        result = *(((eax_2 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (result)
            return result(a1);
    }

    return result;
}
