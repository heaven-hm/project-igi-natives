// Original IGI.EXE function: EditHazinglayer_LoadParameters (VA 0x0052B1D0; static CFG gate PASS, CFG score 0.889).
#include "EditHazinglayer_LoadParameters.h"
int32_t EditHazinglayer_LoadParameters(void* context)

{
    int32_t data_val = 0x40000000 >> (*(context + 0x70) & 0x1f);
    double item_20;
    memcpy(&item_20, context + 0x28, 0x18);
    int64_t item_38 = item_20;
    int32_t data_1 = data_val << 1;
    int32_t item_30 = data_1;
    int32_t data_2 = -(data_1);
    item_38 &= data_2;
    long double fpu_val_7_1 = item_38;
    *(context + 0x40) = fpu_val_7_1;
    double item_18;
    item_38 = item_18;
    item_38 &= data_2;
    long double fpu_val_6_1 = item_38;
    double item_28 = fpu_val_6_1;
    *(context + 0x48) = fpu_val_6_1;
    double item_10;
    item_38 = item_10;
    item_38 &= data_2;
    void* temp_4 = *(context + 0x20);
    long double fpu_val_6_3 = item_38;
    item_38 = fpu_val_6_3;
    *(context + 0x50) = fpu_val_6_3;
    item_30 = item_30;
    *(context + 0x58) = item_30 + fpu_val_7_1;
    *(context + 0x60) = item_30 + item_28;
    *(context + 0x68) = item_30 + item_38;
    long double fpu_val_7_8 = *(context + 0x80) + *(context + 0x38);

    if (temp_4)
        return Render_SkinBones_12(temp_4, context + 0x40, context + 0x58, nullptr, *(context + 0x74),
            *(context + 0x78) + *(context + 0x38), fpu_val_7_8);

    struct status_msg* result = Render_DrawLightmapMesh_12(context + 0x40, context + 0x58, nullptr, *(context + 0x74),
        *(context + 0x78) + *(context + 0x38), fpu_val_7_8);
    *(context + 0x20) = result;
    return result;
}
