#include "005122B0-Terrain_CalculateNormals.h"
/* 0x005122b0 Terrain_CalculateNormals full linked: callers=10 callees=2 */
int32_t sub_5122b0(int32_t a1, int32_t a2)

{
    double var_50;
    memcpy(&var_50, a1 * 0x18 + &g_a7dab0, 0x18);
    double var_20;
    memcpy(&var_20, a2 * 0x18 + &g_a7dab0, 0x18);
    int32_t var_78 = (&g_a7da70)[a1 * 4];
    int32_t var_70 = (&g_a7da78)[a1 * 4];
    int32_t var_6c = (&g_a7da7c)[a1 * 4];
    int32_t result = a1 * 0x30;
    int32_t var_74 = (&g_a7da74)[a1 * 4];
    long double x87_r7 = *(result + 0xa7db28);
    int32_t ecx_4 = a2 * 0x30;
    double var_68 = *(result + 0xa7db1c);
    int32_t edx_1 = a2 << 4;
    double var_60 = *(result + 0xa7db20);
    double var_58 = *(result + 0xa7db24);
    double var_38 = *(ecx_4 + 0xa7db1c);
    double var_30 = *(ecx_4 + 0xa7db20);
    double var_28 = *(ecx_4 + 0xa7db24);
    double var_40;
    double var_10;
    long double x87_r6_8 = (409.60000610351562 - var_40) / (var_10 - var_40);
    var_78 = (*(edx_1 + &g_a7da70) - var_78) * x87_r6_8 + var_78;
    var_70 = (*(edx_1 + &g_a7da78) - var_70) * x87_r6_8 + var_70;
    var_50 = (var_20 - var_50) * x87_r6_8 + var_50;
    double var_48;
    double var_18;
    double var_48_1 = (var_18 - var_48) * x87_r6_8 + var_48;
    var_68 = (var_38 - var_68) * x87_r6_8 + var_68;
    double var_60_1 = (var_30 - var_60) * x87_r6_8 + var_60;
    double var_58_1 = (var_28 - var_58) * x87_r6_8 + var_58;
    long double x87_r7_1 = x87_r7 + (*(ecx_4 + 0xa7db28) - x87_r7) * x87_r6_8;
    long double x87_r6_13 =
        g_bcab28 * var_50 * 0.0024414062136202124 + g_bcabc8 + g_bcabb8;
    double var_18_2 = g_bcabcc + g_bcabbc + g_bcab2c * var_48_1 * 0.0024414062136202124;
    *(result + 0xa7db30) = var_78 * 0.19531249708961698;
    *(result + 0xa7db34) = var_70 * 0.19531249708961698;
    *(result + 0xa7db10) = x87_r6_13;
    *(result + 0xa7db14) = var_18_2;
    long double x87_r6_15 = var_68;
    *(result + 0xa7db18) = 0x3e480000;
    *(result + 0xa7db1c) = x87_r6_15;
    *(result + 0xa7db20) = var_60_1;
    *(result + 0xa7db24) = var_58_1;
    *(result + 0xa7db28) = x87_r7_1;
    return result;
}
