// Original IGI.EXE function: Sys_ReadFileBlock_29 (VA 0x004BD860; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_29.h"
int32_t Sys_ReadFileBlock_29(void* context)

{
    Sys_UnknownDataType_3(context, nullptr, nullptr, nullptr);
    int32_t result = *(context + 0x14) + 1;
    *(context + 0x14) = result;
    return result;
}
