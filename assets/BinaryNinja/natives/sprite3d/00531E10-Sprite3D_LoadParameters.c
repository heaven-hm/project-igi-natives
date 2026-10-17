// IGI native provenance: Sprite3D_LoadParameters - 0x00531E10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00531E10-Sprite3D_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sprite3D_LoadParameters.h"
int32_t Sprite3D_LoadParameters(float context)

{
    float source_val = context;
    int32_t entity_val = *(source_val + 0x6c);
    float item_8 = *(source_val + 0x68);
    int32_t item_4 = entity_val;
    float item_18;
    Display_RestoreDevice_15(&item_18, &context, source_val + 0x20);
    long double fpu7 = context;
    long double f0 = 0.0f;
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x41)
        return result;

    float item_10;
    Display_SetGammaRamp_15(&item_10, &item_8, context);
    float item_14;
    float item_c;
    float item_28_1 = item_c + item_14;
    float item_24_1 = item_10 + item_18;
    float item_20_1 = item_18 - item_10;
    float item_1c_1 = item_14 - item_c;
    uint32_t data_1 = Display_OpenDevice_18(context);
    return Sys_FreeMemory_15(*(source_val + 0x80), item_20_1, item_1c_1, item_24_1, item_1c_1, item_20_1, item_28_1,
        item_24_1, item_28_1, 255.0f, 255.0f, 255.0f, *(source_val + 0x7c), *(source_val + 0x84), data_1);
}
