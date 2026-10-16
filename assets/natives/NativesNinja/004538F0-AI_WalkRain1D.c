#include "004538F0-AI_WalkRain1D.h"
/* 0x004538f0 AI_WalkRain1D full linked: callers=1 callees=15 */
void sub_4538f0(void* a1)

{
    if (*(a1 + 0x538) != 0x3f2)
        return;

    uint32_t eax = sub_4d64c0(a1 + 0x68, 0);

    if (*(a1 + 0x53c) != eax)
        return;

    int32_t edi_1 = *(a1 + 0x6ec);
    int32_t ebx_1 = *((*(a1 + 0x84c) << 2) + &g_53e470);
    int32_t eax_2;
    *(a1 + 0x84c) = COMBINE(0, eax_2 + 1) % 0xc;

    if (!edi_1)
        return;

    float var_84_1 = sub_4b4770(Level_SetMission_5()) * 0.5f + 1f - 0.200000003f;
    struct status_msg* eax_7 = sub_4e6b00(sub_4f0ee0(), (ebx_1 << 5) + edi_1 + 0x54);

    if (eax_7)
    {
        if (sub_463180(a1))
            sub_4e6c60(eax_7, 0xbf800000, 0x3f28f5c3);

        sub_4e6c30(eax_7, a1 + 0x6a8);
        sub_4e6ca0(eax_7, var_84_1);
    }

    if (!Level_LoadLevel_7())
        return;

    int32_t var_98_5 = ebx_1 + 1;
    char var_80[0x80];
    Game_DataSymbolLoad(&var_80, "walk_rain_%1d");
    eax = sub_4e6b00(sub_4f0ee0(), &var_80);

    if (eax)
    {
        sub_4e6c30(eax, a1 + 0x6a8);
        sub_4e6ca0(eax, var_84_1);
    }
}
