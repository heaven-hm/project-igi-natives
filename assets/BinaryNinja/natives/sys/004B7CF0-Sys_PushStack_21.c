// Original IGI.EXE function: Sys_PushStack_21 (VA 0x004B7CF0; static CFG gate FAIL, CFG score 0.833).
#include "Sys_PushStack_21.h"
int32_t Sys_PushStack_21(int32_t* context, int32_t param_2, int32_t param_3)

{
    int32_t data_val = Sys_ReadFileBlock_3();
    int32_t* item_c = context;
    *context = data_val;
    return (*((g_a84a48 << 2) + &g_a94e84))(&item_c, item_c, param_3, param_2);
}
