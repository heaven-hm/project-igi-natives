#include "DiscardTerrainArea_Setup.h"
void* DiscardTerrainArea_Setup(int32_t a1)

{
    void* result = g_a44344;
    int32_t flagP = 0x40000000 >> (*(a1 + 0x68) & 0x1f);
    double v_48;
    memcpy(&v_48, a1 + 0x20, 0x18);
    v_48 = *(result + 0xde0) + v_48;
    int32_t flagP1 = flagP << 1;
    int32_t v_58 = flagP1;
    int32_t objC2 = -(flagP1);
    long double x87_r7_7 = v_48 & objC2;
    double v_40;
    double v_28 = (*(result + 0xde4) + v_40) & objC2;
    double v_38;
    long double x87_r6_3 = (*(result + 0xde8) + v_38) & objC2;
    double v_20 = x87_r6_3;
    long double fpu5 = v_58;
    double v_18 = fpu5 + x87_r7_7;
    double v_10 = fpu5 + v_28;
    double v_8 = fpu5 + x87_r6_3;
    long double x87_r5_1 = fpu5 * 0.5;
    v_48 = x87_r5_1 + x87_r7_7;
    double v_40_2 = x87_r5_1 + v_28;
    long double x87_r6_4 = x87_r6_3 + x87_r5_1;
    double v_38_2 = x87_r6_4;
    v_48 = v_48 - *(result + 0xde0);
    double v_40_3 = v_40_2 - *(result + 0xde4);
    double v_38_3 = x87_r6_4 - *(result + 0xde8);
    v_58 = *(result + 0xde0);
    double v_30 = x87_r7_7 - v_58;
    long double x87_r7_9 = *(result + 0xde4);
    double v_28_1 = v_28 - x87_r7_9;
    long double x87_r6_9 = *(result + 0xde8);
    result = *(a1 + 0x70);
    double v_20_1 = v_20 - x87_r6_9;
    memcpy(a1 + 0x38, &v_30, 0x18);
    v_18 = v_18 - v_58;
    double v_10_1 = v_10 - x87_r7_9;
    double v_8_1 = v_8 - x87_r6_9;
    memcpy(a1 + 0x50, &v_18, 0x18);

    if (result)
    {
        QTask_CleanupTypes(a1);
        result = Light_UpdateGlobalLight_8(a1, *(a1 + 0x68), flagP1, &v_48);
        *(a1 + 0x70) = 0;
    }

    return result;
}
