// IGI native provenance: AI_UpdateSensors_11 - 0x00459180 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00459180-AI_UpdateSensors_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_UpdateSensors_11.h"
void* AI_UpdateSensors_11(void* context, int32_t param_2)

{
    void* result = Table_GetAt(param_2 + 0x4c4, 0);
    int32_t entity_val = *(context + 8);

    if (!(entity_val & 4))
    {
        void* temp_1 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x1d;
        int32_t data_1 = *(temp_1 + 0x74);
        *(context + 0x14) = data_1;
        return data_1(context, param_2);
    }

    if (entity_val & 0x10000)
    {
        void* entity_2 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x1f;
        int32_t data_4 = *(entity_2 + 0x7c);
        *(context + 0x14) = data_4;
        return data_4(context, param_2);
    }

    if (entity_val & 0x20000)
    {
        void* data_6 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0x22;
        int32_t data_7 = *(data_6 + 0x88);
        *(context + 0x14) = data_7;
        return data_7(context, param_2);
    }

    if (!(entity_val & 1))
        return result;

    Script_SpawnNewTask_13(result, 1);
    void* temp_3 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 0x1a;
    int32_t data_9 = *(temp_3 + 0x68);
    *(context + 0x14) = data_9;
    return data_9(context, param_2);
}
