// IGI native provenance: AI_TakeCover_25 - 0x00467DF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00467DF0-AI_TakeCover_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_TakeCover_25.h"
void AI_TakeCover_25(int32_t context)

{
    int32_t* entity_1 = context;
    int32_t* source_val = entity_1[6];

    if (!source_val)
        return;

    double* data_1 = entity_1[3];
    double* temp_1 = *entity_1;
    float item_c = *data_1 - *temp_1;
    float item_8_1 = data_1[1] - temp_1[1];
    float item_4_1 = data_1[2] - temp_1[2];
    float* data_2 = entity_1[1];
    float item_18 = item_4_1 * data_2[6] + item_8_1 * data_2[3] + item_c * *data_2;
    float item_14_1 = item_4_1 * data_2[7] + item_8_1 * data_2[4] + item_c * data_2[1];
    long double fpu_val_7_17 = item_4_1 * data_2[8] + item_8_1 * data_2[5];
    long double fpu_val_6_12 = item_c * data_2[2];
    float item_8_2 = item_14_1;
    item_c = item_18;
    float item_4_2 = fpu_val_7_17 + fpu_val_6_12;
    AI_UpdateSensors_24(&item_18, &item_c, entity_1);
    long double fpu_val_7_20 = Sys_CloseFileStream_17(source_val) * 0.5f;
    item_18 = item_18 - fpu_val_7_20;
    float item_14_2 = item_14_1 - Sys_ExecuteBytecode_17(source_val) * 0.5f;
    item_18 = item_18 - 10.0f;
    Sys_AllocateMemory_15(source_val, item_18, item_14_2, 128.0f, 128.0f, 128.0f, 0x3f800000, 0x44051eb8, 0, 0x400c0000,
        0xffffffff);
}
