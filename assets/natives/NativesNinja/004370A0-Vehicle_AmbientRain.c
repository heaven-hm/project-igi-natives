#include "004370A0-Vehicle_AmbientRain.h"
/* 0x004370a0 Vehicle_AmbientRain full linked: callers=1 callees=4 */
int32_t Vehicle_AmbientRain(float a1)

{
    long double st0 = sub_4f80f0(g_57bdac + 0x28);
    long double temp0 = 0f;
    st0 - temp0;
    long double x87_r7_1 = *(a1 + 0x34);

    if (*(&((st0 < temp0 ? 1 : 0) << 8 | (FCMP_UO(st0, temp0) ? 1 : 0) << 0xa
            | (st0 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
        *(a1 + 0x34) = x87_r7_1 - 0.0199999996f;
    else
    {
        *(a1 + 0x34) = x87_r7_1 + 0.0199999996f;
        sub_4e7bd0("Ambient rain\n");
    }

    long double x87_r7_4 = *(a1 + 0x34);
    long double temp1 = 0f;
    x87_r7_4 - temp1;
    long double x87_r7_5;

    if (!(*(&((x87_r7_4 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp1) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp1 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_6 = *(a1 + 0x34);
        long double temp2_1 = 1f;
        x87_r7_6 - temp2_1;

        if (*(&((x87_r7_6 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            x87_r7_5 = *(a1 + 0x34);
        else
            x87_r7_5 = 1f;
    }
    else
        x87_r7_5 = 0f;

    void* edx = *(a1 + 0x38);
    *(a1 + 0x34) = x87_r7_5;
    sub_4e6c60(edx, 0xbf800000, x87_r7_5);
    return sub_4e6c30(*(a1 + 0x38), g_57bdac + 0x28);
}
