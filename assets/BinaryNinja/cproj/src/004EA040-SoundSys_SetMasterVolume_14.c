#include "gi_platform.h"
#include "004EA040-SoundSys_SetMasterVolume_14.h"
int32_t SoundSys_SetMasterVolume_14(void* a1)

{
    double* v_2c = nullptr;
    float* v_28 = nullptr;
    void* srcS = (*(int32_t*)(uintptr_t)(a1 + 0x14));
    char v_35 = 0;
    int32_t v_24 = 0;
    uint32_t valA1 = SoundSys_SetFrequency_5();
    int32_t tmpD = 0;
    tmpD = (*(int32_t*)(uintptr_t)(srcS + 0x1c));
    int32_t valA2 = *(((valA1 * 0x180 + tmpD) << 2) + &g_a96ae0);

    if (valA2)
        valA2(srcS, &v_2c);

    Display_SetGammaRamp_12(a1 + 0x30);
    memcpy(a1 + 0x88, a1 + 0xa0, 0x18);

    if (v_28)
    {
        double v_20 =
            v_28[1] * (*(int32_t*)(uintptr_t)(a1 + 0x90)) + v_28[2] * (*(int32_t*)(uintptr_t)(a1 + 0x98)) + *v_28 * (*(int32_t*)(uintptr_t)(a1 + 0x88));
        double v_18_1 =
            v_28[4] * (*(int32_t*)(uintptr_t)(a1 + 0x90)) + v_28[5] * (*(int32_t*)(uintptr_t)(a1 + 0x98)) + v_28[3] * (*(int32_t*)(uintptr_t)(a1 + 0x88));
        double v_10_1 =
            v_28[7] * (*(int32_t*)(uintptr_t)(a1 + 0x90)) + v_28[8] * (*(int32_t*)(uintptr_t)(a1 + 0x98)) + v_28[6] * (*(int32_t*)(uintptr_t)(a1 + 0x88));
        memcpy(a1 + 0x88, &v_20, 0x18);
    }

    double* valA5 = v_2c;

    if (valA5)
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x88)) = *valA5 + (*(int32_t*)(uintptr_t)(a1 + 0x88));
        (*(int32_t*)(uintptr_t)(a1 + 0x90)) = valA5[1] + (*(int32_t*)(uintptr_t)(a1 + 0x90));
        (*(int32_t*)(uintptr_t)(a1 + 0x98)) = valA5[2] + (*(int32_t*)(uintptr_t)(a1 + 0x98));
    }

    if (v_24)
    {
        int32_t valA6 = (*(int32_t*)(uintptr_t)(a1 + 0xd4));

        if (valA6 != 0xffffffff)
            (*(int32_t*)(uintptr_t)(a1 + 0x30)) = *(v_24 + (valA6 << 2) + 4);

        int32_t valA7 = (*(int32_t*)(uintptr_t)(a1 + 0xd8));

        if (valA7 != 0xffffffff)
            (*(int32_t*)(uintptr_t)(a1 + 0x34)) = *(v_24 + (valA7 << 2) + 4);

        int32_t valA9 = (*(int32_t*)(uintptr_t)(a1 + 0xd0));

        if (valA9 != 0xffffffff)
        {
            long double x87_r7_19 = *(v_24 + (valA9 << 2) + 4);

            if (!(*(int32_t*)(uintptr_t)(a1 + 0xe1)))
                v_35 = x87_r7_19;
            else
            {
                long double f4_1 = 0.0f;
                x87_r7_19 - f4_1;

                v_35 = !(*(&((x87_r7_19 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_19, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_19 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40) ? 0 : 1;
            }
        }

        valA5 = (*(int32_t*)(uintptr_t)(a1 + 0xdc));

        if (valA5 != 0xffffffff)
        {
            char* objC4 = *(v_24 + (valA5 << 2) + 4);

            if (objC4)
            {
                char* dstD2 = a1 + 0x103;
                char* srcS2 = objC4;

                while (true)
                {
                    char tmpD2 = *srcS2;
                    valA5 = tmpD2;
                    char f5_1 = *dstD2;
                    bool c_1 = tmpD2 < f5_1;

                    if (tmpD2 == f5_1)
                    {
                        if (!valA5)
                        {
                            valA5 = nullptr;
                            break;
                        }

                        tmpD2 = srcS2[1];
                        valA5 = tmpD2;
                        char f10_1 = dstD2[1];
                        c_1 = tmpD2 < f10_1;

                        if (tmpD2 == f10_1)
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
                    dstD6 = memcpy(a1 + 0x103, dstD3 - objC5, objC5 & 0xfffffffc);
                    memcpy(dstD6, srcS4, objC5 & 3);
                    (*(int32_t*)(uintptr_t)(a1 + 0x130)) = Display_CheckCapabilities_12(a1 + 0x103);
                    (*(int32_t*)(uintptr_t)(a1 + 0x134)) = Display_RestoreDevice_12(a1 + 0x103);
                    (*(int32_t*)(uintptr_t)(a1 + 0x28)) = 0;
                }
            }
        }
    }

    long double x87_r7_20 = (*(int32_t*)(uintptr_t)(a1 + 0xb8));
    long double f0 = 0.0f;
    x87_r7_20 - f0;

    if (!(*(&((x87_r7_20 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_20, f0) ? 1 : 0) << 0xa
        | (x87_r7_20 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_21 = (*(int32_t*)(uintptr_t)(a1 + 0xb8));
        long double f1_1 = 1.0f;
        x87_r7_21 - f1_1;

        if (!(*(&((x87_r7_21 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_21, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_21 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            (*(int32_t*)(uintptr_t)(a1 + 0xb8)) = 0x3f800000;
    }
    else
        (*(int32_t*)(uintptr_t)(a1 + 0xb8)) = 0;

    long double x87_r7_22 = (*(int32_t*)(uintptr_t)(a1 + 0xbc));
    long double f2 = 0.0f;
    x87_r7_22 - f2;

    if (!(*(&((x87_r7_22 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, f2) ? 1 : 0) << 0xa
        | (x87_r7_22 == f2 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_23 = (*(int32_t*)(uintptr_t)(a1 + 0xbc));
        long double f3_1 = 1.0f;
        x87_r7_23 - f3_1;

        if (!(*(&((x87_r7_23 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            (*(int32_t*)(uintptr_t)(a1 + 0xbc)) = 0x3f800000;
    }
    else
        (*(int32_t*)(uintptr_t)(a1 + 0xbc)) = 0;

    long double x87_r7_26 = (*(int32_t*)(uintptr_t)(a1 + 0xb8)) * (*(int32_t*)(uintptr_t)(a1 + 0xbc)) * (*(int32_t*)(uintptr_t)(a1 + 0x30));
    memcpy(a1 + 0x50, a1 + 0x88, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x30)) = x87_r7_26;
    (*(int32_t*)(uintptr_t)(a1 + 0x40)) = (*(int32_t*)(uintptr_t)(a1 + 0xc4));
    (*(int32_t*)(uintptr_t)(a1 + 0x48)) = (*(int32_t*)(uintptr_t)(a1 + 0xc8));
    long double x87_r7_30 = (*(int32_t*)(uintptr_t)(a1 + 0xc0)) * (*(int32_t*)(uintptr_t)(a1 + 0x34));
    (*(int32_t*)(uintptr_t)(a1 + 0x68)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x70)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x34)) = x87_r7_30;
    (*(int32_t*)(uintptr_t)(a1 + 0x78)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x74)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x80)) = (*(int32_t*)(uintptr_t)(a1 + 0x128));
    int16_t result;
    long double fp0;
    fp0 = SoundSys_StopSoundSample_8(a1 + 0x30);
    result = (*(int32_t*)(uintptr_t)(a1 + 0x123));
    (*(int32_t*)(uintptr_t)(a1 + 0xcc)) = fp0;

    if (!result)
    {
        result = v_35;

        if (result)
        {
            (*(int32_t*)(uintptr_t)(a1 + 0x128)) = 0;
            (*(int32_t*)(uintptr_t)(a1 + 0x123)) = 1;
        }
    }
    else
    {
        long double x87_r7_32 = (*(int32_t*)(uintptr_t)(a1 + 0x12c));
        long double f6_1 = 0.0f;
        x87_r7_32 - f6_1;
        result = (x87_r7_32 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_32, f6_1) ? 1 : 0) << 0xa
            | (x87_r7_32 == f6_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            result = (*(int32_t*)(uintptr_t)(a1 + 0xe0));

            if (result)
            {
    label_4ea394: ;
                result = v_35;

                if (!result)
                    (*(int32_t*)(uintptr_t)(a1 + 0x123)) = 0;
            }
            else
            {
                result = SoundSys_SetFrequency_8(a1 + 0x20);
                result = !result;

                if (result)
                    goto label_4ea394;
            }
        }
        else
        {
            long double x87_r7_33 = (*(int32_t*)(uintptr_t)(a1 + 0x128));
            long double f9_1 = (*(int32_t*)(uintptr_t)(a1 + 0x12c));
            x87_r7_33 - f9_1;
            result = (x87_r7_33 < f9_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_33, f9_1) ? 1 : 0) << 0xa
                | (x87_r7_33 == f9_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 1))
                goto label_4ea394;
        }
    }

    return result;
}
