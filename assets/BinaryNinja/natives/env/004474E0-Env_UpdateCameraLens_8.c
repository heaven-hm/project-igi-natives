// Original IGI.EXE function: Env_UpdateCameraLens_8 (VA 0x004474E0; static CFG gate FAIL, CFG score 0.778).
#include "Env_UpdateCameraLens_8.h"
float* Env_UpdateCameraLens_8(void* context)

{
    int16_t data_val = DynObj_LookupHashItem_5();
    void* item_48 = context;
    void* data_1 = QTask_FindType_2(item_48, data_val);

    if (!data_1)
    {
        memset(context + 0x2e8, 0, 0x18);
        *(context + 0x300) = 0x3f800000;
        *(context + 0x304) = 0;
        *(context + 0x308) = 0;
        *(context + 0x30c) = 0;
        *(context + 0x310) = 0x3f800000;
        *(context + 0x314) = 0;
        *(context + 0x318) = 0;
        *(context + 0x31c) = 0;
        *(context + 0x320) = 0x3f800000;
        *(context + 0x324) = 0;
        return 0x3f800000;
    }

    *(context + 0x2e8) = *(context + 0xf0) - *(data_1 + 0x20);
    *(context + 0x2f0) = *(context + 0xf8) - *(data_1 + 0x28);
    long double fpu_val_7_5 = *(context + 0x100) - *(data_1 + 0x30);
    *(context + 0x2f8) = fpu_val_7_5;
    double item_30 = *(data_1 + 0x70) * *(context + 0x2e8) + *(data_1 + 0x7c) * *(context + 0x2f0)
        + *(data_1 + 0x88) * fpu_val_7_5;
    double item_28 = *(data_1 + 0x74) * *(context + 0x2e8) + *(data_1 + 0x8c) * fpu_val_7_5
        + *(data_1 + 0x80) * *(context + 0x2f0);
    double item_20 = *(data_1 + 0x78) * *(context + 0x2e8) + *(data_1 + 0x90) * fpu_val_7_5
        + *(data_1 + 0x84) * *(context + 0x2f0);
    memcpy(context + 0x2e8, &item_30, 0x18);
    int32_t temp_val = *(data_1 + 0x7c);
    item_30 = *(data_1 + 0x70);
    int32_t entity_1 = *(data_1 + 0x88);
    *(&item_30 + 4) = temp_val;
    item_28 = entity_1;
    *(&item_28 + 4) = *(data_1 + 0x74);
    item_20 = *(data_1 + 0x80);
    *(&item_20 + 4) = *(data_1 + 0x8c);
    int32_t item_18 = *(data_1 + 0x78);
    int32_t item_14 = *(data_1 + 0x84);
    int32_t item_10 = *(data_1 + 0x90);
    int32_t item_c = *(data_1 + 0x94);
    memcpy(context + 0x300, &item_30, 0x28);
    long double fpu_val_7_10 = *(context + 0x30c) * *(context + 0x114) + *(context + 0x110) * *(context + 0x300)
        + *(context + 0x118) * *(context + 0x318);
    item_30 = fpu_val_7_10;
    long double fpu_val_7_14 = *(context + 0x310) * *(context + 0x114) + *(context + 0x110) * *(context + 0x304)
        + *(context + 0x31c) * *(context + 0x118);
    int32_t item_c_1 = *(context + 0x324) + *(context + 0x134) + 1;
    *(&item_30 + 4) = fpu_val_7_14;
    long double fpu_val_7_18 = *(context + 0x314) * *(context + 0x114) + *(context + 0x308) * *(context + 0x110)
        + *(context + 0x320) * *(context + 0x118);
    item_28 = fpu_val_7_18;
    long double fpu_val_7_22 = *(context + 0x300) * *(context + 0x11c) + *(context + 0x124) * *(context + 0x318)
        + *(context + 0x30c) * *(context + 0x120);
    *(&item_28 + 4) = fpu_val_7_22;
    long double fpu_val_7_26 = *(context + 0x11c) * *(context + 0x304) + *(context + 0x31c) * *(context + 0x124)
        + *(context + 0x310) * *(context + 0x120);
    item_20 = fpu_val_7_26;
    long double fpu_val_7_30 = *(context + 0x308) * *(context + 0x11c) + *(context + 0x320) * *(context + 0x124)
        + *(context + 0x314) * *(context + 0x120);
    *(&item_20 + 4) = fpu_val_7_30;
    long double fpu_val_7_34 = *(context + 0x30c) * *(context + 0x12c) + *(context + 0x318) * *(context + 0x130)
        + *(context + 0x300) * *(context + 0x128);
    float item_18_1 = fpu_val_7_34;
    long double fpu_val_7_38 = *(context + 0x31c) * *(context + 0x130) + *(context + 0x310) * *(context + 0x12c)
        + *(context + 0x128) * *(context + 0x304);
    float item_14_1 = fpu_val_7_38;
    long double fpu_val_7_42 = *(context + 0x320) * *(context + 0x130) + *(context + 0x314) * *(context + 0x12c)
        + *(context + 0x308) * *(context + 0x128);
    float item_10_1 = fpu_val_7_42;
    memcpy(context + 0x300, &item_30, 0x28);
    return context + 0x300;
}
