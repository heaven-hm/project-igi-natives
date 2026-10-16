#include "SCamera_Cleanup_9.h"
int32_t SCamera_Cleanup_9(float a1, void* a2)

{
    int32_t* srcS = a1;
    double* dstD = srcS[0x974];
    double v_18;
    WeaponType_UpdateAnim(&v_18, dstD, 0);
    v_18 = v_18 + dstD[4];
    double v_10;
    double v_10_1 = v_10 + dstD[5];
    double v_8;
    double v_8_1 = v_8 + dstD[6];
    long double x87_r7_6 = srcS[0x27];
    long double fpu6 = srcS[0x28];
    fpu6 - x87_r7_6;
    long double x87_r7_7;

    if (!(*(&((fpu6 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(fpu6, x87_r7_6) ? 1 : 0) << 0xa
            | (fpu6 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_7 = srcS[0x28];
    else
        x87_r7_7 = srcS[0x27];

    long double x87_r6_1 = srcS[0x26];
    x87_r6_1 - x87_r7_7;
    long double x87_r7_9;

    if (*(&((x87_r6_1 < x87_r7_7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_7) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_10 = srcS[0x27];
        long double x87_r6_2 = srcS[0x28];
        x87_r6_2 - x87_r7_10;

        if (!(*(&((x87_r6_2 < x87_r7_10 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_2, x87_r7_10) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_9 = srcS[0x28];
        else
            x87_r7_9 = srcS[0x27];
    }
    else
        x87_r7_9 = srcS[0x26];

    long double x87_r7_12 = Render_ComputeNormals(srcS[0x1b]) * x87_r7_9;
    DynObj_LinkDynamicCube_8(*(a2 + 4), srcS, &v_18, x87_r7_12, 1);
    double* valA3 = DynObj_UpdateDynTree_4(srcS);
    int32_t result = Render_ComputeNormals_14(srcS[0x1a], srcS, valA3);
    int32_t* i = srcS[2];

    if (*i && i)
    {
        int32_t objC2 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA7;

            if (!tmpD1)
                valA7 = nullptr;
            else
            {
                int32_t valA4 = *tmpD1;
                int32_t valA5 = -(valA4);
                valA7 = (valA5 - valA5) & tmpD1;
            }

            *((objC2 << 2) + &g_afa6e0) = valA7;
            g_afa7e0 = objC2 + 1;
            uint32_t valA9 = DynObj_UpdateDynTree_12();
            int32_t valA10 = 0;
            valA10 = i[7];
            result = *(((valA9 * 0x180 + valA10) << 2) + &g_a96ae0);

            if (result)
                result = result(i, a2);

            objC2 = g_afa7e0 - 1;
            g_afa7e0 = objC2;
            i = *((objC2 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
