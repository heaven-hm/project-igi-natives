#include "gi_platform.h"
#include "004BD860-Sys_ReadFileBlock_29.h"
int32_t Sys_ReadFileBlock_29(void* a1)

{
    Sys_UnknownDataType_3(a1, nullptr, nullptr, nullptr);
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0x14)) + 1;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = result;
    return result;
}
