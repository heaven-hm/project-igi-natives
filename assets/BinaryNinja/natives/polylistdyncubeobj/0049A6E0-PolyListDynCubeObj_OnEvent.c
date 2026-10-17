// IGI native provenance: PolyListDynCubeObj_OnEvent - 0x0049A6E0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0049A6E0-PolyListDynCubeObj_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PolyListDynCubeObj_OnEvent.h"
int32_t PolyListDynCubeObj_OnEvent()

{
    int32_t i = 0;
    int32_t item_68;
    memset(&item_68, 0, 0x68);

    if (g_b041e8 > 0)
    {
        do
        {
            int32_t entity_1 = g_b041e0;
            long double fpu_val_7_1 = g_bcabec;
            int32_t data_2 = *(g_b041e4 + (i << 2));
            item_68 = 3;
            void* data_3 = data_2 * g_b041f0;
            float item_64_1 = fpu_val_7_1 * *(data_3 + entity_1 + 0xc);
            float* data_4 = data_3 + entity_1;
            float item_60_1 = g_bcabec * *(data_3 + entity_1 + 0x10);
            float item_5c_1 = g_bcabec * data_4[5];
            float item_28_1 = -(*data_4);
            float item_24_1 = -(data_4[1]);
            int32_t* data_5 = g_5ca114;
            float item_20_1 = -(data_4[2]);
            (*(*data_5 + 0x48))(data_5, i, &item_68);
            int32_t* data_6 = g_5ca114;
            (*(*data_6 + 0xb0))(data_6, i, 1);
            i += 1;
        } while (i < g_b041e8);
    }

    int32_t item_ac;
    memset(&item_ac, 0, 0x44);
    int32_t* data_8 = g_5ca114;
    item_ac = 0x3f800000;
    int32_t item_a8 = 0x3f800000;
    int32_t item_a4 = 0x3f800000;
    int32_t item_9c = 0x3f800000;
    int32_t item_98 = 0x3f800000;
    int32_t item_94 = 0x3f800000;
    (*(*data_8 + 0x40))(data_8, &item_ac);
    int32_t* data_9 = g_5ca114;
    (*(*data_9 + 0x50))(data_9, 0x88, 1);
    int32_t* data_10 = g_5ca114;
    (*(*data_10 + 0x50))(data_10, 0x22,
        g_b818f4 * 255.0f - ((((g_b818ec * -255.0f) << 8) + g_b818f0 * -255.0f) << 8));
    int32_t* data_11 = g_5ca114;
    (*(*data_11 + 0x50))(data_11, 0x26, g_b46d04);
    int32_t* data_12 = g_5ca114;
    (*(*data_12 + 0x50))(data_12, 0x23, 0);
    int32_t* data_13 = g_5ca114;
    (*(*data_13 + 0x50))(data_13, 0x8c, 3);
    int32_t* data_14 = g_5ca114;
    (*(*data_14 + 0x50))(data_14, 0x1c, g_5470b4);
    int32_t* data_15 = g_5ca114;
    (*(*data_15 + 0x50))(data_15, 0x1d, 0);
    int32_t* data_16 = g_5ca114;
    (*(*data_16 + 0x50))(data_16, 0x8b,
        ((g_b818ac * 255.0f) << 8 | (g_b818b0 * 255.0f)) << 8 | (g_b818b4 * 255.0f));
    int32_t* data_17 = g_5ca114;
    (*(*data_17 + 0x50))(data_17, 0x1b, 0);
    int32_t* data_18 = g_5ca114;
    (*(*data_18 + 0x50))(data_18, 0x16, 2);
    int32_t* data_19 = g_5ca114;
    (*(*data_19 + 0x50))(data_19, 0x8d, 0);
    int32_t* data_20 = g_5ca114;
    (*(*data_20 + 0x50))(data_20, 0x1a, 1);
    int32_t* data_21 = g_5ca114;
    (*(*data_21 + 0x50))(data_21, 0xf, 1);
    int32_t* data_22 = g_5ca114;
    (*(*data_22 + 0x50))(data_22, 0x18, 0);
    int32_t* data_23 = g_5ca114;
    (*(*data_23 + 0x50))(data_23, 0x19, 5);
    int32_t* data_24 = g_5ca114;
    (*(*data_24 + 0x50))(data_24, 7, g_bcad78);
    int32_t* data_25 = g_5ca114;
    (*(*data_25 + 0x50))(data_25, 0xe, 0);
    int32_t* data_26 = g_5ca114;
    return (*(*data_26 + 0x50))(data_26, 0x17, 4);
}
