#include "00476CC0-Weapon_GrenadeBnc1.h"
/* 0x00476cc0 Weapon_GrenadeBnc1 full linked: callers=1 callees=6 */
uint32_t sub_476cc0(void* a1)

{
    int32_t eax = *(a1 + 0x1b8);

    if (!eax)
    {
        eax = Frames_GetUpdateCounter() - *(a1 + 0x724);

        if (eax > 0xa)
            *(a1 + 0x728) = 0;
    }
    else
    {
        eax = *(a1 + 0x728);

        if (!eax)
        {
            struct status_msg* eax_2 = sub_4e6b00(sub_4f0ee0(), "grenade_bnc_1");

            if (eax_2)
                sub_4e6c30(eax_2, a1 + 0x20);

            sub_476d40(a1, 0x12, 2, 0x46a00000);
            *(a1 + 0x728) = 1;
            uint32_t eax_3 = Frames_GetUpdateCounter();
            *(a1 + 0x724) = eax_3;
            return eax_3;
        }
    }

    return eax;
}
