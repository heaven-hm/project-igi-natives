// Original IGI.EXE function: DiscardTerrainArea_Setup (VA 0x0052B840; static CFG gate FAIL, CFG score 0.800).
#include "DiscardTerrainArea_Setup.h"
void* DiscardTerrainArea_Setup(int32_t context)

{
    void* result = g_a44344;
    int32_t flagP = 0x40000000 >> (*(context + 0x68) & 0x1f);
    double item_48;
    memcpy(&item_48, context + 0x20, 0x18);
    item_48 = *(result + 0xde0) + item_48;
    int32_t flagP1 = flagP << 1;
    int32_t item_58 = flagP1;
    int32_t entity_2 = -(flagP1);
    long double fpu_val_7_7 = item_48 & entity_2;
    double item_40;
    double item_28 = (*(result + 0xde4) + item_40) & entity_2;
    double item_38;
    long double fpu_val_6_3 = (*(result + 0xde8) + item_38) & entity_2;
    double item_20 = fpu_val_6_3;
    long double fpu5 = item_58;
    double item_18 = fpu5 + fpu_val_7_7;
    double item_10 = fpu5 + item_28;
    double item_8 = fpu5 + fpu_val_6_3;
    long double fpu_val_5_1 = fpu5 * 0.5;
    item_48 = fpu_val_5_1 + fpu_val_7_7;
    double item_40_2 = fpu_val_5_1 + item_28;
    long double fpu_val_6_4 = fpu_val_6_3 + fpu_val_5_1;
    double item_38_2 = fpu_val_6_4;
    item_48 = item_48 - *(result + 0xde0);
    double item_40_3 = item_40_2 - *(result + 0xde4);
    double item_38_3 = fpu_val_6_4 - *(result + 0xde8);
    item_58 = *(result + 0xde0);
    double item_30 = fpu_val_7_7 - item_58;
    long double fpu_val_7_9 = *(result + 0xde4);
    double item_28_1 = item_28 - fpu_val_7_9;
    long double fpu_val_6_9 = *(result + 0xde8);
    result = *(context + 0x70);
    double item_20_1 = item_20 - fpu_val_6_9;
    memcpy(context + 0x38, &item_30, 0x18);
    item_18 = item_18 - item_58;
    double item_10_1 = item_10 - fpu_val_7_9;
    double item_8_1 = item_8 - fpu_val_6_9;
    memcpy(context + 0x50, &item_18, 0x18);

    if (result)
    {
        QTask_CleanupTypes(context);
        result = Light_UpdateGlobalLight_8(context, *(context + 0x68), flagP1, &item_48);
        *(context + 0x70) = 0;
    }

    return result;
}
