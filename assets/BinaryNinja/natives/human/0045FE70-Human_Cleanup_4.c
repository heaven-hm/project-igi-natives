#include "Human_Cleanup_4.h"
void Human_Cleanup_4(void* a1, int32_t* a2)

{
    if (*a2 == a1 || a2[0xc] != *(a1 + 0xfc))
        return;

    double* valA2 = a2[1];
    long double x87_r7_2 = *(a1 + 0x20) - *valA2;
    double v_38 = x87_r7_2;
    long double x87_r6_2 = *(a1 + 0x28) - valA2[1];
    double v_30_1 = x87_r6_2;
    long double x87_r5_2 = *(a1 + 0x30) - valA2[2];
    float* valA3 = a2[2];
    double v_28_1 = x87_r5_2;
    double v_20 = valA3[6] * x87_r5_2 + valA3[3] * x87_r6_2 + *valA3 * x87_r7_2;
    double v_18_1 = valA3[7] * x87_r5_2 + valA3[4] * x87_r6_2 + valA3[1] * x87_r7_2;
    double v_10_1 = valA3[8] * x87_r5_2 + valA3[5] * x87_r6_2 + valA3[2] * x87_r7_2;
    memcpy(&v_38, &v_20, 0x18);
    v_30_1 = 0;
    *(&v_30_1 + 4) = 0;
    long double fp0_1 = Sys_OpenFileStream_11(&v_38);
    long double x87_r6_4 = *(a2 + 0x10);
    long double f0_1 = 0.0;
    x87_r6_4 - f0_1;
    long double f1_1;

    if (!(*(&((x87_r6_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, f0_1) ? 1 : 0) << 0xa
        | (x87_r6_4 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        f1_1 = *(a2 + 0x10);
        fp0_1 - f1_1;
    }

    if (!(*(&((x87_r6_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, f0_1) ? 1 : 0) << 0xa
            | (x87_r6_4 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) && !(*(&(
            (fp0_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f1_1) ? 1 : 0) << 0xa
            | (fp0_1 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        return;

    *(a2 + 0x10) = fp0_1;
    v_30_1 = v_18_1;
    *(&v_30_1 + 4) = *(&v_18_1 + 4);
    memcpy(&a2[6], &v_38, 0x18);
}
