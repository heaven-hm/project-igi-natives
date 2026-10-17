// Original IGI.EXE function: Display_SetDisplayMode_16 (VA 0x00498380; static CFG gate FAIL, CFG score 0.778).
#include "Display_SetDisplayMode_16.h"
int32_t Display_SetDisplayMode_16(int32_t* context, int32_t param_2, int32_t param_3)

{
    int32_t source_2 = (param_2 * param_3) << 2;
    void* data_val = Mem_Alloc(source_2, 4);
    context[2] = data_val;
    context[1] = param_3;
    *context = param_2;
    memset(memset(data_val, 0, source_2 & 0xfffffffc), 0, source_2 & 3);
    return 0;
}
