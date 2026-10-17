// Original IGI.EXE function: Sys_ExecuteBytecode_2 (VA 0x004B0D10; static CFG gate PASS, CFG score 1.000).
#include "Sys_ExecuteBytecode_2.h"
int32_t Sys_ExecuteBytecode_2(void* context)

{
    int32_t* data_val = context - 4;
    data_val &= 0xfc;
    g_942300 -= 1;
    int32_t* source_val = *data_val;
    int32_t* item_c = source_val;
    return Camera_UpdateTransform_9(Camera_ApplyHandiCam_33(source_val));
}
