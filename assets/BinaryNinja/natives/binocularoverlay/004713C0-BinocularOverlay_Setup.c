// Original IGI.EXE function: BinocularOverlay_Setup (VA 0x004713C0; static CFG gate PASS, CFG score 1.000).
#include "BinocularOverlay_Setup.h"
int32_t BinocularOverlay_Setup(void* a1)

{
    Sys_ReadFileBlock_18(*(a1 + 0x20));
    Sys_ReadFileBlock_18(*(a1 + 0x34));
    Sys_ReadFileBlock_18(*(a1 + 0x24));
    Sys_ReadFileBlock_18(*(a1 + 0x28));
    Sys_ReadFileBlock_18(*(a1 + 0x2c));
    return Sys_ReadFileBlock_18(*(a1 + 0x30));
}
