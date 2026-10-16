#include "0045FE70-Human_Cleanup_4.h"
/* 0x0045fe70 Human_Cleanup_4 full linked: callers=0 callees=3 */
void sub_45fe70(void* a1, int32_t* a2)

{
    if (*a2 == a1 || a2[0xc] != *(a1 + 0xfc))
        return;

    double* eax_2 = a2[1];
    long double x87_r7_2 = *(a1 + 0x20) - *eax_2;
    double var_38 = x87_r7_2;
    long double x87_r6_2 = *(a1 + 0x28) - eax_2[1];
    double var_30_1 = x87_r6_2;
    long double x87_r5_2 = *(a1 + 0x30) - eax_2[2];
    float* eax_3 = a2[2];
    double var_28_1 = x87_r5_2;
    double var_20 = eax_3[6] * x87_r5_2 + eax_3[3] * x87_r6_2 + *eax_3 * x87_r7_2;
    double var_18_1 = eax_3[7] * x87_r5_2 + eax_3[4] * x87_r6_2 + eax_3[1] * x87_r7_2;
    double var_10_1 = eax_3[8] * x87_r5_2 + eax_3[5] * x87_r6_2 + eax_3[2] * x87_r7_2;
    memcpy(&var_38, &var_20, 0x18);
    var_30_1 = 0;
    *(&var_30_1 + 4) = 0;
    long double st0_1 = sub_4b3130(&var_38);
    long double x87_r6_4 = *(a2 + 0x10);
    long double temp0_1 = 0.0;
    x87_r6_4 - temp0_1;
    long double temp1_1;

    if (!(*(&((x87_r6_4 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, temp0_1) ? 1 : 0) << 0xa
        | (x87_r6_4 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        temp1_1 = *(a2 + 0x10);
        st0_1 - temp1_1;
    }

    if (!(*(&((x87_r6_4 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, temp0_1) ? 1 : 0) << 0xa
            | (x87_r6_4 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) && !(*(&(
            (st0_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp1_1) ? 1 : 0) << 0xa
            | (st0_1 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        return;

    *(a2 + 0x10) = st0_1;
    var_30_1 = var_18_1;
    *(&var_30_1 + 4) = *(&var_18_1 + 4);
    memcpy(&a2[6], &var_38, 0x18);
}
