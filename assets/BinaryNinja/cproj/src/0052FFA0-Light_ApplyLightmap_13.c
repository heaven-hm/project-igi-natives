#include "gi_platform.h"
#include "0052FFA0-Light_ApplyLightmap_13.h"
uint32_t Light_ApplyLightmap_13(void* a1, double* a2)

{
    double* dstD = a2;
    int32_t flagP = 0;
    int32_t tmpD = dstD[4];
    int32_t v_24 = 0;
    int32_t v_34 = 0;
    uint32_t objC1 = tmpD >> 1;
    int32_t v_30 = 0;
    long double fpu7 = objC1;
    uint32_t v_2c = objC1;
    int64_t v_18 = fabsl(fpu7 + *dstD - (*(int32_t*)(uintptr_t)(a1 + 0x4870)));

    if (v_18 > tmpD)
    {
    label_53003e: ;
        if ((*(int32_t*)(uintptr_t)(dstD + 0x1c)) > 0)
        {
            uint32_t valA2 = Light_RenderLensflare_13(a1, dstD);
            dstD[5] = 0;
            return valA2;
        }
    }
    else
    {
        v_18 = fabsl(fpu7 + dstD[1] - (*(int32_t*)(uintptr_t)(a1 + 0x4878)));

        if (v_18 > tmpD)
            goto label_53003e;

        int32_t v_24_1 = 0;
        long double x87_r7_4 = tmpD;
        long double f0_1 = 131072.0;
        x87_r7_4 - f0_1;

        if (*(&((x87_r7_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            goto label_53003e;

        int32_t v_24_2 = 0;
        long double x87_r7_6 = tmpD * 1.5.0f;
        long double f1_1 = (*(int32_t*)(uintptr_t)(a1 + 0x4a78));
        x87_r7_6 - f1_1;

        if (*(&((x87_r7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            goto label_53003e;
    }

    int32_t tmpD1 = (*(int32_t*)(uintptr_t)(dstD + 0x1c));
    dstD[5] = 1;
    int32_t valA3 = *((tmpD1 << 2) + &g_a84584);

    if (valA3 > 3)
        goto label_5300d3;

    double* tmpD2;

    switch (valA3)
    {
        case 0:
        {
            v_34 = 0;
            *((tmpD1 << 2) + &g_a84584) = valA3 + 1;
            tmpD2 = nullptr;
            v_30 = 0;
            a2 = nullptr;
            break;
        }
        case 1:
        {
            v_34 = 0;
            *((tmpD1 << 2) + &g_a84584) = valA3 + 1;
            tmpD2 = nullptr;
            v_30 = 2;
            a2 = nullptr;
            break;
        }
        case 2:
        {
            v_34 = 2;
            *((tmpD1 << 2) + &g_a84584) = valA3 + 1;
            tmpD2 = nullptr;
            v_30 = 0;
            a2 = nullptr;
            break;
        }
        case 3:
        {
            v_34 = 2;
            v_30 = 2;
    label_5300d3: ;
            *((tmpD1 << 2) + &g_a84584) = valA3 + 1;
            tmpD2 = nullptr;
            a2 = nullptr;
            break;
        }
    }

    double* valA25;

    while (true)
    {
        int32_t v_24_3 = 0;
        double v_10_1 = (tmpD2 * objC1);

        while (true)
        {
            int32_t v_1c_1 = 0;
            int32_t valA14 = flagP + ((tmpD2 + ((*(int32_t*)(uintptr_t)(dstD + 0x1c)) << 2) + v_34) << 2) + v_30;
            (*(int32_t*)(uintptr_t)(valA14 * 0x30 + a1 + 0xc6c)) = dstD;
            int32_t valA18 = (*(int32_t*)(uintptr_t)(dstD + 0x1c)) + 1;
            (*(int32_t*)(uintptr_t)(valA14 * 0x30 + a1 + 0xc60)) = objC1;
            (*(int32_t*)(uintptr_t)(valA14 * 0x30 + a1 + 0xc5c)) = valA18;
            (*(int32_t*)(uintptr_t)(valA14 * 0x30 + a1 + 0xc54)) = 0;
            int32_t objC2 = (*(int32_t*)(uintptr_t)(valA14 * 0x30 + a1 + 0xc5c));
            (*(int32_t*)(uintptr_t)(valA14 * 0x30 + a1 + 0xc40)) = v_10_1 + *dstD;
            (*(int32_t*)(uintptr_t)(valA14 * 0x30 + a1 + 0xc48)) = (flagP * objC1) + dstD[1];
            int32_t valA21 = (*(int32_t*)(uintptr_t)(a1 + 0x4abc));

            if (valA21 <= objC2)
                valA21 = objC2;

            (*(int32_t*)(uintptr_t)(a1 + 0x4abc)) = valA21;
            int32_t valA22 = (*(int32_t*)(uintptr_t)(valA14 * 0x30 + a1 + 0xc54));

            if (!tmpD2)
                valA22 |= 0x10;
            else
                valA22 |= 8;

            (*(int32_t*)(uintptr_t)(valA14 * 0x30 + a1 + 0xc54)) = valA22;

            if (!flagP)
                valA22 |= 4;
            else
                valA22 |= 2;

            *(&v_18 + 4) = 0;
            v_18 = (*(int32_t*)(uintptr_t)(valA14 * 0x30 + a1 + 0xc60));
            (*(int32_t*)(uintptr_t)(valA14 * 0x30 + a1 + 0xc54)) = valA22;
            long double x87_r7_13 = v_18;
            long double f2_1 = 131072.0;
            x87_r7_13 - f2_1;

            if (!(*(&((x87_r7_13 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_13, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                Light_ApplyLightmap_13(a1, valA14 * 0x30 + a1 + 0xc40);
            else
            {
                Light_RenderLensflare_13(a1, valA14 * 0x30 + a1 + 0xc40);
                (*(int32_t*)(uintptr_t)(valA14 * 0x30 + a1 + 0xc68)) = 0;
            }

            flagP += 1;

            if (flagP >= 2)
                break;

            objC1 = v_2c;
            tmpD2 = a2;
        }

        valA25 = a2 + 1;
        a2 = valA25;

        if (valA25 >= 2)
            break;

        objC1 = v_2c;
        tmpD2 = a2;
        flagP = 0;
    }

    return valA25;
}
