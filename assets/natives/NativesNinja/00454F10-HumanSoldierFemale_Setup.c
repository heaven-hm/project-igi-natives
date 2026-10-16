#include "00454F10-HumanSoldierFemale_Setup.h"
/* 0x00454f10 HumanSoldierFemale_Setup full linked: callers=0 callees=16 */
int32_t sub_454f10(int32_t* a1, int32_t a2)

{
    int16_t eax;
    eax = *(a1 + 0xd01);

    if (eax)
        sub_4d96f0(a1);

    eax = a1[0x33e];
    int32_t var_18 = Level_StartMission_4();
    sub_4d9620(a1, eax, nullptr);
    a1[0x33] = 2;
    int32_t eax_2 = a1[0x33f];

    if (eax_2 == 0xffffffff)
        sub_489ea0(a1, 6, 0, 0f);
    else if (!sub_4d74f0(&a1[0x1a], 0, eax_2))
    {
        int32_t var_c_3 = a1[0x33f];
        Warning_Show("Animation #%d not found");
        sub_489ea0(a1, 6, 0, 0f);
    }
    else
        sub_4d61d0(&a1[0x1a], 0, a1[0x33f], 0, 0f);

    if (!*(a1 + 0xd01))
    {
        sub_4c7140(Level_StartMission_4(), a1, &a1[0x38], a1[0x28], 2);
        *(a1 + 0xd01) = 1;
        (*(((sub_4f1a70() * 0x180 + sub_460be0()) << 2) + &g_a96ae0))(a1, a2);
    }
    else
        (*(((sub_4f1a70() * 0x180 + sub_460be0()) << 2) + &g_a96ae0))(a1, a2);

    int32_t result = sub_4d38c0(&a1[0x1e], &a1[0x1a]);
    memcpy(&a1[0x194], a1[0x1c] + 0x4c, 0x14);
    return result;
}
