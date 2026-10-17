// IGI native provenance: Light_SetLightColor_9 - 0x0052D060 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052D060-Light_SetLightColor_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_SetLightColor_9.h"
int32_t Light_SetLightColor_9(void* context)

{
    float item_44 = 0.0f;

    if (g_b041e8)
    {
        int32_t entity_1 = g_b041e0;
        float* data_3 = **&g_b041e4 * g_b041f0;
        long double fp1_1;
        bool c1_1;
        fp1_1 = __fpatan(*(data_3 + entity_1 + 4), *(data_3 + entity_1));
        item_44 = fp1_1 + 1.57079637f;
    }

    *(g_bcade8 + 4) = 0xffffffff;
    *(g_bcad7c + 4) = 0xffffffff;
    *(g_bcadac + 4) = 0xffffffff;
    *(g_bcadc4 + 4) = 0xffffffff;
    int32_t* data_4 = g_5ca114;
    (*(*data_4 + 0x50))(data_4, 0x1b, 0);
    int32_t* data_5 = g_5ca114;
    (*(*data_5 + 0x50))(data_5, 0x1c, 0);
    int32_t* data_6 = g_5ca114;
    (*(*data_6 + 0x50))(data_6, 7, 0);
    int32_t* data_7 = g_5ca114;
    (*(*data_7 + 0x50))(data_7, 0x17, 2);
    int32_t* data_8 = g_5ca114;
    (*(*data_8 + 0x50))(data_8, 0xe, 0);
    int32_t* data_9 = g_5ca114;
    (*(*data_9 + 0x50))(data_9, 0x16, 3);
    int32_t* data_10 = g_5ca114;
    (*(*data_10 + 0x50))(data_10, 0x1d, 0);
    int32_t* data_11 = g_5ca114;
    (*(*data_11 + 0x50))(data_11, 0x89, 0);
    int32_t* data_12 = g_5ca114;
    (*(*data_12 + 0x50))(data_12, 0x1a, 1);
    int32_t* data_13 = g_5ca114;
    (*(*data_13 + 0x50))(data_13, 0xf, 0);
    int32_t* data_14 = g_5ca114;
    (*(*data_14 + 0x50))(data_14, 0x88, 1);
    int32_t* data_15 = g_5ca114;
    (*(*data_15 + 0x94))(data_15, 0, 1, 3);
    int32_t* data_16 = g_5ca114;
    (*(*data_16 + 0x94))(data_16, 0, 2, 2);
    int32_t* data_17 = g_5ca114;
    (*(*data_17 + 0x94))(data_17, 0, 3, 0);
    int32_t* data_18 = g_5ca114;
    (*(*data_18 + 0x94))(data_18, 0, 4, 1);
    int32_t* data_19 = g_5ca114;
    (*(*data_19 + 0x94))(data_19, 1, 1, 1);
    long double fp0;
    bool c1_2;
    bool c2;
    fp0 = __fcos(item_44);
    int32_t item_18 = g_bcabec;
    int32_t* data_21 = g_5ca114;
    int32_t item_38 = 0;
    int32_t item_34 = 0;
    int32_t item_28 = 0;
    int32_t item_24 = 0;
    int32_t item_20 = 0;
    int32_t item_1c = 0;
    int32_t item_14 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    int32_t item_8 = 0;
    int32_t item_4 = 0x3f800000;
    long double fpu_val_7_6 = fp0 * g_bcabec;
    float item_40 = fpu_val_7_6;
    long double fp0_1;
    bool c1_3;
    bool c2_1;
    fp0_1 = __fsin(item_44);
    long double fpu_val_6_4 = fp0_1 * g_bcabec;
    float item_3c = -(fpu_val_6_4);
    float item_30 = fpu_val_6_4;
    float item_2c = fpu_val_7_6;
    (*(*data_21 + 0x2c))(data_21, 1, &item_40);
    int32_t* data_22 = g_5ca114;
    return (*(*data_22 + 0x80))(data_22, 4, *(context + 0x50), 0, 0x141, context + 0x54, 0x744, 0);
}
