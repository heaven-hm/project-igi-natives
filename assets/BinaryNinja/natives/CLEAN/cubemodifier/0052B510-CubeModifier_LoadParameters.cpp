// IGI native provenance: CubeModifier_LoadParameters - 0x0052B510 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0052B510-CubeModifier_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CubeModifier_LoadParameters.h"
int32_t CubeModifier_LoadParameters(int32_t context)

{
    int32_t temp_val = 0x40000000 >> (*(context + 0x70) & 0x1f);
    double item_30;
    memcpy(&item_30, context + 0x28, 0x18);
    void* entity_1 = *(context + 0x20);
    int32_t temp_1 = temp_val << 1;
    long double fpu7 = *(entity_1 + 0xde0);
    long double fpu6 = *(entity_1 + 0xde4);
    int32_t item_48 = temp_1;
    int32_t temp_2 = -(temp_1);
    double item_10 = fpu6;
    long double fpu5 = *(entity_1 + 0xde8);
    double item_8 = fpu5;
    long double fpu_val_6_2 = (item_30 + fpu7) & temp_2;
    double item_28;
    double item_40 = (item_28 + fpu6) & temp_2;
    double item_20;
    double item_38_3 = (item_20 + fpu5) & temp_2;
    item_48 = item_48;
    *(context + 0x40) = fpu_val_6_2 - fpu7;
    *(context + 0x48) = item_40 - item_10;
    *(context + 0x50) = item_38_3 - item_8;
    *(context + 0x58) = item_48 + fpu_val_6_2 - fpu7;
    *(context + 0x60) = item_48 + item_40 - item_10;
    *(context + 0x68) = item_48 + item_38_3 - item_8;
    return context;
}
