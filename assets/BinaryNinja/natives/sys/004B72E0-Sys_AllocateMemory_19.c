// Original IGI.EXE function: Sys_AllocateMemory_19 (VA 0x004B72E0; static CFG gate PASS, CFG score 1.000).
#include "Sys_AllocateMemory_19.h"
int32_t Sys_AllocateMemory_19(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t* temp_4 = g_a43e50;
    int32_t entity_val = *temp_4;
    *temp_4 = entity_val + 1;
    temp_4[entity_val * 3 + 3] = g_a43e54 + 0x943e4c;
    g_a43e54 += param_2;
    temp_4[entity_val * 3 + 2] = context;
    temp_4[entity_val * 3 + 4] = param_3;
    return temp_4[entity_val * 3 + 3];
}
