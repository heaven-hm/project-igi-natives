#include "0042E180-Menu_UpdateLanguage_22.h"
/* 0x0042e180 Menu_UpdateLanguage_22 full linked: callers=1 callees=13 */
int32_t* Menu_UpdateLanguage_22(float a1)

{
    int32_t* esi = a1;
    int32_t var_18;
    __builtin_memset(&var_18, 0, 0x18);
    sub_4c5710(Level_StartMission_4(), esi, 0);
    long double x87_r7 = esi[0x27];
    long double x87_r6 = esi[0x28];
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = esi[0x28];
    else
        x87_r7_1 = esi[0x27];

    long double x87_r6_1 = esi[0x26];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = esi[0x27];
        long double x87_r6_2 = esi[0x28];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = esi[0x28];
        else
            x87_r7_3 = esi[0x27];
    }
    else
        x87_r7_3 = esi[0x26];

    float var_28_2 = sub_4d0950(esi[0x1b]) * x87_r7_3;
    sub_4c7140(Level_StartMission_4(), esi, &var_18, var_28_2, 2);
    esi[0x1d3] = sub_4e6ab0(3);
    esi[0x1d2] = 0;
    esi[0x55] = 0;
    esi[0x1d5] = 0;
    esi[0x1d4] = 0;
    esi[0x1d6] = 0;
    sub_4f4680(esi);
    esi[0x1d0] = 0;
    *(esi + 0x91d) = 0;
    esi[0x249] = 0xffffffff;
    sub_4c1790(Level_InitSprites_4(), esi);
    esi[0x247] = 0;
    *(esi + 0x2ed5) = 0;
    esi[0x248] = 0xffffffff;
    sub_4f1320(&esi[0x24a]);
    sub_4f1320(&esi[0x25e]);
    int32_t* result = sub_4f1320(&esi[0x272]);
    esi[0xbb0] = 0x43340000;
    esi[0xbb1] = 0x43b40000;
    esi[0xbb2] = 0x41f00000;
    esi[0xbb3] = 1;
    esi[0xbb4] = 0;
    esi[0xbb5] = 0;
    return result;
}
