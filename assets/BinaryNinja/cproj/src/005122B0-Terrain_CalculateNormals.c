#include "gi_platform.h"
#include "005122B0-Terrain_CalculateNormals.h"
int32_t Terrain_CalculateNormals(int32_t a1, int32_t a2)

{
    double v_50;
    memcpy(&v_50, a1 * 0x18 + &g_a7dab0, 0x18);
    double v_20;
    memcpy(&v_20, a2 * 0x18 + &g_a7dab0, 0x18);
    int32_t v_78 = (&g_a7da70)[a1 * 4];
    int32_t v_70 = (&g_a7da78)[a1 * 4];
    int32_t v_6c = (&g_a7da7c)[a1 * 4];
    int32_t result = a1 * 0x30;
    int32_t v_74 = (&g_a7da74)[a1 * 4];
    long double fpu7 = *(result + 0xa7db28);
    int32_t objC4 = a2 * 0x30;
    double v_68 = *(result + 0xa7db1c);
    int32_t tmpD1 = a2 << 4;
    double v_60 = *(result + 0xa7db20);
    double v_58 = *(result + 0xa7db24);
    double v_38 = *(objC4 + 0xa7db1c);
    double v_30 = *(objC4 + 0xa7db20);
    double v_28 = *(objC4 + 0xa7db24);
    double v_40;
    double v_10;
    long double x87_r6_8 = (409.60000610351562 - v_40) / (v_10 - v_40);
    v_78 = (*(tmpD1 + &g_a7da70) - v_78) * x87_r6_8 + v_78;
    v_70 = (*(tmpD1 + &g_a7da78) - v_70) * x87_r6_8 + v_70;
    v_50 = (v_20 - v_50) * x87_r6_8 + v_50;
    double v_48;
    double v_18;
    double v_48_1 = (v_18 - v_48) * x87_r6_8 + v_48;
    v_68 = (v_38 - v_68) * x87_r6_8 + v_68;
    double v_60_1 = (v_30 - v_60) * x87_r6_8 + v_60;
    double v_58_1 = (v_28 - v_58) * x87_r6_8 + v_58;
    long double x87_r7_1 = fpu7 + (*(objC4 + 0xa7db28) - fpu7) * x87_r6_8;
    long double x87_r6_13 =
        g_bcab28 * v_50 * 0.0024414062136202124 + g_bcabc8 + g_bcabb8;
    double v_18_2 = g_bcabcc + g_bcabbc + g_bcab2c * v_48_1 * 0.0024414062136202124;
    *(result + 0xa7db30) = v_78 * 0.19531249708961698;
    *(result + 0xa7db34) = v_70 * 0.19531249708961698;
    *(result + 0xa7db10) = x87_r6_13;
    *(result + 0xa7db14) = v_18_2;
    long double x87_r6_15 = v_68;
    *(result + 0xa7db18) = 0x3e480000;
    *(result + 0xa7db1c) = x87_r6_15;
    *(result + 0xa7db20) = v_60_1;
    *(result + 0xa7db24) = v_58_1;
    *(result + 0xa7db28) = x87_r7_1;
    return result;
}
