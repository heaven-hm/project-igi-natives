#include "gi_platform.h"
#include "00499090-Display_SetDisplayMode_17.h"
int32_t Display_SetDisplayMode_17(float a1)

{
    float ctxB = a1;
    int32_t valA = (*(int32_t*)(uintptr_t)(ctxB + 0x56c8));
    float* objC = ctxB + 0x57c;
    int32_t valA1 = (*(int32_t*)(uintptr_t)(ctxB + 0xe3c));
    float* dstD = objC;
    a1 = (*(int32_t*)(uintptr_t)(ctxB + 0x56a8)) * 81.9199982.0f;
    float v_20 = (*(int32_t*)(uintptr_t)(ctxB + 0x56a8)) * 2048.0f;

    if (valA1 > 1)
    {
        int32_t i_2 = valA1 - 1;
        int32_t i;

        do
        {
            long double x87_r7_4 = objC[2];
            long double f0_1 = dstD[2];
            x87_r7_4 - f0_1;

            if (!(*(&((x87_r7_4 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, f0_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                dstD = objC;

            objC = &objC[7];
            i = i_2;
            i_2 -= 1;
        } while (i != 1);
    }

    int32_t* valA3 = (*(int32_t*)(uintptr_t)(ctxB + 0x56cc));
    int32_t v_10 = 0;
    int32_t valA4 = ((int(*)())(uintptr_t)(*(*valA3 + 0xc)))(valA3, 0x20, &v_10, 0);

    if (!valA4)
    {
        (*(int32_t*)(uintptr_t)(ctxB + 0x6c)) = 0;
        char v_c;
        void* valA5 = &v_c;
        void* objC2 = ctxB + 0x1b0;
        int32_t i_3 = 3;
        int32_t i_1;

        do
        {
            int32_t flagP1 = *(valA5 - 4);
            valA5 += 4;
            objC2 += 0x144;
            *(valA5 - 4) = flagP1 + 0x2d00;
            *(objC2 - 0x144) = 0;
            i_1 = i_3;
            i_3 -= 1;
        } while (i_1 != 1);
        float* tmpD1 = dstD;
        int32_t v_2c_1 = 0;

        if ((*(int32_t*)(uintptr_t)(ctxB + 0xe3c)) > 0)
        {
            bool cond_3_1;

            do
            {
                int32_t flagP3 = tmpD1[6];
                float* valA7 = (&v_10)[flagP3];
                void* valA8;

                if ((*(int32_t*)(uintptr_t)(ctxB + 0x5650)) != 1)
                {
                    valA7[3] = 0xffffff;
                    valA7[9] = valA;
                    valA8 = &valA7[0xc];
                    long double x87_r7_17 = *tmpD1;
                    *(valA8 - 0x18) = x87_r7_17;
                    *(valA8 - 0x30) = x87_r7_17;
                    long double x87_r7_18 = tmpD1[1];
                    *(valA8 - 0x14) = x87_r7_18;
                    *(valA8 - 0x2c) = x87_r7_18;
                    *(valA8 - 0x28) = v_20 + tmpD1[2];
                    *(valA8 - 0x10) = tmpD1[2];
                }
                else
                {
                    float v_1c_1 =
                        g_bcaae4 * tmpD1[1] + g_bcaae0 * *tmpD1 + g_bcaae8 * tmpD1[2];
                    float v_18_1 =
                        g_bcaaf0 * tmpD1[1] + g_bcaaec * *tmpD1 + g_bcaaf4 * tmpD1[2];
                    long double x87_r7_15 = g_bcaafc * tmpD1[1] + g_bcaaf8 * *tmpD1;
                    long double x87_r6_12 = g_bcab00 * tmpD1[2];
                    valA7[4] = 0;
                    valA7[5] = 0;
                    valA7[0xb] = 0;
                    valA7[0x10] = 0;
                    long double x87_r7_16 = x87_r7_15 + x87_r6_12;
                    long double x87_r6_14 = v_1c_1 - a1;
                    valA7[3] = 0xffffffff;
                    valA7[9] = 0xffffffff;
                    valA7[0xf] = 0xffffffff;
                    valA7[0x15] = 0xffffffff;
                    *valA7 = x87_r6_14;
                    long double x87_r5_2 = v_1c_1 + a1;
                    valA7[0xa] = 0x3f800000;
                    valA7[0x11] = 0x3f800000;
                    valA7[0x16] = 0x3f800000;
                    valA7[0x17] = 0x3f800000;
                    valA7[6] = x87_r5_2;
                    valA7[0xc] = x87_r6_14;
                    long double x87_r6_16 = v_18_1 - a1;
                    valA7[0x12] = x87_r5_2;
                    valA7[1] = x87_r6_16;
                    valA7[7] = x87_r6_16;
                    long double x87_r6_18 = v_18_1 + a1;
                    valA7[0xd] = x87_r6_18;
                    valA7[0x13] = x87_r6_18;
                    valA7[8] = x87_r7_16;
                    valA7[2] = x87_r7_16;
                    valA7[0xe] = x87_r7_16;
                    valA7[0x14] = x87_r7_16;
                    memcpy(&valA7[0x18], &valA7[6], 0x18);
                    valA8 = &valA7[0x24];
                    memcpy(&valA7[0x1e], &valA7[0xc], 0x18);
                }

                tmpD1 -= 0x1c;

                if (tmpD1 < ctxB + 0x57c)
                    tmpD1 = &tmpD1[(*(int32_t*)(uintptr_t)(ctxB + 0xe3c)) * 7];

                (&v_10)[flagP3] = valA8;
                int32_t valA10 = flagP3 * 0x51;
                (*(int32_t*)(uintptr_t)(ctxB + ((flagP3 * 0x51 + *(ctxB + (valA10 << 2) + 0x6c)) << 2) + 0x70)) = tmpD1[2];
                (*(int32_t*)(uintptr_t)(ctxB + (valA10 << 2) + 0x6c)) += 1;
                cond_3_1 = v_2c_1 + 1 < (*(int32_t*)(uintptr_t)(ctxB + 0xe3c));
                v_2c_1 += 1;
            } while (cond_3_1);
        }

        int32_t* valA14 = (*(int32_t*)(uintptr_t)(ctxB + 0x56cc));
        ((int(*)())(uintptr_t)(*(*valA14 + 0x10)))(valA14);
        int32_t valA15 = (*(int32_t*)(uintptr_t)(ctxB + 0x5650));

        if (valA15 == 1)
        {
            (*(int32_t*)(uintptr_t)(ctxB + 0x5658)) = g_bcaae0 * g_bcabec;
            (*(int32_t*)(uintptr_t)(ctxB + 0x565c)) = g_bcaae4 * g_bcabec;
            long double x87_r7_26 = g_bcaae8 * g_bcabec;
            (*(int32_t*)(uintptr_t)(ctxB + 0x5664)) = 0;
            (*(int32_t*)(uintptr_t)(ctxB + 0x5660)) = x87_r7_26;
            (*(int32_t*)(uintptr_t)(ctxB + 0x5668)) = g_bcaaec * g_bcabec;
            (*(int32_t*)(uintptr_t)(ctxB + 0x566c)) = g_bcaaf0 * g_bcabec;
            long double x87_r7_32 = g_bcaaf4 * g_bcabec;
            (*(int32_t*)(uintptr_t)(ctxB + 0x5674)) = 0;
            (*(int32_t*)(uintptr_t)(ctxB + 0x5670)) = x87_r7_32;
            (*(int32_t*)(uintptr_t)(ctxB + 0x5678)) = g_bcaaf8 * g_bcabec;
            (*(int32_t*)(uintptr_t)(ctxB + 0x567c)) = g_bcaafc * g_bcabec;
            long double x87_r7_38 = g_bcab00 * g_bcabec;
            (*(int32_t*)(uintptr_t)(ctxB + 0x5684)) = 0;
            (*(int32_t*)(uintptr_t)(ctxB + 0x5680)) = x87_r7_38;
            return valA15;
        }

        valA4 = g_bcabec;
        (*(int32_t*)(uintptr_t)(ctxB + 0x565c)) = 0;
        (*(int32_t*)(uintptr_t)(ctxB + 0x5658)) = valA4;
        (*(int32_t*)(uintptr_t)(ctxB + 0x5660)) = 0;
        (*(int32_t*)(uintptr_t)(ctxB + 0x5664)) = 0;
        (*(int32_t*)(uintptr_t)(ctxB + 0x5668)) = 0;
        int32_t objC12 = g_bcabec;
        (*(int32_t*)(uintptr_t)(ctxB + 0x5670)) = 0;
        (*(int32_t*)(uintptr_t)(ctxB + 0x566c)) = objC12;
        (*(int32_t*)(uintptr_t)(ctxB + 0x5674)) = 0;
        (*(int32_t*)(uintptr_t)(ctxB + 0x5678)) = 0;
        (*(int32_t*)(uintptr_t)(ctxB + 0x567c)) = 0;
        int32_t tmpD3 = g_bcabec;
        (*(int32_t*)(uintptr_t)(ctxB + 0x5684)) = 0;
        (*(int32_t*)(uintptr_t)(ctxB + 0x5680)) = tmpD3;
    }

    return valA4;
}
