// Original IGI.EXE function: Script_ExecuteLevelScript_12 (VA 0x004F2070; static CFG gate PASS, CFG score 0.867).
#include "Script_ExecuteLevelScript_12.h"
void* Script_ExecuteLevelScript_12(int32_t context, char* param_2, void* param_3)

{
    char* dest_val = param_2;
    void* result = Table_GetAt(context, dest_val);
    void* result_1 = result;

    if (result_1)
    {
        int32_t data_val = 0;
        int32_t entity_1 = 0;
        data_val = g_a76c03;
        entity_1 = *(result_1 + 0x1c);
        (*(((data_val * 0x180 + entity_1) << 2) + &g_a96ae0))(result_1, &param_2);
        *param_2 = 0;
        int32_t data_5 = Script_SpawnNewTask_12();
        int32_t temp_1 = 0;
        temp_1 = *(result_1 + 0x1c);
        result = *(((data_5 * 0x180 + temp_1) << 2) + &g_a96ae0);

        if (result)
            result = result(result_1);
    }

    if (param_3)
    {
        int32_t data_6 = 0;
        int32_t entity_5 = 0;
        data_6 = g_a76c03;
        entity_5 = *(param_3 + 0x1c);
        (*(((data_6 * 0x180 + entity_5) << 2) + &g_a96ae0))(param_3, &param_2);
        *param_2 = 1;
        int32_t data_11 = Script_FormatString_11();
        int32_t temp_2 = 0;
        temp_2 = *(param_3 + 0x1c);
        result = (*(((data_11 * 0x180 + temp_2) << 2) + &g_a96ae0))(param_3);
    }

    *(context + (dest_val << 2)) = param_3;
    return result;
}
