#include "gi_platform.h"
#include "00498BD0-Rain_Update.h"
int32_t Rain_Update(void* a1)

{
    double* ctxB = a1 + 0xe40;
    int32_t v_a0 = Camera_ApplyBandFilter_5((g_bcab08 - 59924.48193359375) * 9.1782186888072072e-05 + 0.5);
    double v_d0_1 = (g_bcab10 - 59924.48193359375) * 9.1782186888072072e-05 + 0.5;
    int32_t v_a0_1 = Camera_ApplyBandFilter_5(v_d0_1);
    int32_t objC3 = v_a0 % 0xc;
    int32_t valA5 = 0;
    int32_t srcS1 = v_a0_1 % 0xc;
    valA5 = objC3 >= 0;
    int32_t tmpD10 = 0;
    int32_t objC4 = objC3 + ((valA5 - 1) & 0xc);
    void* valA8 = a1;
    tmpD10 = srcS1 >= 0;
    *(valA8 + 0x5640) = objC4;
    int32_t srcS2 = srcS1 + ((tmpD10 - 1) & 0xc);
    bool cond_0 = *(valA8 + 0x56ad);
    double v_90 = (v_a0 - objC4) * 10895.3603515625;
    *(valA8 + 0x5644) = srcS2;
    double v_a0_2 = (v_a0_1 - srcS2) * 10895.3603515625;
    double v_b0;
    int32_t v_a4;

    if (cond_0)
    {
        float v_b8_2 = fabsl(g_bcab10 - *(valA8 + 0x56b8));
        int32_t v_b0_1 =
            Camera_ResetMatrix_6(fabsl(g_bcab08 - *(valA8 + 0x56b0)) * 9.1782189e-05.0f * 12.0f);
        v_d0_1 = v_b8_2 * 9.1782189e-05.0f * 12.0f;
        v_b0 = Camera_ResetMatrix_6(v_d0_1);
        valA8 = a1;
        v_a4 = v_b0_1 + v_b0;
    }
    else
        v_a4 = 0x2710;

    int32_t i = 0;
    memcpy(valA8 + 0x56b0, &g_bcab08, 0x18);
    void* objC8 = a1;
    int32_t i_1 = 0;
    *(objC8 + 0x56ad) = 1;

    do
    {
        int32_t v_98;
        int32_t v_94;

        if (i >= objC4)
        {
            v_98 = v_90;
            v_94 = *(&v_90 + 4);
        }
        else
            v_98 = v_90 + 130744.32421875;

        *(&v_b0 + 4) = *(&v_a0_2 + 4);
        int32_t j = 0;
        v_b0 = v_a0_2;
        int32_t j_1 = 0;

        do
        {
            long double x87_r7_26 = v_b0;

            if (j < srcS2)
                x87_r7_26 = x87_r7_26 + 130744.32421875;

            long double x87_r6_4 = *ctxB;
            long double f0_1 = v_98;
            x87_r6_4 - f0_1;
            long double f1_1;

            if (*(&((x87_r6_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, f0_1) ? 1 : 0) << 0xa
                | (x87_r6_4 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            {
                f1_1 = ctxB[1];
                x87_r7_26 - f1_1;
            }

            int32_t valA14;

            valA14 = !(*(&((x87_r6_4 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_4, f0_1) ? 1 : 0) << 0xa
                | (x87_r6_4 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
                (x87_r7_26 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_26, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_26 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) ? 0 : 0x20;

            int32_t srcS6 = (*(int32_t*)(uintptr_t)(ctxB + 0x1c)) & valA14;
            (*(int32_t*)(uintptr_t)(ctxB + 0x1c)) = srcS6;

            if (!srcS6)
            {
                bool cond_1_1 = v_a4 <= 0;
                v_a4 -= 1;

                if (!cond_1_1)
                {
                    double v_80 = -(*(objC8 + 0x5698));
                    *ctxB = v_98;
                    (*(int32_t*)(uintptr_t)(ctxB + 4)) = v_94;
                    ctxB[1] = x87_r7_26;
                    *(&v_d0_1 + 4) = 0xc8000000;
                    v_d0_1 = 0;
                    ctxB[2] = g_bcab18 + *(objC8 + 0x56a0);
                    char v_78;
                    DynObj_UpdateDynTree_10(*(objC8 + 0x68), &v_78, ctxB, 1, &v_80, 0xff,
                        -0xc800000000000000);
                    int32_t v_60;
                    ctxB[2] = v_60;
                    int32_t v_5c;
                    (*(int32_t*)(uintptr_t)(ctxB + 0x14)) = v_5c;
                    j = j_1;
                    memcpy(&ctxB[0x30], ctxB, 0x18);
                    memcpy(&ctxB[0x480], ctxB, 0x18);
                    (*(int32_t*)(uintptr_t)(ctxB + 0x1c)) = 0x20;
                    memcpy(&ctxB[0x4b0], ctxB, 0x18);
                    objC8 = a1;
                }
            }

            int32_t valA19 = (*(int32_t*)(uintptr_t)(ctxB + 0x1c));
            j += 1;
            (*(int32_t*)(uintptr_t)(ctxB + 0x19c)) = valA19;
            (*(int32_t*)(uintptr_t)(ctxB + 0x241c)) = valA19;
            (*(int32_t*)(uintptr_t)(ctxB + 0x259c)) = valA19;
            ctxB = &ctxB[4];
            j_1 = j;
            v_b0 = v_b0 + 10895.3603515625;
        } while (j <= 0xb);

        ctxB = &ctxB[0x30];
        i = i_1 + 1;
        i_1 = i;
        v_90 = v_90 + 10895.3603515625;
    } while (i <= 0xb);

    *(objC8 + 0x5648) = 0;
    return i;
}
