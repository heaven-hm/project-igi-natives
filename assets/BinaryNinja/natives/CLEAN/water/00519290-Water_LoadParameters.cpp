// IGI native provenance: Water_LoadParameters - 0x00519290 - CFG score 87.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00519290-Water_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Water_LoadParameters.h"
void* Water_LoadParameters(void* context)

{
    int32_t data_val = 0x40000000 >> (*(context + 0x4c24) & 0x1f);
    double item_20;
    memcpy(&item_20, context + 0x4bd0, 0x18);
    void* entity_1 = *(context + 0xf0);
    int32_t data_1 = data_val << 1;
    item_20 = *(entity_1 + 0xde0) + item_20;
    double item_18;
    double item_18_1 = *(entity_1 + 0xde4) + item_18;
    int32_t entity_3 = -(data_1);
    double item_10;
    double item_10_1 = *(entity_1 + 0xde8) + item_10;
    *(context + 0x4be8) = item_20 & entity_3;
    *(context + 0x4bf0) = item_18_1 & entity_3;
    *(context + 0x4bf8) = item_10_1 & entity_3;
    long double fpu_val_7_12 = data_1;
    *(context + 0x4c00) = fpu_val_7_12 + *(context + 0x4be8);
    *(context + 0x4c08) = fpu_val_7_12 + *(context + 0x4bf0);
    *(context + 0x4c10) = fpu_val_7_12 + *(context + 0x4bf8);
    memcpy(&item_20, context + 0x4be8, 0x18);
    long double fpu_val_7_13 = fpu_val_7_12 * 0.5;
    item_20 = fpu_val_7_13 + item_20;
    void* entity_4 = *(context + 0xf0);
    double item_18_2 = fpu_val_7_13 + item_18_1;
    long double fpu_val_7_14 = fpu_val_7_13 + item_10_1;
    double item_10_2 = fpu_val_7_14;
    item_20 = item_20 - *(entity_4 + 0xde0);
    double item_18_3 = item_18_2 - *(entity_4 + 0xde4);
    double item_10_3 = fpu_val_7_14 - *(entity_4 + 0xde8);
    *(context + 0x4be8) = *(context + 0x4be8) - *(entity_4 + 0xde0);
    *(context + 0x4bf0) = *(context + 0x4bf0) - *(*(context + 0xf0) + 0xde4);
    *(context + 0x4bf8) = *(context + 0x4bf8) - *(*(context + 0xf0) + 0xde8);
    *(context + 0x4c00) = *(context + 0x4c00) - *(*(context + 0xf0) + 0xde0);
    *(context + 0x4c08) = *(context + 0x4c08) - *(*(context + 0xf0) + 0xde4);
    *(context + 0x4c10) = *(context + 0x4c10) - *(*(context + 0xf0) + 0xde8);
    long double fpu_val_7_29 = data_1 * 0.000116257448f;
    *(context + 0x98) = fpu_val_7_29;
    void* data_3 = *(context + 0xf0);
    *(context + 0x9c) = fpu_val_7_29;
    *(context + 0xa0) = fpu_val_7_29;
    int32_t entity_10 = DynObj_UpdateDynTree_8(data_3, context, &item_20, context + 0x4be8, context + 0x4c00);
    int32_t data_4 = *(context + 0x4c34);
    int32_t item_28_2 = data_4;

    if (data_4 < 0x1000)
    {
        data_4 = 0x1000;
        item_28_2 = 0x1000;
    }

    int32_t item_3c_1 = entity_10;
    *(context + 0x4c34) = data_4;
    int32_t source_2 = 1 << (Display_OpenDevice_18(item_28_2) >> 3 & 0x1f);
    *(context + 0x4b94) = data_1;
    int32_t data_7;
    int32_t temp_7;
    temp_7 = HIGHD(data_1);
    data_7 = LOWD(data_1);
    int32_t i = *(context + 0x4c28);
    long double fpu_val_7_34 =
        (*(context + 0x4c18) * ((data_7 - temp_7) >> 1) + *(context + 0x30)) / source_2 * source_2;
    memcpy(context + 0x4938, context + 0x4be8, 0x18);
    *(context + 0x4c1c) = fpu_val_7_34;
    *(context + 0x4b88) = fpu_val_7_34;
    int32_t* data_14 = &g_a80408;
    memcpy(context + 0x4950, context + 0x4c00, 0x18);
    int32_t entity_14 = 0;

    while (*data_14 != i)
    {
        data_14 = &data_14[0xc];
        entity_14 += 1;

        if (data_14 > 0xa81008)
            break;
    }

    int32_t temp_9 = *(context + 0x4c2c);
    *(context + 0x4b9c) = *(context + 0x4c30);
    int32_t data_17 = entity_14 * 0x30;
    *(context + 0x4b98) = temp_9;
    *(context + 0x4b78) = *(data_17 + 0xa80420);
    long double fpu_val_6_17 = *(context + 0x4b78) * 1.10000002f;
    *(context + 0x4b7c) = *(data_17 + 0xa80424);
    *(context + 0x4ba4) = *(data_17 + 0xa80428);
    *(context + 0x4ba8) = *(data_17 + 0xa8042c);
    *(context + 0x4b8c) = fpu_val_6_17 + fpu_val_7_34;
    *(context + 0x4980) = *(data_17 + 0xa80410);
    *(context + 0x4984) = *(data_17 + 0xa80414);
    *(context + 0x4988) = *(data_17 + 0xa80418);
    *(context + 0x498c) = *(data_17 + 0xa8041c);
    *(context + 0x4b4c) = g_b818a0;
    *(context + 0x4b50) = g_b818a4;
    int32_t data_21 = *(context + 0x4c38);
    *(context + 0x4b54) = g_b818a8;
    void* data_22 = Terrain_RenderWaterSurface_9(data_21);
    int32_t entity_19 = *(context + 0x4c3c);
    *(context + 0xf8) = data_22;
    void* data_23 = Terrain_RenderWaterSurface_9(entity_19);
    int32_t temp_17 = *(context + 0x4c40);
    *(context + 0xfc) = data_23;
    *(context + 0x100) = Terrain_RenderWaterSurface_9(temp_17);
    *(context + 0x104) = Terrain_RenderWaterSurface_9(*(context + 0x4c44));
    return Light_UpdateGlobalLight_11(context + 0xf8);
}
