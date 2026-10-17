// Original IGI.EXE function: Script_SpawnNewTask_31 (VA 0x004FE120; static CFG gate FAIL, CFG score 0.667).
#include "Script_SpawnNewTask_31.h"
int32_t Script_SpawnNewTask_31(void* context, int32_t param_2, int32_t* param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7, int16_t param_8, int32_t param_9)

{
    int32_t data_val = *(context + 0xf0);

    if (data_val < *(context + 0xf8))
    {
        void* data_1 = *(*(context + 0x6c) + (data_val << 2));
        memcpy(data_1, param_2, 0x18);
        memcpy(data_1 + 0x40, param_2, 0x18);
        *(data_1 + 0x18) = *param_3;
        *(data_1 + 0x1c) = param_3[1];
        *(data_1 + 0x20) = param_3[2];
        *(data_1 + 0x24) = g_a7a4dc;
        int32_t temp_5 = (*g_a7a4dc + 1) & 0x8000000f;

        if (temp_5 < 0)
            temp_5 = ((temp_5 - 1) | 0xfffffff0) + 1;

        g_a7a4dc = temp_5;
        *(data_1 + 0x26) = param_8;
        *(data_1 + 0x30) = param_4;
        *(data_1 + 0x38) = param_6;
        *(data_1 + 0x3c) = param_7;
        *(data_1 + 0x2c) = param_5;
        *(data_1 + 0x28) = 0;
        *(data_1 + 0x2a) = 0;

        if (param_9)
        {
            *(data_1 + 0x34) = 1.0f / param_9;
            int32_t data_3 = *(context + 0xf0) + 1;
            *(context + 0xf0) = data_3;
            return data_3;
        }

        *(data_1 + 0x34) = 0x3f800000;
        data_val = *(context + 0xf0) + 1;
        *(context + 0xf0) = data_val;
    }

    return data_val;
}
