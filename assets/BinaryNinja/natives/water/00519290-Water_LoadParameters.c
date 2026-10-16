#include "Water_LoadParameters.h"
void* Water_LoadParameters(void* a1)

{
    int32_t valA = 0x40000000 >> (*(a1 + 0x4c24) & 0x1f);
    double v_20;
    memcpy(&v_20, a1 + 0x4bd0, 0x18);
    void* objC1 = *(a1 + 0xf0);
    int32_t valA1 = valA << 1;
    v_20 = *(objC1 + 0xde0) + v_20;
    double v_18;
    double v_18_1 = *(objC1 + 0xde4) + v_18;
    int32_t objC3 = -(valA1);
    double v_10;
    double v_10_1 = *(objC1 + 0xde8) + v_10;
    *(a1 + 0x4be8) = v_20 & objC3;
    *(a1 + 0x4bf0) = v_18_1 & objC3;
    *(a1 + 0x4bf8) = v_10_1 & objC3;
    long double x87_r7_12 = valA1;
    *(a1 + 0x4c00) = x87_r7_12 + *(a1 + 0x4be8);
    *(a1 + 0x4c08) = x87_r7_12 + *(a1 + 0x4bf0);
    *(a1 + 0x4c10) = x87_r7_12 + *(a1 + 0x4bf8);
    memcpy(&v_20, a1 + 0x4be8, 0x18);
    long double x87_r7_13 = x87_r7_12 * 0.5;
    v_20 = x87_r7_13 + v_20;
    void* objC4 = *(a1 + 0xf0);
    double v_18_2 = x87_r7_13 + v_18_1;
    long double x87_r7_14 = x87_r7_13 + v_10_1;
    double v_10_2 = x87_r7_14;
    v_20 = v_20 - *(objC4 + 0xde0);
    double v_18_3 = v_18_2 - *(objC4 + 0xde4);
    double v_10_3 = x87_r7_14 - *(objC4 + 0xde8);
    *(a1 + 0x4be8) = *(a1 + 0x4be8) - *(objC4 + 0xde0);
    *(a1 + 0x4bf0) = *(a1 + 0x4bf0) - *(*(a1 + 0xf0) + 0xde4);
    *(a1 + 0x4bf8) = *(a1 + 0x4bf8) - *(*(a1 + 0xf0) + 0xde8);
    *(a1 + 0x4c00) = *(a1 + 0x4c00) - *(*(a1 + 0xf0) + 0xde0);
    *(a1 + 0x4c08) = *(a1 + 0x4c08) - *(*(a1 + 0xf0) + 0xde4);
    *(a1 + 0x4c10) = *(a1 + 0x4c10) - *(*(a1 + 0xf0) + 0xde8);
    long double x87_r7_29 = valA1 * 0.000116257448f;
    *(a1 + 0x98) = x87_r7_29;
    void* valA3 = *(a1 + 0xf0);
    *(a1 + 0x9c) = x87_r7_29;
    *(a1 + 0xa0) = x87_r7_29;
    int32_t objC10 = DynObj_UpdateDynTree_8(valA3, a1, &v_20, a1 + 0x4be8, a1 + 0x4c00);
    int32_t valA4 = *(a1 + 0x4c34);
    int32_t v_28_2 = valA4;

    if (valA4 < 0x1000)
    {
        valA4 = 0x1000;
        v_28_2 = 0x1000;
    }

    int32_t v_3c_1 = objC10;
    *(a1 + 0x4c34) = valA4;
    int32_t srcS2 = 1 << (Display_OpenDevice_18(v_28_2) >> 3 & 0x1f);
    *(a1 + 0x4b94) = valA1;
    int32_t valA7;
    int32_t tmpD7;
    tmpD7 = HIGHD(valA1);
    valA7 = LOWD(valA1);
    int32_t i = *(a1 + 0x4c28);
    long double x87_r7_34 =
        (*(a1 + 0x4c18) * ((valA7 - tmpD7) >> 1) + *(a1 + 0x30)) / srcS2 * srcS2;
    memcpy(a1 + 0x4938, a1 + 0x4be8, 0x18);
    *(a1 + 0x4c1c) = x87_r7_34;
    *(a1 + 0x4b88) = x87_r7_34;
    int32_t* valA14 = &g_a80408;
    memcpy(a1 + 0x4950, a1 + 0x4c00, 0x18);
    int32_t objC14 = 0;

    while (*valA14 != i)
    {
        valA14 = &valA14[0xc];
        objC14 += 1;

        if (valA14 > 0xa81008)
            break;
    }

    int32_t tmpD9 = *(a1 + 0x4c2c);
    *(a1 + 0x4b9c) = *(a1 + 0x4c30);
    int32_t valA17 = objC14 * 0x30;
    *(a1 + 0x4b98) = tmpD9;
    *(a1 + 0x4b78) = *(valA17 + 0xa80420);
    long double x87_r6_17 = *(a1 + 0x4b78) * 1.10000002f;
    *(a1 + 0x4b7c) = *(valA17 + 0xa80424);
    *(a1 + 0x4ba4) = *(valA17 + 0xa80428);
    *(a1 + 0x4ba8) = *(valA17 + 0xa8042c);
    *(a1 + 0x4b8c) = x87_r6_17 + x87_r7_34;
    *(a1 + 0x4980) = *(valA17 + 0xa80410);
    *(a1 + 0x4984) = *(valA17 + 0xa80414);
    *(a1 + 0x4988) = *(valA17 + 0xa80418);
    *(a1 + 0x498c) = *(valA17 + 0xa8041c);
    *(a1 + 0x4b4c) = g_b818a0;
    *(a1 + 0x4b50) = g_b818a4;
    int32_t valA21 = *(a1 + 0x4c38);
    *(a1 + 0x4b54) = g_b818a8;
    void* valA22 = Terrain_RenderWaterSurface_9(valA21);
    int32_t objC19 = *(a1 + 0x4c3c);
    *(a1 + 0xf8) = valA22;
    void* valA23 = Terrain_RenderWaterSurface_9(objC19);
    int32_t tmpD17 = *(a1 + 0x4c40);
    *(a1 + 0xfc) = valA23;
    *(a1 + 0x100) = Terrain_RenderWaterSurface_9(tmpD17);
    *(a1 + 0x104) = Terrain_RenderWaterSurface_9(*(a1 + 0x4c44));
    return Light_UpdateGlobalLight_11(a1 + 0xf8);
}
