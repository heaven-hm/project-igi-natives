// IGI native provenance: Camera_SetFieldOfView_26 - 0x004ACBE9 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ACBE9-Camera_SetFieldOfView_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_26.h"
int32_t Camera_SetFieldOfView_26()

{
    int32_t item_10;
    void arg_4;
    Camera_ApplyLineFilter_26(&item_10, &arg_4);
    int16_t* item_1c_1 = &g_936218;
    int32_t item_20_1 = 0;
    int32_t item_24 = 0x11;
    int32_t item_30 = item_10;
    void item_2c;
    int32_t* dest_val = &item_2c;
    void item_c;
    int32_t* source_val = &item_c;
    *dest_val = *source_val;
    dest_val[1] = source_val[1];
    g_936240 = Camera_1Snan(item_30);
    g_936238 = g_93621a;
    g_93623c = g_936218;
    g_936244 = 0x93621c;
    return &g_936238;
}
