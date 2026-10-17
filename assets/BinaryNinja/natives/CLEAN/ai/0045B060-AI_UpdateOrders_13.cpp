// IGI native provenance: AI_UpdateOrders_13 - 0x0045B060 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045B060-AI_UpdateOrders_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateOrders_13.h"
int32_t AI_UpdateOrders_13(void* context, void* param_2)

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
        *(context + 0x10) = 0x1d;
        int32_t data_3 = *(data_2 + 0x74);
        *(context + 0x14) = data_3;
        return data_3(context, param_2);
    }

    if (temp_1 & 0x10000)
    {
        void* data_5 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x1e;
        int32_t data_6 = *(data_5 + 0x78);
        *(context + 0x14) = data_6;
        return data_6(context, param_2);
    }

    if (temp_1 & 0x20000)
    {
        void* data_8 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x20;
        int32_t data_9 = *(data_8 + 0x80);
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

    *(context + 0xc) = *(context + 0x10);

    if (!(temp_1 & 0x2000000))
    {
        void* data_14 = *(context + 4);
        *(context + 0x10) = 0xc;
        int32_t data_15 = *(data_14 + 0x30);
        *(context + 0x14) = data_15;
        return data_15(context, param_2);
    }

    void* data_11 = *(context + 4);
    *(context + 0x10) = 0xa;
    int32_t data_12 = *(data_11 + 0x28);
    *(context + 0x14) = data_12;
    return data_12(context, param_2);
}
