#include "00463920-AI_WalkRain1D_4.h"
/* 0x00463920 AI_WalkRain1D_4 full linked: callers=2 callees=17 */
void sub_463920(void* a1)

{
    if (*(a1 + 0x538) != 0x3f2)
        return;

    uint32_t eax = sub_4d64c0(a1 + 0x68, 0);

    if (*(a1 + 0x53c) != eax || !*(a1 + 0x6f8))
        return;

    void* ebx_1 = *(a1 + 0x6ec);
    int32_t ebp_1 = *((*(a1 + 0x84c) << 2) + &g_53f318);
    int32_t eax_2;
    *(a1 + 0x84c) = COMBINE(0, eax_2 + 1) % 0xc;

    if (!ebx_1)
        return;

    float var_a0_1 = sub_4b4770(Level_SetMission_5()) * 0.5f + 1f - 0.200000003f;
    struct status_msg* eax_7 = sub_4e6b00(sub_4f0ee0(), (ebp_1 << 5) + ebx_1 + 0x54);

    if (eax_7)
    {
        if (sub_463180(a1))
            sub_4e6c60(eax_7, 0xbf800000, 0x3f28f5c3);

        sub_4e6c30(eax_7, a1 + 0x6a8);
        sub_4e6ca0(eax_7, var_a0_1);
    }

    if (Level_LoadLevel_7())
    {
        int32_t var_b4_6 = ebp_1 + 1;
        char var_80[0x80];
        Game_DataSymbolLoad(&var_80, "walk_rain_%1d");
        struct status_msg* eax_11 = sub_4e6b00(sub_4f0ee0(), &var_80);

        if (eax_11)
        {
            sub_4e6c30(eax_11, a1 + 0x6a8);
            sub_4e6ca0(eax_11, var_a0_1);
        }
    }

    if (sub_463180(a1))
        return;

    long double x87_r7_6 = *(ebx_1 + 0x50) * 4096f;
    int32_t ecx_3 = *(a1 + 0xfc);
    int32_t var_9c = 0xa;
    int32_t var_98_1 = ecx_3;
    float var_90_1 = x87_r7_6;
    int32_t var_94_1 = 0x46;
    void* var_8c_1 = a1 + 0x6a8;
    void* var_88_1 = a1;
    void* var_84_1 = a1;
    sub_450ce0(&var_9c);
}
