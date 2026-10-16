#include "004D4500-Render_ComputeNormals_7.h"
/* 0x004d4500 Render_ComputeNormals_7 full linked: callers=3 callees=5 */
int32_t sub_4d4500(float* a1, float a2, float a3, float a4)

{
    long double x87_r7 = a4;
    long double temp1 = 0.00100000005f;
    x87_r7 - temp1;
    int16_t eax = (x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe;

    if (*(&eax + 1) & 0x41)
    {
        memcpy(a1, a3, 0x14);
        return eax;
    }

    long double x87_r7_1 = a4;
    long double temp2 = 0.999000013f;
    x87_r7_1 - temp2;
    eax = (x87_r7_1 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2 ? 1 : 0) << 0xe;

    if (!(*(&eax + 1) & 1))
    {
        memcpy(a1, a2, 0x14);
        return eax;
    }

    float esi_2 = a3;
    float ebx = a2;
    float var_28 = esi_2;
    int32_t var_18 = 0;
    sub_4b44d0(&var_18, &a3, &a2, ebx, var_28);
    int32_t eax_1 = var_18;
    float var_14;
    float var_10;
    float var_c;
    float var_8;
    int32_t esi_3;

    if (!eax_1)
    {
        memcpy(&var_14, esi_2, 0x14);
        int32_t var_4;
        esi_3 = var_4;
    }
    else
    {
        var_14 = -(*esi_2);
        var_10 = -(*(esi_2 + 4));
        var_c = -(*(esi_2 + 8));
        esi_3 = *(esi_2 + 0x10);
        var_8 = -(*(esi_2 + 0xc));
    }

    a4 = 1f - a4;
    long double x87_r7_12 = a3;
    long double temp3 = 0f;
    x87_r7_12 - temp3;
    eax_1 = (x87_r7_12 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, temp3) ? 1 : 0) << 0xa
        | (x87_r7_12 == temp3 ? 1 : 0) << 0xe;

    if (*(&eax_1 + 1) & 0x40)
    {
        memcpy(a1, ebx, 0x14);
        return eax_1;
    }

    long double x87_r7_13 = a3;
    long double temp4 = 0.00999999978f;
    x87_r7_13 - temp4;
    long double x87_r6;
    long double x87_r7_15;

    if (!(*(&((x87_r7_13 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, temp4) ? 1 : 0) << 0xa
        | (x87_r7_13 == temp4 ? 1 : 0) << 0xe) + 1) & 1))
    {
        a4 = a4 * a3;
        long double st0_1;
        bool c1_1;
        bool c2_4;
        st0_1 = __fsin(a3 - a4);
        x87_r7_15 = st0_1 * a2;
        long double st0_2;
        bool c1_2;
        bool c2_5;
        st0_2 = __fsin(a4);
        x87_r6 = st0_2 * a2;
    }
    else
    {
        x87_r7_15 = 1f - a4;
        x87_r6 = a4;
    }

    *a1 = x87_r7_15 * *ebx + x87_r6 * var_14;
    a1[1] = x87_r7_15 * *(ebx + 4) + x87_r6 * var_10;
    a1[2] = x87_r7_15 * *(ebx + 8) + x87_r6 * var_c;
    a1[3] = x87_r7_15 * *(ebx + 0xc) + x87_r6 * var_8;
    a1[4] = *(ebx + 0x10) + esi_3 + 1;
    return a1;
}
