#include "004B44D0-Sys_CloseFileStream_13.h"
/* 0x004b44d0 Sys_CloseFileStream_13 full linked: callers=6 callees=2 */
float* sub_4b44d0(float a1, float* a2, float* a3, float* a4, float* a5)

{
    char* esi = a1;
    *esi = 0;
    long double st0 = sub_4b4570(a4, a5);
    a1 = st0;
    long double temp0 = 0f;
    st0 - temp0;

    if (*(&((st0 < temp0 ? 1 : 0) << 8 | (FCMP_UO(st0, temp0) ? 1 : 0) << 0xa
        | (st0 == temp0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_1 = a1;
        long double temp2_1 = -9.99999994e-09f;
        x87_r7_1 - temp2_1;

        if (!(*(&((x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1))
            a1 = 0f;
        else
        {
            a1 = -(a1);
            *esi = 1;
        }
    }

    long double st0_1 = sub_4b2760(a1);
    float* result = a2;
    *result = st0_1;
    long double temp1 = 0f;
    st0_1 - temp1;
    result = (st0_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp1) ? 1 : 0) << 0xa
        | (st0_1 == temp1 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
    {
        *a3 = 1f;
        return result;
    }

    long double st0_2;
    bool c1;
    bool c2_3;
    st0_2 = __fsin(st0_1);
    *a3 = 1f / st0_2;
    return result;
}
