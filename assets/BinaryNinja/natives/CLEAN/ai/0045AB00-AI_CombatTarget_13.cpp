// IGI native provenance: AI_CombatTarget_13 - 0x0045AB00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045AB00-AI_CombatTarget_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CombatTarget_13.h"
int32_t AI_CombatTarget_13(void* context, void* param_2)

{
    void* data_1;
    int32_t entity_val;
    data_1 = Table_GetAt(param_2 + 0x4c4, 0);
    int32_t temp_val;
    HumanPlayer_LoadParameters_13(data_1, temp_val, entity_val, data_1);
    void item_8;
    Script_ParseEnumReal32_13(data_1, &item_8);
    int32_t context_val = *(context + 8);

    if (!(context_val & 4))
    {
        void* data_2 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x1d;
        int32_t data_3 = *(data_2 + 0x74);
        *(context + 0x14) = data_3;
        return data_3(context, param_2);
    }

    if (context_val & 0x10000)
    {
        void* temp_2 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x1e;
        int32_t data_5 = *(temp_2 + 0x78);
        *(context + 0x14) = data_5;
        return data_5(context, param_2);
    }

    if (context_val & 0x20000)
    {
        void* entity_2 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x20;
        int32_t data_8 = *(entity_2 + 0x80);
        *(context + 0x14) = data_8;
        return data_8(context, param_2);
    }

    Script_SpawnNewTask_13(data_1, 1);
    long double fpu7 = *(param_2 + 0x1c8);
    long double f0 = 0.0f;
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(param_2 + 0x4d1) = 1;

    if (!(*(context + 8) & 0x1000000))
    {
        if (!(context_val & 0x40000))
        {
            void* temp_4 = *(context + 4);
            *(context + 0xc) = *(context + 0x10);
            *(context + 0x10) = 2;
            int32_t data_13 = *(temp_4 + 8);
            *(context + 0x14) = data_13;
            return data_13(context, param_2);
        }

        void* data_10 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 3;
        int32_t data_11 = *(data_10 + 0xc);
        *(context + 0x14) = data_11;
        return data_11(context, param_2);
    }

    if (!(context_val & 0x80))
    {
        int32_t* entity_4 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0;
        int32_t data_16 = *entity_4;
        *(context + 0x14) = data_16;
        return data_16(context, param_2);
    }

    if (!(context_val & 1) || *(&context_val + 1) & 2)
        return result;

    void* data_18 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0x11;
    int32_t data_19 = *(data_18 + 0x44);
    *(context + 0x14) = data_19;
    return data_19(context, param_2);
}
