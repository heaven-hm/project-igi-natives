#include "0040BA70-HumanPlayer_HandleInput_4.h"
/* 0x0040ba70 HumanPlayer_HandleInput_4 full linked: callers=0 callees=5 */
int32_t* HumanPlayer_HandleInput_4(void* a1, void* a2)

{
    int32_t* eax = *(a2 + 0x768);

    if (eax)
    {
        void* edi_1 = *eax;

        if (edi_1)
        {
            int16_t eax_1 = Vehicle_DeployGear_9();

            if (*(edi_1 + 0x1c) == eax_1)
            {
                int32_t* edx = *(a1 + 4);
                *(a1 + 0xc) = *(a1 + 0x10);
                *(a1 + 0x10) = 0;
                int32_t ecx_1 = *edx;
                *(a1 + 0x14) = ecx_1;
                return ecx_1(a1, a2);
            }
        }
    }

    *(a2 + 0x33d) = 0;
    sub_489e70(a2, *(a1 + 0x10), 0f);
    sub_4d6580(a2 + 0x68, 0, 0.400000006f);
    sub_4e6b00(*(a2 + 0x4ec), "jump_1");
    float var_c = *(a2 + 0x520);
    long double x87_r7 = var_c;
    long double temp1 = 0f;
    x87_r7 - temp1;
    long double x87_r7_1 = *(a2 + 0x524);
    int32_t var_4 = *(a2 + 0x528);
    long double temp2_1;

    if (*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
    {
        temp2_1 = 0f;
        x87_r7_1 - temp2_1;
    }

    if (!(*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
        (x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
        long double x87_r5_1 = var_c;
        long double x87_r6_3 = 1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r7_1 * x87_r7_1);
        var_c = g_56e1ec * var_c * x87_r6_3;
        x87_r7_1 = x87_r7_1 * x87_r6_3 * g_56e1ec;
    }

    float var_8_1 = x87_r7_1 + *(a2 + 0x72c);
    long double x87_r7_6 = g_56e1f0 + *(a2 + 0x730);
    *(a2 + 0x664) = var_c + *(a2 + 0x728);
    *(a2 + 0x668) = var_8_1;
    *(a2 + 0x66c) = x87_r7_6;
    int32_t* result = sub_4632d0(a2);
    *(a1 + 0x14) = HumanPlayer_ApplyPhysics_4;
    return result;
}
