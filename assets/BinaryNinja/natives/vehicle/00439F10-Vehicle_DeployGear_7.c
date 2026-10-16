#include "Vehicle_DeployGear_7.h"
float Vehicle_DeployGear_7(float a1, float a2) __location("valA")

{
    float dstD = a1;
    void* srcS = *(dstD + 0x130);
    double v_18;
    WeaponType_UpdateAnim(&v_18, dstD, a2);
    v_18 = v_18 + *(dstD + 0x20);
    double v_10;
    double v_10_1 = v_10 + *(dstD + 0x28);
    double v_8;
    double v_8_1 = v_8 + *(dstD + 0x30);
    float result = *(srcS + 0x124);
    long double x87_r4_3 = (g_bcab18 - *(srcS + 0x30)) * result
        + (g_bcab10 - *(srcS + 0x28)) * *(srcS + 0x118)
        + (g_bcab08 - *(srcS + 0x20)) * *(srcS + 0x10c);
    long double f1 = 0.0;
    x87_r4_3 - f1;
    bool c1;
    result = (x87_r4_3 < f1 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(x87_r4_3, f1) ? 1 : 0) << 0xa | (x87_r4_3 == f1 ? 1 : 0) << 0xe | 0x3000;

    if (!(*(&result + 1) & 0x41))
    {
        float v_44;
        result = Display_RestoreDevice_15(&v_44, &a1, &v_18);
        long double x87_r7_8 = a1;
        long double f2_1 = 0f;
        x87_r7_8 - f2_1;
        result = (x87_r7_8 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == f2_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            float objC1 = a1;
            float v_4c = 6144f;
            float v_48_1 = 6144f;
            Display_SetGammaRamp_15(&v_4c, &v_4c, objC1);
            *(dstD + 0x138);
            Camera_ApplyHandiCam_5();
            long double x87_r6_4 = 3.1415926535897944 * 0.318309873f - 0.5f;
            long double f3_1 = 0f;
            x87_r6_4 - f3_1;

            if (*(&((x87_r6_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, f3_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == f3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                x87_r6_4 = -(x87_r6_4);

            long double x87_r5_3 = v_44 - v_4c;
            float v_40;
            long double x87_r4_5 = v_40 - v_48_1;
            long double x87_r3_7 = v_44 + v_4c;
            a2 = x87_r3_7;
            float v_74_1 = a2;
            float v_3c_1 = a2;
            long double x87_r5_5 = v_40 + v_48_1;
            return Qsprite_Register4Az(g_57bea4 + 0x18, x87_r5_3, x87_r4_5, x87_r3_7, x87_r4_5,
                x87_r5_3, x87_r5_5, a2, x87_r5_5, (x87_r6_4 + x87_r6_4) * 128f, 0f, 0f, a1,
                0x3f000000, 0, 0x1040008, 0);
        }
    }

    return result;
}
