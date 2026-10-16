#include "00430640-Wheel_Update.h"
/* 0x00430640 Wheel_Update full linked: callers=0 callees=8 */
int32_t Wheel_Update(void* a1, int32_t* a2)

{
    double var_30;
    memcpy(&var_30, a1 + 0xf0, 0x18);
    void* esi_1 = *(a1 + 0x130);
    int16_t eax = Menu_LeaveMenus_23();
    long double x87_r7_2;
    double var_20;

    if (*(esi_1 + 0x1c) != eax)
        x87_r7_2 = var_20;
    else
    {
        void* ecx_1 = *(*(esi_1 + 0x1b4) + 0x2d4);
        int32_t eax_4 = *(ecx_1 + *(a1 + 0x148) * 0x14 + 0x124);

        if (eax_4 < 0)
            eax_4 = 0xfffffff6 - eax_4;

        x87_r7_2 = *(a2[2] + eax_4 * 0x38 + 0x1f0) + var_20 - *(ecx_1 + 0x25c);
    }
    float* eax_5 = a2[1];
    double var_28;
    double var_58 = eax_5[1] * var_28 + eax_5[2] * x87_r7_2 + *eax_5 * var_30;
    double var_50 = eax_5[4] * var_28 + eax_5[3] * var_30 + eax_5[5] * x87_r7_2;
    double* eax_6 = *a2;
    double var_48 = eax_5[7] * var_28 + eax_5[6] * var_30 + eax_5[8] * x87_r7_2;
    double var_18;
    memcpy(&var_18, &var_58, 0x18);
    var_18 = var_58 + *eax_6;
    double var_10;
    double var_10_1 = var_10 + eax_6[1];
    double var_8;
    double var_8_1 = var_8 + eax_6[2];
    long double x87_r7_10 = *(a1 + 0x9c);
    long double x87_r6_12 = *(a1 + 0xa0);
    x87_r6_12 - x87_r7_10;
    long double x87_r7_11;

    if (!(*(&((x87_r6_12 < x87_r7_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_10) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_11 = *(a1 + 0xa0);
    else
        x87_r7_11 = *(a1 + 0x9c);

    long double x87_r6_13 = *(a1 + 0x98);
    x87_r6_13 - x87_r7_11;
    long double x87_r7_13;

    if (*(&((x87_r6_13 < x87_r7_11 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_11) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_14 = *(a1 + 0x9c);
        long double x87_r6_14 = *(a1 + 0xa0);
        x87_r6_14 - x87_r7_14;

        if (!(*(&((x87_r6_14 < x87_r7_14 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_14) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_14 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_13 = *(a1 + 0xa0);
        else
            x87_r7_13 = *(a1 + 0x9c);
    }
    else
        x87_r7_13 = *(a1 + 0x98);

    float var_98_1 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_13;
    sub_4c6940(Level_StartMission_4(), a1, &var_18, var_98_1);
    float var_80;
    sub_4b33a0(&var_80, a1 + 0x108, *(a1 + 0x140), 0f, *(a1 + 0x144));
    float* eax_10 = a2[1];
    float var_74;
    float var_68;
    var_58 = var_74 * eax_10[1] + var_68 * eax_10[2] + var_80 * *eax_10;
    float var_7c;
    float var_70;
    float var_64;
    *(&var_58 + 4) = var_70 * eax_10[1] + var_64 * eax_10[2] + var_7c * *eax_10;
    float var_78;
    float var_6c;
    float var_60;
    var_50 = var_6c * eax_10[1] + var_60 * eax_10[2] + var_78 * *eax_10;
    *(&var_50 + 4) = var_80 * eax_10[3] + var_68 * eax_10[5] + var_74 * eax_10[4];
    var_48 = var_7c * eax_10[3] + var_64 * eax_10[5] + var_70 * eax_10[4];
    int32_t ecx_4 = eax_10[9];
    *(&var_48 + 4) = var_78 * eax_10[3] + var_60 * eax_10[5] + var_6c * eax_10[4];
    float var_40 = var_80 * eax_10[6] + var_68 * eax_10[8] + var_74 * eax_10[7];
    float var_3c = var_7c * eax_10[6] + var_64 * eax_10[8] + var_70 * eax_10[7];
    int32_t var_5c;
    int32_t var_34 = ecx_4 + var_5c + 1;
    float var_38 = var_78 * eax_10[6] + var_60 * eax_10[8] + var_6c * eax_10[7];
    memcpy(a1 + 0x70, &var_58, 0x28);
    return ecx_4 + var_5c + 1;
}
