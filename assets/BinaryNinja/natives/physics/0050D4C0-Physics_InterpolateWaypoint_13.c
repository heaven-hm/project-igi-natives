#include "Physics_InterpolateWaypoint_13.h"
int32_t** Physics_InterpolateWaypoint_13(int32_t* a1)

{
    int32_t* dstD = a1;
    int32_t valA = dstD[1];
    int32_t** result;
    int32_t* srcS;

    if (!(valA & 0x60000) || !g_a84a4c || valA & 0x40000000)
    {
        result = nullptr;

        if (dstD[2] >= 0)
            srcS = Display_CloseDevice_14(dstD[3] * 0x1c + 0x28);
        else
            srcS = &g_a7cedc;
    }
    else
    {
        result = 1;
        srcS = Sys_AllocateMemory_19(Physics_EvaluateAreaCriteria_13, dstD[3] * 0x1c + 0x28, *(dstD[4] + 8));
    }

    if (srcS)
    {
        srcS[1] = g_54e890;
        srcS[3] = g_a84a50;
        srcS[4] = g_a84a58;
        srcS[5] = dstD[1];
        srcS[7] = dstD[3];
        srcS[8] = *dstD;
        long double x87_r7_2 = *(dstD[4] + 0x14) * 255f;
        srcS[9] = &srcS[0xa];
        int32_t v_14_1 = 0;
        srcS[6] = x87_r7_2;

        if (srcS[7] > 0)
        {
            int32_t v_18_1 = 0;
            void* ctxB1 = nullptr;
            bool cond_0_1;

            do
            {
                float* objC9 = ctxB1 + dstD[4];
                float* tmpD9 = srcS[9] + v_18_1;
                *tmpD9 = *objC9 - 0.5f;
                tmpD9[1] = objC9[1] - 0.5f;
                long double x87_r7_7 = objC9[2];
                long double f0_1 = 0f;
                x87_r7_7 - f0_1;

                if (*(&((x87_r7_7 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, f0_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41 || !g_6e5bb0)
                {
                    tmpD9[2] = 0x3f000000;
                    tmpD9[3] = 1f / ((g_bcadc8 - g_bcada0) * 0.5f);
                }
                else
                {
                    long double x87_r7_9 = g_bcada0 * 1.00999999f;
                    a1 = g_bcabec * objC9[2];
                    long double f1_1 = a1;
                    x87_r7_9 - f1_1;

                    if (*(&((x87_r7_9 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_9, f1_1) ? 1 : 0) << 0xa
                        | (x87_r7_9 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        long double x87_r7_11 = g_bcadc8;
                        long double f2_1 = a1;
                        x87_r7_11 - f2_1;

                        if (!(*(&((x87_r7_11 < f2_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_11, f2_1) ? 1 : 0) << 0xa
                                | (x87_r7_11 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
                            x87_r7_9 = a1;
                        else
                            x87_r7_9 = g_bcadc8;
                    }

                    long double x87_r7_12 = 1f / x87_r7_9;
                    tmpD9[3] = x87_r7_12;
                    long double x87_r7_15 = (1f - x87_r7_12 * g_bcada0) * g_bcab6c;
                    tmpD9[2] = x87_r7_15;
                    tmpD9[2] = (g_bcad8c - g_bcadb4) * x87_r7_15 + g_bcadb4;
                }

                int32_t valA15 = srcS[5];
                long double x87_r7_21 = objC9[5];

                if (valA15 & 4)
                    x87_r7_21 = 0.5f;
                else if (valA15 & 0x20)
                    x87_r7_21 = 0.25f;

                int32_t valA21;
                int32_t flagP3;

                if (!(valA15 & 0x10880024))
                {
                    flagP3 = (((0xff00 - objC9[6] * -255f) << 8) - objC9[7] * -255f) << 8;
                    valA21 = objC9[8] * -255f;
                }
                else
                {
                    valA21 = (((((x87_r7_21 * -255f) << 8) + objC9[6] * -255f) << 8)
                        + objC9[7] * -255f) << 8;
                    flagP3 = objC9[8] * 255f;
                }

                tmpD9[4] = flagP3 - valA21;
                void* valA24 = srcS[3];

                if (valA24)
                {
                    tmpD9[5] = *(valA24 + 0x10) * objC9[3] + 0.0009765625f;
                    tmpD9[6] = *(srcS[3] + 0x14) * objC9[4] + 0.0009765625f;
                }

                ctxB1 += 0x24;
                cond_0_1 = v_14_1 + 1 < srcS[7];
                v_14_1 += 1;
                v_18_1 += 0x1c;
            } while (cond_0_1);
        }
    }

    if (result)
        return result;

    int32_t valA28 = dstD[2];

    if (valA28 >= 0)
        return Display_ClearSurfaces_14(valA28, srcS);

    return Display_SyncVSync_14(srcS);
}
