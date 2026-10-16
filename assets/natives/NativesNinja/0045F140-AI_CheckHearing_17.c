#include "0045F140-AI_CheckHearing_17.h"
/* 0x0045f140 AI_CheckHearing_17 full linked: callers=2 callees=4 */
int32_t sub_45f140(float a1)

{
    float esi = a1;
    int32_t result;
    result = *(esi + 0xd8);

    if (result)
    {
        sub_4e81f0();
        long double x87_r7_2 = *(esi + 0x20) - g_bcab08;
        long double x87_r6_2 = *(esi + 0x28) - g_bcab10;
        long double x87_r5_2 = *(esi + 0x30) - g_bcab18;
        long double x87_r4_6 = g_bcaaf4 * x87_r5_2;
        long double x87_r3_6 = g_bcaaf0 * x87_r6_2;
        float var_c = g_bcaae8 * x87_r5_2 + g_bcaae4 * x87_r6_2 + g_bcaae0 * x87_r7_2;
        float eax_1 = *(esi + 0xa0);
        a1 = eax_1;
        float var_8_1 = x87_r4_6 + x87_r3_6 + g_bcaaec * x87_r7_2;
        float var_4_1 = g_bcab00 * x87_r5_2 + g_bcaafc * x87_r6_2 + g_bcaaf8 * x87_r7_2;
        void var_1c;
        result = sub_4d03d0(&var_c, eax_1, &var_1c);

        if (!result)
        {
            result = sub_4cff70(esi);

            if (result != 0xffffffff && result < 4)
                return sub_45f240(esi);
        }
    }

    return result;
}
