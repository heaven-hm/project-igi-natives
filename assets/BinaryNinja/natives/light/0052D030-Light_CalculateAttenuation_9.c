// Original IGI.EXE function: Light_CalculateAttenuation_9 (VA 0x0052D030; static CFG gate PASS, CFG score 1.000).
#include "Light_CalculateAttenuation_9.h"
int32_t Light_CalculateAttenuation_9(void* context)

{
    g_a84568 = 0;
    int32_t* data_val = *(context + 0x50);
    (*(*data_val + 8))(data_val);
    return Sys_ExecuteBytecode_2(context);
}
