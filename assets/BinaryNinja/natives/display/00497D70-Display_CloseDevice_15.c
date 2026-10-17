// IGI native provenance: Display_CloseDevice_15 - 0x00497D70 - CFG score 80.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00497D70-Display_CloseDevice_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_CloseDevice_15.h"
int32_t Display_CloseDevice_15(int32_t* context, int32_t param_2, int32_t param_3, float param_4)

{
    memcpy(context, param_2, 0x28);
    int32_t entity_val = context[3];
    int32_t temp_val = context[6];
    int32_t item_28 = *context;
    int32_t item_24 = entity_val;
    int32_t item_20 = temp_val;
    int32_t item_1c = context[1];
    int32_t item_18 = context[4];
    int32_t item_14 = context[7];
    int32_t item_10 = context[2];
    int32_t item_c = context[5];
    int32_t item_8 = context[8];
    int32_t item_4 = context[9];
    memcpy(context, &item_28, 0x28);
    memcpy(&context[0xa], param_3, 0x18);
    context[0x10] = param_4;
    context[0x11] = g_bcabc4 * param_4 / (Display_ClearSurfaces_4() * g_bcabc0);
    context[0x12] = g_bcabc8 / context[0x10];
    context[0x13] = Display_ClearSurfaces_4() * context[0x12];
    context[0x14] = g_bcabb8 + g_bcabc8;
    long double fpu_val_7_12 = g_bcabbc + g_bcabcc;
    context[0x16] = 1;
    context[0x18] = 1;
    context[0x15] = fpu_val_7_12;
    return 1;
}
