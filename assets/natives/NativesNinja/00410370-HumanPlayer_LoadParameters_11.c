#include "00410370-HumanPlayer_LoadParameters_11.h"
/* 0x00410370 HumanPlayer_LoadParameters_11 full linked: callers=0 callees=16 */
int32_t HumanPlayer_LoadParameters_11(int32_t* a1, int32_t a2)

{
    int32_t var_18;
    __builtin_memset(&var_18, 0, 0x18);
    (*((sub_460be0() << 2) + &g_a96ae0))(a1, a2);
    sub_4c1790(g_HumanPlayerCtx, a1);
    *(a1 + 0x695) = 1;
    *(a1 + 0x696) = 1;
    *(a1 + 0x697) = 1;
    a1[0x1a6] = 1;
    int32_t var_38_1 = Level_StartMission_4();
    sub_4d9620(a1, 0, nullptr);
    a1[0x33] = 2;
    sub_489ea0(a1, 2, 0, 0f);
    sub_4d38c0(&a1[0x1e], &a1[0x1a]);
    memcpy(&a1[0x194], a1[0x1c] + 0x4c, 0x14);
    sub_4c7140(Level_StartMission_4(), a1, &var_18, a1[0x28], 2);
    sub_464660(a1[0x13b]);
    int32_t i = 0;

    if (g_56df98 > 0)
    {
        int32_t* esi_2 = &g_56df9c;

        do
        {
            sub_47ce70(&a1[0xd0], *esi_2, esi_2[1]);
            i += 1;
            esi_2 = &esi_2[2];
        } while (i < g_56df98);
    }

    sub_4ec190(&a1[0xbb], sub_4105c0, &g_5385b4, 0, 2, 0x538710);
    a1[0xce] = 0x538870;
    sub_489c30(a1, &g_5389f8);
    a1[0x96] = g_56e204;
    sub_4ec190(&a1[0x33e], sub_410700, &g_538678, 1, 0, 0);
    a1[0x351] = 0;
    *(a1 + 0xd45) = 0;
    a1[0x352] = 0xffffffff;
    a1[0x353] = 0xffffffff;
    a1[0x354] = 0xffffffff;
    a1[0x355] = 0;
    a1[0x356] = 0;
    a1[0x357] = 0;
    a1[0x35a] = 0;
    a1[0x35e] = 0;
    *(a1 + 0xd79) = 0;
    *(a1 + 0xd7a) = 0;
    a1[0x363] = 0;
    a1[0x364] = 0;
    *(a1 + 0xd91) = 0;
    *(a1 + 0xd92) = 0;
    *(a1 + 0xd93) = 0;
    a1[0x365] = 0;
    a1[0x367] = 0;
    a1[0x368] = 0;
    *(a1 + 0xda1) = 0;
    __builtin_memset(&a1[0x36f], 0, 0x30);
    return 0xffffffff;
}
