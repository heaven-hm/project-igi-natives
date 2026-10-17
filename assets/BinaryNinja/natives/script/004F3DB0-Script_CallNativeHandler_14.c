// Original IGI.EXE function: Script_CallNativeHandler_14 (VA 0x004F3DB0; static CFG gate PASS, CFG score 0.889).
#include "Script_CallNativeHandler_14.h"
int32_t* Script_CallNativeHandler_14(void* context, int32_t* param_2)

{
    void* data_1 = Script_ExecuteLevelScript_4(*(context + 0x2014c));
    int32_t* result = param_2;
    int32_t source_val = *result;
    int32_t item_4 = result[1];
    int32_t item_8 = source_val;
    item_8 = source_val + 0xe8;
    memcpy(context + 0x6c, source_val, 0xe8);
    *(context + 0x20154) = result[1];

    if (data_1)
    {
        uint32_t data_3 = Script_SpawnNewTask_16();
        int32_t entity_2 = 0;
        entity_2 = *(data_1 + 0x1c);
        result = *(((data_3 * 0x180 + entity_2) << 2) + &g_a96ae0);

        if (result)
            return result(data_1, &item_8);
    }

    return result;
}
