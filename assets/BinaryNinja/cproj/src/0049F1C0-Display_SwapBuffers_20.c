#include "gi_platform.h"
#include "0049F1C0-Display_SwapBuffers_20.h"
int32_t Display_SwapBuffers_20(double* a1)

{
    int32_t ctxB;
    int32_t v_1f4 = ctxB;
    int32_t flagP;
    int32_t v_1f8 = flagP;
    int32_t srcS;
    int32_t v_1fc = srcS;
    void* flagP1 = a1[0xb];
    int32_t v_1b0 = (*(int32_t*)(uintptr_t)(a1 + 0x54));
    bool cond_0 = !a1[0xc];
    void* valA2 = g_bcade8;
    int32_t dstD;
    int32_t v_200 = dstD;
    int32_t* esp_1 = &v_200;

    if (cond_0)
    {
        int32_t objC7 = g_7205b0;

        if (*(valA2 + 4) != objC7)
        {
            *(valA2 + 4) = objC7;
            int32_t v_204_5 = 0;
            ((int(*)())(uintptr_t)(*(g_bcade8 + (g_7205b0 << 2) + 0x14)))(0);
            esp_1 = &v_200;
        }

        void* valA9 = g_bcad7c;
        int32_t objC9 = g_7205b8;

        if (*(valA9 + 4) != objC9)
        {
            *(valA9 + 4) = objC9;
            int32_t v_204_6 = 0;
            ((int(*)())(uintptr_t)(*(g_bcad7c + (g_7205b8 << 2) + 0x14)))(0);
            esp_1 = &v_200;
        }

        void* valA11 = g_bcadac;
        int32_t objC10 = g_7205bc;

        if (*(valA11 + 4) != objC10)
        {
            *(valA11 + 4) = objC10;
            int32_t v_204_7 = 0;
            ((int(*)())(uintptr_t)(*(g_bcadac + (g_7205bc << 2) + 0x14)))(0);
            esp_1 = &v_200;
        }

        void* valA12 = g_bcadc4;
        int32_t objC12 = g_bcacec;

        if (*(valA12 + 4) != objC12)
        {
            *(valA12 + 4) = objC12;
            int32_t v_204_8 = 0;
            ((int(*)())(uintptr_t)(*(g_bcadc4 + (g_bcacec << 2) + 0x14)))(0);
            esp_1 = &v_1fc;
        }
    }
    else
    {
        int32_t objC = g_723504;

        if (*(valA2 + 4) != objC)
        {
            *(valA2 + 4) = objC;
            int32_t v_204_1 = 0;
            ((int(*)())(uintptr_t)(*(g_bcade8 + (g_723504 << 2) + 0x14)))(0);
            esp_1 = &v_200;
        }

        void* valA3 = g_bcad7c;
        int32_t objC2 = g_7205b8;

        if (*(valA3 + 4) != objC2)
        {
            *(valA3 + 4) = objC2;
            int32_t v_204_2 = 0;
            ((int(*)())(uintptr_t)(*(g_bcad7c + (g_7205b8 << 2) + 0x14)))(0);
            esp_1 = &v_200;
        }

        void* valA5 = g_bcadac;
        int32_t objC4 = g_723508;

        if (*(valA5 + 4) != objC4)
        {
            *(valA5 + 4) = objC4;
            int32_t v_204_3 = 0;
            ((int(*)())(uintptr_t)(*(g_bcadac + (g_723508 << 2) + 0x14)))(0);
            esp_1 = &v_200;
        }

        void* valA7 = g_bcadc4;
        int32_t objC5 = g_bcacec;

        if (*(valA7 + 4) != objC5)
        {
            *(valA7 + 4) = objC5;
            int32_t v_204_4 = 0;
            ((int(*)())(uintptr_t)(*(g_bcadc4 + (g_bcacec << 2) + 0x14)))(0);
            esp_1 = &v_1fc;
        }
    }

    void* objC14 = a1[0xa];
    void* valA14 = *(*(objC14 + 0xc) + 0xc);
    long double x87_r7_3 =
        a1[4] * *(valA14 + 0x38) + (*(int32_t*)(uintptr_t)(a1 + 0x1c)) * *(valA14 + 0x34) + a1[3] * *(valA14 + 0x30);
    long double x87_r6_7 = (*(int32_t*)(uintptr_t)(a1 + 0x2c)) * *(valA14 + 0x38) + a1[5] * *(valA14 + 0x34)
        + (*(int32_t*)(uintptr_t)(a1 + 0x24)) * *(valA14 + 0x30);
    esp_1[5] = x87_r6_7;
    long double x87_r6_11 =
        a1[7] * *(valA14 + 0x38) + (*(int32_t*)(uintptr_t)(a1 + 0x34)) * *(valA14 + 0x34) + a1[6] * *(valA14 + 0x30);
    esp_1[6] = x87_r6_11;
    *(esp_1 + 0x58) = x87_r7_3 + *a1;
    *(esp_1 + 0x60) = esp_1[5] + a1[1];
    *(esp_1 + 0x68) = esp_1[6] + a1[2];
    *(esp_1 - 4) = *(*(*(objC14 + 0xc) + 0xc) + 0x3c);
    *(esp_1 - 8) = &esp_1[0x16];
    Display_CreateSurface_18();
    void* esp_25;

    if (!(*(flagP1 + 0x1c) & 1))
    {
        int32_t* valA25 = g_5ca114;
        int32_t tmpD11 = *valA25;
        int32_t* valA26;
        int32_t objC19;
        void* esp_30;

        if (!a1[0xc])
        {
            *(esp_1 - 4) = 1;
            *(esp_1 - 8) = 0x89;
            *(esp_1 - 0xc) = valA25;
            ((int(*)())(uintptr_t)(*(tmpD11 + 0x50)))();
            valA26 = g_5ca114;
            *(esp_1 - 4) = 4;
            esp_30 = esp_1 - 4;
            objC19 = *valA26;
        }
        else
        {
            *(esp_1 - 4) = 0;
            *(esp_1 - 8) = 0x89;
            *(esp_1 - 0xc) = valA25;
            ((int(*)())(uintptr_t)(*(tmpD11 + 0x50)))();
            valA26 = g_5ca114;
            *(esp_1 - 4) = 2;
            esp_30 = esp_1 - 4;
            objC19 = *valA26;
        }

        *(esp_30 - 4) = 1;
        *(esp_30 - 8) = 0;
        *(esp_30 - 0xc) = valA26;
        ((int(*)())(uintptr_t)(*(objC19 + 0x94)))();
        int32_t* valA27 = g_5ca114;
        *esp_30 = 1;
        *(esp_30 - 4) = 0x1b;
        *(esp_30 - 8) = valA27;
        ((int(*)())(uintptr_t)(*(*valA27 + 0x50)))();
        int32_t* valA28 = g_5ca114;
        *esp_30 = 5;
        *(esp_30 - 4) = 0x13;
        *(esp_30 - 8) = valA28;
        ((int(*)())(uintptr_t)(*(*valA28 + 0x50)))();
        int32_t* valA29 = g_5ca114;
        *esp_30 = 6;
        *(esp_30 - 4) = 0x14;
        *(esp_30 - 8) = valA29;
        ((int(*)())(uintptr_t)(*(*valA29 + 0x50)))();
        esp_25 = esp_30 + 4;
    }
    else
    {
        int32_t* valA19 = g_5ca114;
        *(esp_1 - 4) = 0;
        *(esp_1 - 8) = 0x89;
        *(esp_1 - 0xc) = valA19;
        ((int(*)())(uintptr_t)(*(*valA19 + 0x50)))();
        int32_t* valA20 = g_5ca114;
        *(esp_1 - 4) = 2;
        *(esp_1 - 8) = 1;
        *(esp_1 - 0xc) = 0;
        int32_t tmpD9 = *valA20;
        *(esp_1 - 0x10) = valA20;
        ((int(*)())(uintptr_t)(*(tmpD9 + 0x94)))();
        int32_t* valA21 = g_5ca114;
        *(esp_1 - 4) = 1;
        *(esp_1 - 8) = 0x1b;
        *(esp_1 - 0xc) = valA21;
        ((int(*)())(uintptr_t)(*(*valA21 + 0x50)))();
        int32_t* valA22 = g_5ca114;
        *(esp_1 - 4) = 2;
        *(esp_1 - 8) = 0x13;
        *(esp_1 - 0xc) = valA22;
        ((int(*)())(uintptr_t)(*(*valA22 + 0x50)))();
        int32_t* valA23 = g_5ca114;
        *(esp_1 - 4) = 2;
        *(esp_1 - 8) = 0x14;
        *(esp_1 - 0xc) = valA23;
        ((int(*)())(uintptr_t)(*(*valA23 + 0x50)))();
        esp_25 = esp_1;
    }

    int32_t* valA30 = g_5ca114;
    int32_t tmpD14 = 0;
    tmpD14 = *(flagP1 + 0x1f);
    int32_t objC21 = *valA30;
    *(esp_25 - 4) = -((tmpD14 + 1)) << 0x18;
    *(esp_25 - 8) = 0x3c;
    *(esp_25 - 0xc) = valA30;
    ((int(*)())(uintptr_t)(*(objC21 + 0x50)))();
    long double x87_r7_10 = *a1 - g_bcab08;
    *(esp_25 + 0x20) = a1[1] - g_bcab10;
    *(esp_25 + 0x24) = a1[2] - g_bcab18;
    long double x87_r6_17 = g_bcabec * x87_r7_10;
    memcpy(esp_25 + 0x28, &a1[3], 0x28);
    *(esp_25 + 0x1c) = x87_r6_17;
    *(esp_25 + 0x20) = g_bcabec * *(esp_25 + 0x20);
    long double x87_r7_15 = g_bcabec * *(esp_25 + 0x24);
    *(esp_25 - 4) = esp_25 + 0x1c;
    *(esp_25 - 8) = esp_25 + 0x28;
    *(esp_25 - 0xc) = esp_25 + 0x118;
    *(esp_25 + 0x24) = x87_r7_15;
    long double x87_r7_17 = g_bcabec * a1[8];
    *(esp_25 + 0x14) = g_bcabec * (*(int32_t*)(uintptr_t)(a1 + 0x44));
    *(esp_25 + 0x18) = g_bcabec * a1[9];
    *(esp_25 + 0x28) = *(esp_25 + 0x28) * x87_r7_17;
    *(esp_25 + 0x2c) = *(esp_25 + 0x2c) * *(esp_25 + 0x14);
    *(esp_25 + 0x30) = *(esp_25 + 0x30) * *(esp_25 + 0x18);
    *(esp_25 + 0x34) = *(esp_25 + 0x34) * x87_r7_17;
    *(esp_25 + 0x38) = *(esp_25 + 0x38) * *(esp_25 + 0x14);
    *(esp_25 + 0x3c) = *(esp_25 + 0x3c) * *(esp_25 + 0x18);
    *(esp_25 + 0x40) = *(esp_25 + 0x40) * x87_r7_17;
    *(esp_25 + 0x44) = *(esp_25 + 0x44) * *(esp_25 + 0x14);
    *(esp_25 + 0x48) = *(esp_25 + 0x48) * *(esp_25 + 0x18);
    Display_SetGammaRamp_7();
    int32_t* valA32 = g_5ca114;
    int32_t objC23 = *valA32;
    *(esp_25 - 4) = esp_25 + 0x118;
    *(esp_25 - 8) = 1;
    *(esp_25 - 0xc) = valA32;
    ((int(*)())(uintptr_t)(*(objC23 + 0x2c)))();
    int32_t* esp_61 = esp_25;

    if (!(*(int32_t*)(uintptr_t)(a1 + 0x5c)))
    {
        long double x87_r7_24 = g_b81700 * g_bcabc4;
        int32_t valA34 = g_b81700;
        memcpy(&esp_61[0x56], &g_bcaae0, 0xa8);
        esp_61[0x15] = x87_r7_24;
        memcpy(&esp_61[0x1c], &esp_61[0x56], 0xa8);
        esp_61[0x2c] = valA34;
        long double x87_r7_26 = Display_ClearSurfaces_4() * g_bcabc0;
        esp_61[0x2d] = esp_61[0x15] / x87_r7_26;
        esp_61[0x2e] = g_bcabc8 / esp_61[0x2c];
        long double x87_r7_31 = Display_ClearSurfaces_4() * esp_61[0x2e];
        esp_61[0x34] = 0;
        *(esp_61 - 4) = &esp_61[0x1c];
        esp_61[0x2f] = x87_r7_31;
        Transcontext_SetActiveTransContext();
    }

    int16_t valA35 = *(flagP1 + 0x10);

    if (valA35 != 0xffff)
    {
        int32_t* objC25 = g_5ca114;
        int32_t tmpD20 = *objC25;
        *(esp_61 - 4) = (*(int32_t*)(uintptr_t)(*(*(a1[0xa] + 0x10) + (valA35 << 2)) + 0x20));
        *(esp_61 - 8) = 0;
        *(esp_61 - 0xc) = objC25;
        ((int(*)())(uintptr_t)(*(tmpD20 + 0x8c)))();
        void* esp_66 = esp_61;
        int32_t objC26 = a1[0xc];

        if (objC26)
        {
            int32_t valA39 = 0;
            int32_t* tmpD21 = g_5ca114;
            valA39 = *(flagP1 + 0x12);
            int32_t srcS5 = *tmpD21;
            *(esp_66 - 4) = *(objC26 + valA39 * 0x2c + 0x5c);
            *(esp_66 - 8) = 1;
            *(esp_66 - 0xc) = tmpD21;
            ((int(*)())(uintptr_t)(*(srcS5 + 0x8c)))();
        }

        int32_t objC28 = 0;
        *(esp_66 - 4) = 0;
        objC28 = *(flagP1 + 0xc);
        int32_t srcS6 = 0;
        *(esp_66 - 8) = objC28;
        *(esp_66 - 0xc) = flagP1 + 0x20;
        int32_t objC30 = 0;
        objC30 = *(flagP1 + 0x16);
        int32_t dstD5 = 0;
        dstD5 = *(flagP1 + 0x14);
        *(esp_66 - 0x10) = objC30;
        int32_t* objC31 = *(esp_66 + 0x50);
        int32_t* valA41 = g_5ca114;
        srcS6 = objC31[0xb];
        int32_t tmpD22 = *valA41;
        *(esp_66 - 0x14) = srcS6 + dstD5;
        int32_t objC32 = *objC31;
        *(esp_66 - 0x18) = *objC31[0xc];
        *(esp_66 - 0x1c) = objC32;
        *(esp_66 - 0x20) = valA41;
        ((int(*)())(uintptr_t)(*(tmpD22 + 0x80)))();
        esp_61 = esp_66;
    }

    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x5c));
    *esp_61;
    esp_61[1];
    esp_61[2];
    esp_61[3];

    if (result)
        return result;

    esp_61[3] = &esp_61[0x56];
    return Transcontext_SetActiveTransContext();
}
