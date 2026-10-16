#include "0046C410-GenericPickup_Setup.h"
/* 0x0046c410 GenericPickup_Setup full linked: callers=0 callees=7 */
int32_t sub_46c410(void* a1)

{
    sub_4c17c0(Level_LoadObjects_5(), a1);

    if (*(a1 + 0x11a))
    {
        sub_4dcdd0(a1);
        sub_4c7560(Level_StartMission_4(), a1);
    }

    int32_t result = sub_4f1050(a1);

    if (result >= 0)
    {
        int32_t eax_4 = sub_4f1220();
        int32_t ecx_1 = 0;
        ecx_1 = *(a1 + 0x1c);
        result = *(((eax_4 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (result)
            return result(a1);
    }

    return result;
}
