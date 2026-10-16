#include "00413090-HumanPlayer_Cleanup.h"
/* 0x00413090 HumanPlayer_Cleanup full linked: callers=0 callees=2 */
int32_t HumanPlayer_Cleanup(void* a1, int32_t* a2)

{
    double var_30;
    sub_465800(&var_30, *(a1 + 0x4ec));
    double* eax_1 = *a2;
    double var_18 = *eax_1 - var_30;
    double var_28;
    double var_10 = eax_1[1] - var_28;
    double var_20;
    double var_8 = eax_1[2] - var_20;
    long double st0 = sub_4b3130(&var_18);
    long double temp0 = 102400.0;
    st0 - temp0;

    if (*(&((st0 < temp0 ? 1 : 0) << 8 | (FCMP_UO(st0, temp0) ? 1 : 0) << 0xa
            | (st0 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        *(a1 + 0xdc8) = 0x3f800000;

    long double x87_r6_1 = st0 - a2[1];
    long double temp1 = 0.0;
    x87_r6_1 - temp1;
    int16_t result = (x87_r6_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp1) ? 1 : 0) << 0xa
        | (x87_r6_1 == temp1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        *(a1 + 0xddc) = 0x40000000;

    return result;
}
