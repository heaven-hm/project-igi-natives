// IGI native provenance: PushButton_Process - 0x0052CB30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052CB30-PushButton_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PushButton_Process.h"
float* PushButton_Process()

{
    float* result = Mem_Alloc(0xedc, 4);
    int32_t entity_val = g_bcad74;
    int32_t entity_1 = -(entity_val);
    int32_t item_10 = 0;
    int32_t item_c = 0;
    int32_t item_8 = 0;
    int32_t item_4 = 0;
    int32_t* data_val = g_5ca110;
    int32_t item_c_1 = (((entity_1 - entity_1) & 0xfffff800) + 0x800) | 0x10000;
    item_10 = 0x10;
    int32_t item_4_1 = 0x141;
    int32_t item_8_1 = 0x42;
    (*(*data_val + 0x14))(data_val, &item_10, &result[0x14], 0);
    int32_t item_34 = 0x3f800000;
    int32_t item_30 = 0;
    int32_t item_2c = 0;
    int32_t item_28 = 0x3f800000;
    int32_t item_24 = 0x3f800000;
    int32_t item_20 = 0x3f800000;
    int32_t item_1c = 0;
    int32_t item_18 = 0;
    int32_t item_14 = 0x3f800000;
    Light_SampleLightmap_9(result, &item_1c, &item_28, &item_28, &item_34, &item_34);
    Light_ComputeDirectionalLight_10(result, 0.392699093f);
    Light_UpdateGlobalLight_9(result);
    Light_ComputeDirectional(result);
    g_a84568 = result;
    return result;
}
