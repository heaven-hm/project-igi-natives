// Original IGI.EXE function: Sys_FreeMemory_27 (VA 0x004BBF40; static CFG gate PASS, CFG score 1.000).
#include "Sys_FreeMemory_27.h"
int32_t Sys_FreeMemory_27(int32_t context, int32_t* param_2)

{
    return Sys_CloseFileStream_4(param_2, context * 0x14 + &g_a43ee0, 0x13);
}
