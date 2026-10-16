#include "0040F950-HumanPlayer_ApplyPhysics_8.h"
/* 0x0040f950 HumanPlayer_ApplyPhysics_8 full linked: callers=0 callees=6 */
void* HumanPlayer_ApplyPhysics_8(void* a1, int32_t a2)

{
    if (!*(a2 + 0x4d3))
    {
        void* edx = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 1;
        int32_t ecx_1 = *(edx + 4);
        *(a1 + 0x14) = ecx_1;
        return ecx_1(a1, a2);
    }

    sub_4647a0(*(a2 + 0x4ec), -0.610865235f, 0xbeb2b8c3);
    int32_t eax_4 = Table_GetAt(a2 + 0x4c4, 0);
    void var_8;
    sub_4f23d0(eax_4, &var_8);
    int32_t var_4;
    int32_t eax_5 = var_4;
    bool cond:0 = eax_5;
    eax_5 = g_56e214;

    if (!cond:0 && !eax_5)
    {
        void* ebp;
        HumanPlayer_UpdateHealth_8(ebp, a2, eax_4, a2, 1);
        *(a1 + 0x14) = HumanPlayer_CheckCollision_7;
        return a1;
    }

    sub_4f2350(eax_4, eax_5);
    void* eax_7 = sub_464770(*(a2 + 0x4ec), 0f, 0, 0x3d6e4bae, 0x3d082b3f);
    *(a1 + 0x14) = HumanPlayer_PlayFootstep_8;
    return eax_7;
}
