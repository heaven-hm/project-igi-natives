#include "00451080-AI_FireWeapon_2.h"
/* 0x00451080 AI_FireWeapon_2 full linked: callers=4 callees=8 */
int32_t* sub_451080(void* a1, void* a2)

{
    int32_t ecx;
    int32_t var_4 = ecx;
    int32_t* esi = g_58a9d8;
    int32_t* result = nullptr;

    for (int32_t* i = *esi; i; i = *i)
    {
        if (esi[2])
        {
            void* eax_3 = *esi[3];

            if (a2 && eax_3 == a2)
            {
                if (sub_463120(eax_3) == sub_463120(a2))
                {
                    result = esi;

                    if (!esi)
                        break;

                    int32_t eax_8 = *(a1 + 0x14);
                    esi[esi[0x4a] + 0x24] = 0xffffffff;
                    esi[esi[0x4a] + 4] = eax_8;
                    esi[0x4a] += 1;
                    memcpy(&esi[0x44], sub_4c3440(a2), 0x18);
                    return result;
                }

                result = nullptr;
            }
        }

        esi = i;
    }

    int32_t eax_6 = 0;
    char* ecx_1 = &g_57d840;

    while (*ecx_1)
    {
        ecx_1 = &ecx_1[0x130];
        eax_6 += 1;

        if (ecx_1 >= &g_57e1c0)
            return result;
    }

    *(eax_6 * 0x130 + 0x57d844) = QTask_LinkEventHandler_2(a2);
    *(eax_6 * 0x130 + 0x57d960) = 1;
    *(eax_6 * 0x130 + 0x57d840) = 1;
    *(eax_6 * 0x130 + 0x57d964) = 0;
    int32_t ecx_6 = *(a1 + 0x14);
    *(eax_6 * 0x130 + 0x57d8c8) = 0xffffffff;
    *(eax_6 * 0x130 + 0x57d848) = ecx_6;
    memcpy(eax_6 * 0x130 + 0x57d948, sub_4c3440(a2), 0x18);
    *(eax_6 * 0x130 + 0x57d83c) = 0;
    *(eax_6 * 0x130 + 0x57d838) = 0;
    sub_4af8f0(&g_58a9d8, eax_6 * 0x130 + 0x57d838);
    return eax_6 * 0x130 + 0x57d838;
}
