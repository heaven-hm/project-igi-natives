// Original IGI.EXE function: Script_SpawnNewTask_13 (VA 0x004F2350; static CFG gate FAIL, CFG score 0.667).
#include "Script_SpawnNewTask_13.h"
int32_t Script_SpawnNewTask_13(void* context, char param_2)

{
    int32_t temp_val = 0;
    param_2 = param_2;
    int32_t data_val = 0;
    data_val = g_a76c01;
    temp_val = *(context + 0x1c);
    return (*(((data_val * 0x180 + temp_val) << 2) + &g_a96ae0))(context, &param_2);
}
