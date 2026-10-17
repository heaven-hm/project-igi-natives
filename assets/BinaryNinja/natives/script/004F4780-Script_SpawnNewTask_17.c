// Original IGI.EXE function: Script_SpawnNewTask_17 (VA 0x004F4780; static CFG gate FAIL, CFG score 0.667).
#include "Script_SpawnNewTask_17.h"
int32_t Script_SpawnNewTask_17(void* context, int32_t* param_2)

{
    int32_t* data_val = *param_2;
    *(context + 0x108) = *data_val;
    *(context + 0x10c) = data_val[1];
    *(context + 0x110) = data_val[2];
    memcpy(context + 0x70, &data_val[0xa], 0x28);
    *(context + 0x720) = data_val[0x14];
    *(context + 0x724) = data_val[0x15];
    *(context + 0x728) = data_val[0x16];
    *(context + 0x72c) = data_val[0x17];
    *(context + 0x730) = data_val[0x18];
    *(context + 0x734) = data_val[0x19];
    *(context + 0x738) = data_val[0x1a];
    int32_t result = data_val[0x1b];
    *(context + 0x73c) = result;
    return result;
}
