#include "Display_ClearSurfaces_17.h"
int32_t Display_ClearSurfaces_17(float a1)

{
    float objC;
    float v_4 = objC;
    float dstD = a1;
    a1 = 2048f;
    int32_t result = *(dstD + 0x5650);
    float* srcS = dstD + 0x57c;

    if (result)
        a1 = 204.800003f;

    result = *(dstD + 0x56ac);
    long double fpu7 = *(dstD + 0x56a8);
    *(dstD + 0x5648) += 3;
    long double x87_r7_1;

    if (!result)
    {
        x87_r7_1 = fpu7 - 0.0166666675f;
        long double f0_1 = 0f;
        x87_r7_1 - f0_1;
        result = (x87_r7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f0_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 0x41)
            x87_r7_1 = 0f;
    }
    else
    {
        x87_r7_1 = fpu7 + 0.0166666675f;
        long double f1_1 = 1f;
        x87_r7_1 - f1_1;
        result = (x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 1))
            x87_r7_1 = 1f;
    }

    *(dstD + 0x56a8) = x87_r7_1;
    long double x87_r7_4 = *(dstD + 0x56a8);
    long double f2 = 0f;
    x87_r7_4 - f2;
    result = (x87_r7_4 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f2) ? 1 : 0) << 0xa
        | (x87_r7_4 == f2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        result = *(dstD + 0xe3c);
        int32_t flagP1 = 0;

        if (result > 0)
        {
            do
            {
                long double x87_r7_6 = srcS[2] - a1;
                v_4 = x87_r7_6;
                srcS[2] = x87_r7_6;
                long double x87_r7_7 = v_4;
                long double f4_1 = 0f;
                x87_r7_7 - f4_1;

                if (*(&((x87_r7_7 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_7, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_7 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
                    srcS[2] = v_4 + 24576f;

                if (*(dstD + 0x5650))
                {
                    int32_t valA2 = srcS[3];
                    srcS[3] = valA2 - 1;

                    if (valA2 < 0)
                    {
                        uint32_t valA3 = Sys_FreeMemory_14(0xc311d0, 0x1e);
                        srcS[3] += valA3 + 0x1e;
                        srcS[4] = (Sys_AllocateMemory_14(0xc311d0) - 0.5f) * 136.53334f;
                        srcS[5] = (Sys_AllocateMemory_14(0xc311d0) - 0.5f) * 136.53334f;
                    }

                    long double x87_r7_17 = srcS[4] + *srcS;
                    *srcS = x87_r7_17;
                    srcS[1] = srcS[5] + srcS[1];
                    long double f6_1 = 0f;
                    x87_r7_17 - f6_1;
                    long double x87_r7_18 = *srcS;

                    if (!(*(&((x87_r7_17 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_17, f6_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double f7_1 = 10895.3604f;
                        x87_r7_18 - f7_1;

                        if (!(*(&((x87_r7_18 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_18, f7_1) ? 1 : 0) << 0xa
                            | (x87_r7_18 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            *srcS = *srcS - 10895.3604f;
                            srcS[6] ^= 1;
                        }
                    }
                    else
                    {
                        *srcS = x87_r7_18 + 10895.3604f;
                        srcS[6] ^= 1;
                    }

                    long double x87_r7_21 = srcS[1];
                    long double f8_1 = 0f;
                    x87_r7_21 - f8_1;
                    long double x87_r7_22 = srcS[1];

                    if (!(*(&((x87_r7_21 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_21, f8_1) ? 1 : 0) << 0xa
                        | (x87_r7_21 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    {
                        long double f9_1 = 10895.3604f;
                        x87_r7_22 - f9_1;

                        if (!(*(&((x87_r7_22 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_22, f9_1) ? 1 : 0) << 0xa
                            | (x87_r7_22 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            srcS[1] = srcS[1] - 10895.3604f;
                            srcS[6] ^= 2;
                        }
                    }
                    else
                    {
                        srcS[1] = x87_r7_22 + 10895.3604f;
                        srcS[6] ^= 2;
                    }
                }

                result = *(dstD + 0xe3c);
                srcS = &srcS[7];
                flagP1 += 1;
            } while (flagP1 < result);
        }

        long double x87_r7_26 = a1 + *(dstD + 0x564c);
        *(dstD + 0x564c) = x87_r7_26;
        long double f3_1 = 307.200012f;
        x87_r7_26 - f3_1;
        result = (x87_r7_26 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_26, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_26 == f3_1 ? 1 : 0) << 0xe;

        while (!(*(&result + 1) & 0x41))
        {
            result = *(dstD + 0xe3c);

            if (result == 0x50)
                break;

            v_4 = Sys_AllocateMemory_14(0xc311d0) * 10895.3604f;
            long double x87_r7_30 = Sys_AllocateMemory_14(0xc311d0) * 10895.3604f;
            *(dstD + result * 0x1c + 0x57c) = v_4;
            *(dstD + result * 0x1c + 0x588) = 0;
            *(dstD + result * 0x1c + 0x580) = x87_r7_30;
            *(dstD + result * 0x1c + 0x584) = 24576f - a1;
            *(dstD + result * 0x1c + 0x594) = Sys_FreeMemory_14(0xc311d0, 4);
            long double x87_r7_34 = *(dstD + 0x564c) - 307.200012f;
            result = *(dstD + 0xe3c) + 1;
            *(dstD + 0xe3c) = result;
            *(dstD + 0x564c) = x87_r7_34;
            long double f5_1 = 307.200012f;
            x87_r7_34 - f5_1;
            result = (x87_r7_34 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_34, f5_1) ? 1 : 0) << 0xa
                | (x87_r7_34 == f5_1 ? 1 : 0) << 0xe;
        }
    }

    return result;
}
