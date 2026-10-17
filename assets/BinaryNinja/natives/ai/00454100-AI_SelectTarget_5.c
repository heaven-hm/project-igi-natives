// IGI native provenance: AI_SelectTarget_5 - 0x00454100 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00454100-AI_SelectTarget_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_SelectTarget_5.h"
void* AI_SelectTarget_5(void* context, int32_t param_2)

{
    void* result = Table_GetAt(param_2 + 0x4c4, 0);
    int32_t context_val = *(context + 8);

    if (!(context_val & 4))
    {
        void* temp_val = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 8;
        int32_t data_1 = *(temp_val + 0x20);
        *(context + 0x14) = data_1;
        return data_1(context, param_2);
    }

    if (context_val & 0x10000)
    {
        void* entity_2 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 9;
        int32_t data_4 = *(entity_2 + 0x24);
        *(context + 0x14) = data_4;
        return data_4(context, param_2);
    }

    if (context_val & 0x20000)
    {
        void* data_6 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0xa;
        int32_t data_7 = *(data_6 + 0x28);
        *(context + 0x14) = data_7;
        return data_7(context, param_2);
    }

    if (!(context_val & 1))
        return result;

    Script_SpawnNewTask_13(result, 1);

    if (!(context_val & 0x200000))
    {
        int32_t* entity_4 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0;
        int32_t data_12 = *entity_4;
        *(context + 0x14) = data_12;
        return data_12(context, param_2);
    }

    void* temp_2 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 5;
    int32_t data_9 = *(temp_2 + 0x14);
    *(context + 0x14) = data_9;
    return data_9(context, param_2);
}
