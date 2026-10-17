// Original IGI.EXE function: SoundSys_SetFrequency_13 (VA 0x004E8DC0; static CFG gate FAIL, CFG score 0.833).
#include "SoundSys_SetFrequency_13.h"
int32_t SoundSys_SetFrequency_13(void* a1)

{
    double* v_2c = nullptr;
    float* v_28 = nullptr;
    void* srcS = *(a1 + 0x14);
    int32_t v_24 = 0;
    uint32_t valA1 = SoundSys_SetFrequency_5();
    int32_t tmpD = 0;
    tmpD = *(srcS + 0x1c);
    int32_t valA2 = *(((valA1 * 0x180 + tmpD) << 2) + &g_a96ae0);

    if (valA2)
        valA2(srcS, &v_2c);

    Display_SetGammaRamp_12(a1 + 0x30);
    memcpy(a1 + 0x88, a1 + 0xa0, 0x18);

    if (v_28)
    {
        double v_20 =
            v_28[2] * *(a1 + 0x98) + v_28[1] * *(a1 + 0x90) + *v_28 * *(a1 + 0x88);
        double v_18_1 =
            v_28[5] * *(a1 + 0x98) + v_28[3] * *(a1 + 0x88) + v_28[4] * *(a1 + 0x90);
        double v_10_1 =
            v_28[8] * *(a1 + 0x98) + v_28[6] * *(a1 + 0x88) + v_28[7] * *(a1 + 0x90);
        memcpy(a1 + 0x88, &v_20, 0x18);
    }

    double* valA5 = v_2c;

    if (valA5)
    {
        *(a1 + 0x88) = *(a1 + 0x88) + *valA5;
        *(a1 + 0x90) = valA5[1] + *(a1 + 0x90);
        *(a1 + 0x98) = valA5[2] + *(a1 + 0x98);
    }

    if (v_24)
    {
        int32_t valA6 = *(a1 + 0xb8);

        if (valA6 != 0xffffffff)
            *(a1 + 0x30) = *(v_24 + (valA6 << 2) + 4);

        int32_t valA7 = *(a1 + 0xbc);

        if (valA7 != 0xffffffff)
            *(a1 + 0x34) = *(v_24 + (valA7 << 2) + 4);

        valA5 = *(a1 + 0xc0);

        if (valA5 != 0xffffffff)
        {
            char* objC4 = *(v_24 + (valA5 << 2) + 4);

            if (objC4)
            {
                char* dstD2 = a1 + 0xff;
                char* srcS2 = objC4;

                while (true)
                {
                    char tmpD2 = *srcS2;
                    valA5 = tmpD2;
                    char f4_1 = *dstD2;
                    bool c_1 = tmpD2 < f4_1;

                    if (tmpD2 == f4_1)
                    {
                        if (!valA5)
                        {
                            valA5 = nullptr;
                            break;
                        }

                        tmpD2 = srcS2[1];
                        valA5 = tmpD2;
                        char f7_1 = dstD2[1];
                        c_1 = tmpD2 < f7_1;

                        if (tmpD2 == f7_1)
                        {
                            srcS2 = &srcS2[2];
                            dstD2 = &dstD2[2];

                            if (valA5)
                                continue;

                            valA5 = nullptr;
                            break;
                        }
                    }

                    valA5 = valA5 - valA5 + 1;
                    break;
                }

                if (valA5)
                {
                    char* dstD3 = objC4;
                    int32_t i = 0xffffffff;

                    while (i)
                    {
                        bool cond_1_1 = 0 != *dstD3;
                        dstD3 = &dstD3[1];
                        i -= 1;

                        if (!cond_1_1)
                            break;
                    }

                    int32_t objC5 = ~i;
                    int32_t srcS4;
                    int32_t dstD6;
                    dstD6 = memcpy(a1 + 0xff, dstD3 - objC5, objC5 & 0xfffffffc);
                    memcpy(dstD6, srcS4, objC5 & 3);
                    *(a1 + 0x128) = Display_CheckCapabilities_12(a1 + 0xff);
                    *(a1 + 0x12c) = Display_RestoreDevice_12(a1 + 0xff);
                    *(a1 + 0x28) = 0;
                }
            }
        }
    }

    long double x87_r7_19 = *(a1 + 0xc4);
    long double f0 = 0f;
    x87_r7_19 - f0;

    if (!(*(&((x87_r7_19 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, f0) ? 1 : 0) << 0xa
        | (x87_r7_19 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_20 = *(a1 + 0xc4);
        long double f1_1 = 1f;
        x87_r7_20 - f1_1;

        if (!(*(&((x87_r7_20 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_20, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_20 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(a1 + 0xc4) = 0x3f800000;
    }
    else
        *(a1 + 0xc4) = 0;

    long double x87_r7_21 = *(a1 + 0xc8);
    long double f2 = 0f;
    x87_r7_21 - f2;

    if (!(*(&((x87_r7_21 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, f2) ? 1 : 0) << 0xa
        | (x87_r7_21 == f2 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_22 = *(a1 + 0xc8);
        long double f3_1 = 1f;
        x87_r7_22 - f3_1;

        if (!(*(&((x87_r7_22 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_22 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(a1 + 0xc8) = 0x3f800000;
    }
    else
        *(a1 + 0xc8) = 0;

    long double x87_r7_25 = *(a1 + 0xc4) * *(a1 + 0xc8) * *(a1 + 0x30);
    memcpy(a1 + 0x50, a1 + 0x88, 0x18);
    *(a1 + 0x30) = x87_r7_25;
    *(a1 + 0x40) = *(a1 + 0xd0);
    *(a1 + 0x48) = *(a1 + 0xd4);
    long double x87_r7_29 = *(a1 + 0xcc) * *(a1 + 0x34);
    *(a1 + 0x68) = 0;
    *(a1 + 0x70) = 0;
    *(a1 + 0x34) = x87_r7_29;
    *(a1 + 0x78) = 0;
    *(a1 + 0x6c) = 0;
    *(a1 + 0x74) = 0;
    *(a1 + 0x7c) = 0;
    *(a1 + 0x80) = *(a1 + 0x120);
    int32_t result;
    long double fp0;
    fp0 = SoundSys_StopSoundSample_8(a1 + 0x30);
    *(a1 + 0xd8) = fp0;
    return result;
}
