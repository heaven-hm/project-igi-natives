// Original IGI.EXE function: Sys_CloseFileStream_4 (VA 0x004B1700; static CFG gate FAIL, CFG score 0.667).
#include "Sys_CloseFileStream_4.h"
int32_t Sys_CloseFileStream_4(int32_t* context, int32_t param_2, int32_t param_3)

{
    int32_t entity_val = *context;
    return (*(entity_val * 0x8c + &g_9436c4))(entity_val, context, param_2, param_3);
}
