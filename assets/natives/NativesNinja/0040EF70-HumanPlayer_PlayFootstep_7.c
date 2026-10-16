#include "0040EF70-HumanPlayer_PlayFootstep_7.h"
/* 0x0040ef70 HumanPlayer_PlayFootstep_7 full linked: callers=0 callees=5 */
void* HumanPlayer_PlayFootstep_7(int32_t a1 @ edi, void* a2, struct human_player* a3)

{
    void* a = Table_GetAt(&a3->stance_data, 0);
    struct collision_set* eax_1 = HumanPlayer_LoadParameters_13(a);
    void* result_1;
    sub_4f23d0(a, &result_1);
    int16_t eax_3;
    eax_3 = a3->pad2[0x854];
    int16_t ebx = *(a2 + 8);

    if (eax_3)
    {
        int32_t* eax_4 = *(a2 + 4);
        *(a2 + 0xc) = *(a2 + 0x10);
        *(a2 + 0x10) = 0;
        int32_t eax_5 = *eax_4;
        *(a2 + 0x14) = eax_5;
        return eax_5(a2, a3, a1);
    }

    long double x87_r7 = a3->pad0[0x1c8];
    long double temp0 = 0f;
    x87_r7 - temp0;
    void* result;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_1 = a3->pad0[0x1d0];
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;
        result = result_1;
        int32_t var_4;

        if ((!(*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !result) && var_4
            && result < *(eax_1 + 0x648))
        {
            Human_TaskViewReset(a3->pad4ec);
            void* edx_2 = *(a2 + 4);
            *(a2 + 0xc) = *(a2 + 0x10);
            *(a2 + 0x10) = 3;
            int32_t eax_12 = *(edx_2 + 0xc);
            *(a2 + 0x14) = eax_12;
            return eax_12(a2, a3);
        }
    }
    else
    {
        result = result_1;

        if (!result && ebx & 1)
        {
            void* edx_1 = *(a2 + 4);
            *(a2 + 0xc) = *(a2 + 0x10);
            *(a2 + 0x10) = 0xc;
            int32_t eax_7 = *(edx_1 + 0x30);
            *(a2 + 0x14) = eax_7;
            return eax_7(a2, a3, a1);
        }

        a3->stance_data[0xd] = 1;
    }

    result = a3->stance_data[0xf];

    if (result)
        result = HumanPlayer_CheckCollision_9(a3, 8.40779079e-45f);

    if (!(ebx & 1) || *(&ebx + 1) & 2)
        return result;

    void* ecx_2 = *(a2 + 4);
    *(a2 + 0xc) = *(a2 + 0x10);
    *(a2 + 0x10) = 1;
    int32_t eax_10 = *(ecx_2 + 4);
    *(a2 + 0x14) = eax_10;
    return eax_10(a2, a3, a1);
}
