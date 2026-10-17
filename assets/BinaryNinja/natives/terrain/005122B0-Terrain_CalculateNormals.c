// Original IGI.EXE function: Terrain_CalculateNormals (VA 0x005122B0; static CFG gate FAIL, CFG score 0.667).
#include "Terrain_CalculateNormals.h"
int32_t Terrain_CalculateNormals(int32_t context, int32_t param_2)

{
    double item_50;
    memcpy(&item_50, context * 0x18 + &g_a7dab0, 0x18);
    double item_20;
    memcpy(&item_20, param_2 * 0x18 + &g_a7dab0, 0x18);
    int32_t item_78 = (&g_a7da70)[context * 4];
    int32_t item_70 = (&g_a7da78)[context * 4];
    int32_t item_6c = (&g_a7da7c)[context * 4];
    int32_t result = context * 0x30;
    int32_t item_74 = (&g_a7da74)[context * 4];
    long double fpu7 = *(result + 0xa7db28);
    int32_t entity_4 = param_2 * 0x30;
    double item_68 = *(result + 0xa7db1c);
    int32_t temp_1 = param_2 << 4;
    double item_60 = *(result + 0xa7db20);
    double item_58 = *(result + 0xa7db24);
    double item_38 = *(entity_4 + 0xa7db1c);
    double item_30 = *(entity_4 + 0xa7db20);
    double item_28 = *(entity_4 + 0xa7db24);
    double item_40;
    double item_10;
    long double fpu_val_6_8 = (409.60000610351562 - item_40) / (item_10 - item_40);
    item_78 = (*(temp_1 + &g_a7da70) - item_78) * fpu_val_6_8 + item_78;
    item_70 = (*(temp_1 + &g_a7da78) - item_70) * fpu_val_6_8 + item_70;
    item_50 = (item_20 - item_50) * fpu_val_6_8 + item_50;
    double item_48;
    double item_18;
    double item_48_1 = (item_18 - item_48) * fpu_val_6_8 + item_48;
    item_68 = (item_38 - item_68) * fpu_val_6_8 + item_68;
    double item_60_1 = (item_30 - item_60) * fpu_val_6_8 + item_60;
    double item_58_1 = (item_28 - item_58) * fpu_val_6_8 + item_58;
    long double fpu_val_7_1 = fpu7 + (*(entity_4 + 0xa7db28) - fpu7) * fpu_val_6_8;
    long double fpu_val_6_13 =
        g_bcab28 * item_50 * 0.0024414062136202124 + g_bcabc8 + g_bcabb8;
    double item_18_2 = g_bcabcc + g_bcabbc + g_bcab2c * item_48_1 * 0.0024414062136202124;
    *(result + 0xa7db30) = item_78 * 0.19531249708961698;
    *(result + 0xa7db34) = item_70 * 0.19531249708961698;
    *(result + 0xa7db10) = fpu_val_6_13;
    *(result + 0xa7db14) = item_18_2;
    long double fpu_val_6_15 = item_68;
    *(result + 0xa7db18) = 0x3e480000;
    *(result + 0xa7db1c) = fpu_val_6_15;
    *(result + 0xa7db20) = item_60_1;
    *(result + 0xa7db24) = item_58_1;
    *(result + 0xa7db28) = fpu_val_7_1;
    return result;
}
