// Original IGI.EXE function: AI_AlertAllies_8 (VA 0x004564B0; static CFG gate PASS, CFG score 1.000).
#include "AI_AlertAllies_8.h"
void* AI_AlertAllies_8(void* context, int32_t param_2)

{
    void* result = Table_GetAt(param_2 + 0x4c4, 0);
    int32_t entity_val = *(context + 8);

    if (!(entity_val & 4))
    {
        void* temp_1 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0xb;
        int32_t data_1 = *(temp_1 + 0x2c);
        *(context + 0x14) = data_1;
        return data_1(context, param_2);
    }

    if (entity_val & 0x10000)
    {
        void* entity_2 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0xc;
        int32_t data_4 = *(entity_2 + 0x30);
        *(context + 0x14) = data_4;
        return data_4(context, param_2);
    }

    if (entity_val & 0x20000)
    {
        void* data_6 = *(context + 4);
        *(context + 0xc) = *(context + 0x10);
        *(context + 0x10) = 0xd;
        int32_t data_7 = *(data_6 + 0x34);
        *(context + 0x14) = data_7;
        return data_7(context, param_2);
    }

    if (!(entity_val & 1))
        return result;

    Script_SpawnNewTask_13(result, 1);
    void* temp_3 = *(context + 4);
    *(context + 0xc) = *(context + 0x10);
    *(context + 0x10) = 7;
    int32_t data_9 = *(temp_3 + 0x1c);
    *(context + 0x14) = data_9;
    return data_9(context, param_2);
}
