// IGI native provenance: AI_UpdatePatrol_8 - 0x00455EE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00455EE0-AI_UpdatePatrol_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdatePatrol_8.h"
int32_t AI_UpdatePatrol_8(void* context, void* param_2)

{
    void* data_1;
    int32_t entity_val;
    data_1 = Table_GetAt(param_2 + 0x4c4, 0);
    int32_t temp_val;
    HumanPlayer_LoadParameters_13(data_1, temp_val, entity_val, data_1);
    void item_8;
    Script_ParseEnumReal32_13(data_1, &item_8);
    int32_t temp_1 = *(context + 8);

    if (!(temp_1 & 4))
    {
        void* data_2 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0xb;
        int32_t data_3 = *(data_2 + 0x2c);
        *(context + 0x14) = data_3;
        return data_3(context, param_2);
    }

    if (temp_1 & 0x10000)
    {
        void* data_5 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0xc;
        int32_t data_6 = *(data_5 + 0x30);
        *(context + 0x14) = data_6;
        return data_6(context, param_2);
    }

    if (temp_1 & 0x20000)
    {
        void* data_8 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0xd;
        int32_t data_9 = *(data_8 + 0x34);
        *(context + 0x14) = data_9;
        return data_9(context, param_2);
    }

    long double fpu7 = *(param_2 + 0x1c8);
    long double f0 = 0.0f;
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(param_2 + 0x4d1) = 1;

    if (!(temp_1 & 1) || *(&temp_1 + 1) & 2)
        return result;

    int32_t* data_11 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0;
    int32_t data_12 = *data_11;
    *(context + 0x14) = data_12;
    return data_12(context, param_2);
}
