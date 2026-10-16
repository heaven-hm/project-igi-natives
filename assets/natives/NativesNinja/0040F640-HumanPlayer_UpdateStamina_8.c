#include "0040F640-HumanPlayer_UpdateStamina_8.h"
/* 0x0040f640 HumanPlayer_UpdateStamina_8 full linked: callers=0 callees=9 */
void* HumanPlayer_UpdateStamina_8(void* a1, int32_t a2)

{
    void* ebp = *(a2 + 0x4ec);
    int32_t a = Table_GetAt(a2 + 0x4c4, 0);
    struct collision_set* eax_1 = HumanPlayer_LoadParameters_13(a);
    *(a2 + 0x4e0) += 1;
    void* eax_2 = *(ebp + 0x20c);

    if (eax_2 == 3)
    {
        eax_2 = *(a2 + 0x4e4);
        *(a2 + 0x4d1) = 1;

        if (eax_2)
        {
            eax_2 = sub_4e6c00(eax_2);
            *(a2 + 0x4e4) = 0;
        }
    }

    if (*(a1 + 8) & 1)
    {
        sub_4d61d0(ebp + 0x68, 0, *(eax_1 + 0x67c), 0, 0f);
        sub_4647a0(*(a2 + 0x4ec), -0.610865235f, 0xbeb2b8c3);
        sub_464770(*(a2 + 0x4ec), 0f, 0, 0x3d6e4bae, 0x3d082b3f);
        void var_8;
        sub_4f23d0(a, &var_8);
        int32_t var_4;
        int32_t eax_4 = var_4;
        bool cond:0_1 = eax_4;
        eax_4 = g_56e214;

        if (!cond:0_1 && !eax_4)
        {
            HumanPlayer_UpdateHealth_8(ebp + 0x68, a2, a, a2, 1);
            *(a1 + 0x14) = HumanPlayer_CheckCollision_7;
            return a1;
        }

        eax_2 = sub_4f2350(a, eax_4);
        *(a1 + 0x14) = HumanPlayer_PlayFootstep_8;
    }

    return eax_2;
}
