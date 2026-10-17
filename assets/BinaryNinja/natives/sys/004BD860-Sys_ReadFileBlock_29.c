// Original IGI.EXE function: Sys_ReadFileBlock_29 (VA 0x004BD860; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_29.h"
int32_t Sys_ReadFileBlock_29(void* a1)

{
    Sys_UnknownDataType_3(a1, nullptr, nullptr, nullptr);
    int32_t result = *(a1 + 0x14) + 1;
    *(a1 + 0x14) = result;
    return result;
}
