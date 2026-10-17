// Original IGI.EXE function: Sys_DispatchOpcode_22 (VA 0x004B7FE0; static CFG gate FAIL, CFG score 0.667).
#include "Sys_DispatchOpcode_22.h"
int32_t Sys_DispatchOpcode_22(int32_t context, double* param_2)

{
    int32_t temp_val = *param_2;
    int32_t item_c = *(param_2 + 4);
    int32_t item_18 = *param_2;
    int32_t item_10 = temp_val;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
