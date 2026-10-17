// IGI native provenance: AI_UpdateOrders_25 - 0x00467F30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00467F30-AI_UpdateOrders_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateOrders_25.h"
void AI_UpdateOrders_25(float context)

{
    float source_val = context;
    int32_t context_val = *(source_val + 0x1c);

    if (context_val == 0xffffffff)
        return;

    long double fpu_val_7_1 = *(source_val + 0x14);
    context = fpu_val_7_1;
    long double f0_1 = 3072.0f;
    fpu_val_7_1 - f0_1;

    if (*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
        context = 3072.0f;

    double* data_2 = *(source_val + 0xc);
    double* entity_1 = *source_val;
    float item_c = *data_2 - *entity_1;
    float item_8_1 = data_2[1] - entity_1[1];
    float item_4_1 = data_2[2] - entity_1[2];
    float* data_3 = *(source_val + 4);
    float item_18 = item_4_1 * data_3[6] + item_8_1 * data_3[3] + item_c * *data_3;
    float item_14_1 = item_4_1 * data_3[7] + item_8_1 * data_3[4] + item_c * data_3[1];
    long double fpu_val_7_18 = item_4_1 * data_3[8] + item_8_1 * data_3[5];
    long double fpu_val_6_12 = item_c * data_3[2];
    float item_8_2 = item_14_1;
    item_c = item_18;
    int32_t data_5 = *(source_val + 0x20);
    float item_10_1 = fpu_val_7_18 + fpu_val_6_12;
    AI_UpdateSensors_24(&item_18, &item_c, source_val);
    float item_28 = context;
    float item_24_1 = context;
    float item_20;
    Display_SetGammaRamp_15(&item_20, &item_28, item_10_1);
    float item_34;
    float item_30;
    float item_2c;
    Sys_Atan2UndefinedInOrig(*(source_val + 0x10), &item_2c, &item_30, &item_34);
    float entity_4 = item_20;
    float item_54_2 = entity_4;
    float item_1c;
    Sys_DispatchOpcode_15(*((context_val << 3) + &g_53f5f0), *((context_val << 3) + &g_53f5f4), item_18, item_14_1,
        0x44051eb8, *(data_5 * 0xc + &g_53f608), *(data_5 * 0xc + 0x53f60c),
        *(data_5 * 0xc + 0x53f610), 0x3f400000, -(item_34), entity_4, item_1c, 0x400c0000, 0xffffffff);
}
