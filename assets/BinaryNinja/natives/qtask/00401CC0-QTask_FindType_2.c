// Original IGI.EXE function: QTask_FindType_2 (VA 0x00401CC0; static CFG gate PASS, CFG score 1.000).
#include "QTask_FindType_2.h"
void* QTask_FindType_2(void* context, int16_t param_2)

{
    void* i;

    for (i = *(context + 0x14); i; i = *(i + 0x14))
    {
        int32_t entity_val;
        entity_val = *(i + 0x1c);
        char data_val;
        data_val = TaskType_IsDerivedFrom(entity_val, param_2);

        if (data_val)
            break;
    }

    return i;
}
