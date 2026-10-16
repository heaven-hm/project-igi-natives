#include "gi_platform.h"
#include "004EAEB0-SoundSys_EvaluateTrigger_14.h"
int32_t SoundSys_EvaluateTrigger_14(void* a1)

{
    double* v_2c = nullptr;
    float* v_28 = nullptr;
    void* srcS = (*(int32_t*)(uintptr_t)(a1 + 0x14));
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

    int32_t objC3 = v_24;

    if (objC3)
    {
        int32_t valA6 = (*(int32_t*)(uintptr_t)(a1 + 0xd8));

        if (valA6 != 0xffffffff)
        {
            long double x87_r7_19 = *(objC3 + (valA6 << 2) + 4);
            long double f2_1 = 0.0f;
            x87_r7_19 - f2_1;

            if (*(&((x87_r7_19 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_19, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_19 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                (*(int32_t*)(uintptr_t)(a1 + 0x30)) = 0;
            else
            {
                SoundSys_LoadSoundDef_8(a1 + 0x30, a1 + 0xe8, x87_r7_19);
                objC3 = v_24;
            }
        }

        int32_t valA10 = (*(int32_t*)(uintptr_t)(a1 + 0xdc));

        if (valA10 != 0xffffffff)
        {
            SoundSys_LoadSoundDef_8(a1 + 0x34, a1 + 0x114, *(objC3 + (valA10 << 2) + 4));
            objC3 = v_24;
        }

        int32_t valA12 = (*(int32_t*)(uintptr_t)(a1 + 0xe0));

        if (valA12 != 0xffffffff)
            (*(int32_t*)(uintptr_t)(a1 + 0x34)) = *(objC3 + (valA12 << 2) + 4) + (*(int32_t*)(uintptr_t)(a1 + 0x34));

        valA5 = (*(int32_t*)(uintptr_t)(a1 + 0xe4));

        if (valA5 != 0xffffffff)
        {
            char* objC5 = *(objC3 + (valA5 << 2) + 4);

            if (objC5)
            {
                char* dstD2 = a1 + 0x160;
                char* srcS2 = objC5;

                while (true)
                {
                    char tmpD4 = *srcS2;
                    valA5 = tmpD4;
                    char f5_1 = *dstD2;
                    bool c_1 = tmpD4 < f5_1;

                    if (tmpD4 == f5_1)
                    {
                        if (!valA5)
                        {
                            valA5 = nullptr;
                            break;
                        }

                        tmpD4 = srcS2[1];
                        valA5 = tmpD4;
                        char f8_1 = dstD2[1];
                        c_1 = tmpD4 < f8_1;

                        if (tmpD4 == f8_1)
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
                    char* dstD3 = objC5;
                    int32_t i = 0xffffffff;

                    while (i)
                    {
                        bool cond_1_1 = 0 != *dstD3;
                        dstD3 = &dstD3[1];
                        i -= 1;

                        if (!cond_1_1)
                            break;
                    }

                    int32_t objC6 = ~i;
                    int32_t srcS4;
                    int32_t dstD6;
                    dstD6 = memcpy(a1 + 0x160, dstD3 - objC6, objC6 & 0xfffffffc);
                    memcpy(dstD6, srcS4, objC6 & 3);
                    (*(int32_t*)(uintptr_t)(a1 + 0x180)) = Display_CheckCapabilities_12(a1 + 0x160);
                    (*(int32_t*)(uintptr_t)(a1 + 0x184)) = Display_RestoreDevice_12(a1 + 0x160);
                    (*(int32_t*)(uintptr_t)(a1 + 0x28)) = 0;
                }
            }
        }
    }

    long double x87_r7_22 = (*(int32_t*)(uintptr_t)(a1 + 0xb8));
    long double f0 = 0.0f;
    x87_r7_22 - f0;

    if (!(*(&((x87_r7_22 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, f0) ? 1 : 0) << 0xa
        | (x87_r7_22 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_23 = (*(int32_t*)(uintptr_t)(a1 + 0xb8));
        long double f1_1 = 1.0f;
        x87_r7_23 - f1_1;

        if (!(*(&((x87_r7_23 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            (*(int32_t*)(uintptr_t)(a1 + 0xb8)) = 0x3f800000;
    }
    else
        (*(int32_t*)(uintptr_t)(a1 + 0xb8)) = 0;

    long double x87_r7_24 = (*(int32_t*)(uintptr_t)(a1 + 0xbc));
    long double f3 = 0.0f;
    x87_r7_24 - f3;

    if (!(*(&((x87_r7_24 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_24, f3) ? 1 : 0) << 0xa
        | (x87_r7_24 == f3 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_25 = (*(int32_t*)(uintptr_t)(a1 + 0xbc));
        long double f4_1 = 1.0f;
        x87_r7_25 - f4_1;

        if (!(*(&((x87_r7_25 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_25, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_25 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            (*(int32_t*)(uintptr_t)(a1 + 0xbc)) = 0x3f800000;
    }
    else
        (*(int32_t*)(uintptr_t)(a1 + 0xbc)) = 0;

    long double x87_r7_27 = (*(int32_t*)(uintptr_t)(a1 + 0xbc)) * (*(int32_t*)(uintptr_t)(a1 + 0xb8));
    __builtin_memset(a1 + 0x68, 0, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x30)) = x87_r7_27 * (*(int32_t*)(uintptr_t)(a1 + 0x30));
    long double x87_r7_30 = (*(int32_t*)(uintptr_t)(a1 + 0xc0)) * (*(int32_t*)(uintptr_t)(a1 + 0x34));
    memcpy(a1 + 0x50, a1 + 0x88, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x34)) = x87_r7_30;
    (*(int32_t*)(uintptr_t)(a1 + 0x40)) = (*(int32_t*)(uintptr_t)(a1 + 0xc8));
    (*(int32_t*)(uintptr_t)(a1 + 0x48)) = (*(int32_t*)(uintptr_t)(a1 + 0xcc));
    int32_t result;
    long double fp0;
    fp0 = SoundSys_StopSoundSample_8(a1 + 0x30);
    (*(int32_t*)(uintptr_t)(a1 + 0xd0)) = fp0;
    return result;
}
