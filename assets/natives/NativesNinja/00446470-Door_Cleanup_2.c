#include "00446470-Door_Cleanup_2.h"
/* 0x00446470 Door_Cleanup_2 full linked: callers=0 callees=1 */
int32_t sub_446470(void* a1, double* a2)

{
    long double st0 = sub_4b32f0(a2, a1 + 0x20);
    long double x87_r6 = a2[3];
    long double temp0 = 0.0;
    x87_r6 - temp0;
    int16_t result = (x87_r6 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, temp0) ? 1 : 0) << 0xa
        | (x87_r6 == temp0 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 1))
    {
        long double temp1_1 = a2[3];
        st0 - temp1_1;
        result = (st0 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(st0, temp1_1) ? 1 : 0) << 0xa
            | (st0 == temp1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 1))
            return result;
    }

    a2[3] = st0;
    a2[4] = a1;
    return result;
}
