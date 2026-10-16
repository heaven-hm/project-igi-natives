#include "0042B500-Train_Process.h"
/* 0x0042b500 Train_Process full linked: callers=0 callees=5 */
int32_t Train_Process(float a1, void* a2)

{
    memcpy(a2, a1 + 0x20, 0x18);
    *(a2 + 0x18) = 0;
    *(a2 + 0x1c) = 0;
    *(a2 + 0x20) = 0;
    memcpy(a2 + 0x24, a1 + 0x70, 0x28);
    float var_50;
    sub_4b3be0(&var_50, -1.57079637f);
    float var_44;
    float var_38;
    float var_28 = var_44 * *(a2 + 0x28) + var_38 * *(a2 + 0x2c) + var_50 * *(a2 + 0x24);
    float var_4c;
    float var_40;
    float var_34;
    float var_24 = var_40 * *(a2 + 0x28) + var_34 * *(a2 + 0x2c) + var_4c * *(a2 + 0x24);
    float var_48;
    float var_3c;
    float var_30;
    float var_20 = var_3c * *(a2 + 0x28) + var_30 * *(a2 + 0x2c) + var_48 * *(a2 + 0x24);
    float var_1c = var_44 * *(a2 + 0x34) + var_38 * *(a2 + 0x38) + var_50 * *(a2 + 0x30);
    float var_18 = var_40 * *(a2 + 0x34) + var_34 * *(a2 + 0x38) + var_4c * *(a2 + 0x30);
    float var_14 = var_3c * *(a2 + 0x34) + var_30 * *(a2 + 0x38) + var_48 * *(a2 + 0x30);
    int32_t var_2c;
    int32_t var_4 = *(a2 + 0x48) + var_2c + 1;
    float var_10 = var_38 * *(a2 + 0x44) + var_50 * *(a2 + 0x3c) + var_44 * *(a2 + 0x40);
    float var_c = var_34 * *(a2 + 0x44) + var_4c * *(a2 + 0x3c) + var_40 * *(a2 + 0x40);
    float var_8 = var_30 * *(a2 + 0x44) + var_48 * *(a2 + 0x3c) + var_3c * *(a2 + 0x40);
    memcpy(a2 + 0x24, &var_28, 0x28);
    long double x87_r7_36 = *(a1 + 0x9c);
    long double x87_r6_36 = *(a1 + 0xa0);
    x87_r6_36 - x87_r7_36;
    long double x87_r7_37;

    if (!(*(&((x87_r6_36 < x87_r7_36 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_36, x87_r7_36) ? 1 : 0) << 0xa
            | (x87_r6_36 == x87_r7_36 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_37 = *(a1 + 0xa0);
    else
        x87_r7_37 = *(a1 + 0x9c);

    long double x87_r6_37 = *(a1 + 0x98);
    x87_r6_37 - x87_r7_37;
    long double x87_r7_39;

    if (*(&((x87_r6_37 < x87_r7_37 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_37, x87_r7_37) ? 1 : 0) << 0xa
        | (x87_r6_37 == x87_r7_37 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_40 = *(a1 + 0x9c);
        long double x87_r6_38 = *(a1 + 0xa0);
        x87_r6_38 - x87_r7_40;

        if (!(*(&((x87_r6_38 < x87_r7_40 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_38, x87_r7_40) ? 1 : 0) << 0xa
                | (x87_r6_38 == x87_r7_40 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_39 = *(a1 + 0xa0);
        else
            x87_r7_39 = *(a1 + 0x9c);
    }
    else
        x87_r7_39 = *(a1 + 0x98);

    int16_t result;
    long double st0;
    st0 = sub_4d0950(*(a1 + 0x6c));
    *(a2 + 0x4c) = st0 * x87_r7_39;
    int32_t* ebx_1 = *(a2 + 0x50);

    if (ebx_1)
    {
        *ebx_1 = g_53bd1c[0];
        result = g_53bd1c[4][0];
        ebx_1[1] = result;
    }

    return result;
}
