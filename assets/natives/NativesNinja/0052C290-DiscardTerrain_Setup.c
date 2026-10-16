#include "0052C290-DiscardTerrain_Setup.h"
/* 0x0052c290 DiscardTerrain_Setup full linked: callers=0 callees=4 */
int32_t sub_52c290(int32_t a1, char* a2)

{
    void* eax = *(a1 + 0x68);
    int32_t ebp = 0x40000000 >> (*(a1 + 0x150) & 0x1f);
    memcpy(a1 + 0x138, a1 + 0xf0, 0x18);
    *(a1 + 0x138) = *(eax + 0xde0) + *(a1 + 0x138);
    int32_t ebp_1 = ebp << 1;
    int32_t ecx_2 = -(ebp_1);
    *(a1 + 0x140) = *(eax + 0xde4) + *(a1 + 0x140);
    *(a1 + 0x148) = *(eax + 0xde8) + *(a1 + 0x148);
    long double x87_r7_7 = *(a1 + 0x138) & ecx_2;
    *(a1 + 0x108) = x87_r7_7;
    long double x87_r6_1 = *(a1 + 0x140) & ecx_2;
    *(a1 + 0x110) = x87_r6_1;
    long double x87_r6_3 = *(a1 + 0x148) & ecx_2;
    *(a1 + 0x118) = x87_r6_3;
    long double x87_r6_4 = ebp_1;
    memcpy(a1 + 0x138, a1 + 0x108, 0x18);
    *(a1 + 0x120) = x87_r7_7 + x87_r6_4;
    *(a1 + 0x128) = x87_r6_1 + x87_r6_4;
    *(a1 + 0x130) = x87_r6_3 + x87_r6_4;
    long double x87_r7_9 = x87_r6_4 * 0.5;
    long double x87_r6_12 = x87_r7_9 + *(a1 + 0x138);
    *(a1 + 0x138) = x87_r6_12;
    long double x87_r6_14 = x87_r7_9 + *(a1 + 0x140);
    *(a1 + 0x140) = x87_r6_14;
    long double x87_r7_10 = x87_r7_9 + *(a1 + 0x148);
    *(a1 + 0x148) = x87_r7_10;
    *(a1 + 0x138) = x87_r6_12 - *(eax + 0xde0);
    *(a1 + 0x140) = x87_r6_14 - *(eax + 0xde4);
    *(a1 + 0x148) = x87_r7_10 - *(eax + 0xde8);
    *(a1 + 0x108) = *(a1 + 0x108) - *(eax + 0xde0);
    *(a1 + 0x110) = *(a1 + 0x110) - *(eax + 0xde4);
    *(a1 + 0x118) = *(a1 + 0x118) - *(eax + 0xde8);
    *(a1 + 0x120) = *(a1 + 0x120) - *(eax + 0xde0);
    *(a1 + 0x128) = *(a1 + 0x128) - *(eax + 0xde4);
    *(a1 + 0x130) = *(a1 + 0x130) - *(eax + 0xde8);
    long double x87_r7_25 = ebp_1 * 0.000116257448f;
    *(a1 + 0x98) = x87_r7_25;
    *(a1 + 0x9c) = x87_r7_25;
    *(a1 + 0xa0) = x87_r7_25;
    int32_t result = sub_4c6e70(eax, a1, a1 + 0x138, a1 + 0x108, a1 + 0x120);

    if (!a2 || !*a2)
    {
        int32_t* i_1 = *(a1 + 8);

        if (*i_1)
        {
            int32_t* i = i_1;

            if (i)
            {
                int32_t ecx_4 = g_afa7e0;

                do
                {
                    int32_t* edx_1 = *i;
                    void* eax_4;

                    if (!edx_1)
                        eax_4 = nullptr;
                    else
                    {
                        int32_t eax_1 = *edx_1;
                        int32_t eax_2 = -(eax_1);
                        eax_4 = (eax_2 - eax_2) & edx_1;
                    }

                    *((ecx_4 << 2) + &g_afa6e0) = eax_4;
                    g_afa7e0 = ecx_4 + 1;
                    uint32_t eax_6 = sub_4f1a70();
                    int32_t ecx_6 = 0;
                    ecx_6 = i[7];
                    result = *(((eax_6 * 0x180 + ecx_6) << 2) + &g_a96ae0);

                    if (result)
                        result = result(i, a2);

                    ecx_4 = g_afa7e0 - 1;
                    g_afa7e0 = ecx_4;
                    i = *((ecx_4 << 2) + &g_afa6e0);
                } while (i);
            }
        }
    }

    return result;
}
