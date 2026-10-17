// IGI native provenance: Script_ParseEnumInt32_30 - 0x004FD4E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FD4E0-Script_ParseEnumInt32_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumInt32_30.h"
float Script_ParseEnumInt32_30(void* context, float param_2) {
    long double fpu7 = 0.0f;
    long double fpu6 = 0.0f;
    float temp_val = g_b818a8;
    float item_8 = fpu6;
    long double fpu5 = 0.0f;
    float entity_val = g_b818a4;
    int32_t i_1 = g_b041e8;
    float item_4 = fpu5;

    if (i_1 > 0)
    {
        int32_t* entity_1 = g_b041e4;
        int32_t dest_1 = g_b041e0;
        int32_t i;

        do
        {
            int32_t data_1 = *entity_1;
            entity_1 = &entity_1[1];
            int32_t data_2 = data_1 * g_b041f0;
            fpu7 = fpu7 + *(data_2 + dest_1 + 0xc);
            fpu6 = fpu6 + *(data_2 + dest_1 + 0x10);
            fpu5 = fpu5 + *(data_2 + dest_1 + 0x14);
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        item_4 = fpu5;
        item_8 = fpu6;
    }

    long double fpu_val_7_2 = fpu7 + g_b818a0;
    *param_2 = fpu_val_7_2;
    long double fpu_val_6_4 = entity_val + item_8;
    *(param_2 + 4) = fpu_val_6_4;
    long double fpu_val_6_6 = temp_val + item_4;
    *(param_2 + 8) = fpu_val_6_6;
    *param_2 = fpu_val_7_2 * *(context + 0xdc) * 255.0f;
    *(param_2 + 4) = fpu_val_6_4 * *(context + 0xdc) * 255.0f;
    *(param_2 + 8) = fpu_val_6_6 * *(context + 0xdc) * 255.0f;
    return param_2;
}
