#include "0052B840-DiscardTerrainArea_Setup.h"
/* 0x0052b840 DiscardTerrainArea_Setup full linked: callers=0 callees=5 */
void* sub_52b840(int32_t a1)

{
    void* result = g_a44344;
    int32_t ebp = 0x40000000 >> (*(a1 + 0x68) & 0x1f);
    double var_48;
    memcpy(&var_48, a1 + 0x20, 0x18);
    var_48 = *(result + 0xde0) + var_48;
    int32_t ebp_1 = ebp << 1;
    int32_t var_58 = ebp_1;
    int32_t ecx_2 = -(ebp_1);
    long double x87_r7_7 = var_48 & ecx_2;
    double var_40;
    double var_28 = (*(result + 0xde4) + var_40) & ecx_2;
    double var_38;
    long double x87_r6_3 = (*(result + 0xde8) + var_38) & ecx_2;
    double var_20 = x87_r6_3;
    long double x87_r5 = var_58;
    double var_18 = x87_r5 + x87_r7_7;
    double var_10 = x87_r5 + var_28;
    double var_8 = x87_r5 + x87_r6_3;
    long double x87_r5_1 = x87_r5 * 0.5;
    var_48 = x87_r5_1 + x87_r7_7;
    double var_40_2 = x87_r5_1 + var_28;
    long double x87_r6_4 = x87_r6_3 + x87_r5_1;
    double var_38_2 = x87_r6_4;
    var_48 = var_48 - *(result + 0xde0);
    double var_40_3 = var_40_2 - *(result + 0xde4);
    double var_38_3 = x87_r6_4 - *(result + 0xde8);
    var_58 = *(result + 0xde0);
    double var_30 = x87_r7_7 - var_58;
    long double x87_r7_9 = *(result + 0xde4);
    double var_28_1 = var_28 - x87_r7_9;
    long double x87_r6_9 = *(result + 0xde8);
    result = *(a1 + 0x70);
    double var_20_1 = var_20 - x87_r6_9;
    memcpy(a1 + 0x38, &var_30, 0x18);
    var_18 = var_18 - var_58;
    double var_10_1 = var_10 - x87_r7_9;
    double var_8_1 = var_8 - x87_r6_9;
    memcpy(a1 + 0x50, &var_18, 0x18);

    if (result)
    {
        QTask_CleanupTypes(a1);
        result = sub_52b9f0(a1, *(a1 + 0x68), ebp_1, &var_48);
        *(a1 + 0x70) = 0;
    }

    return result;
}
