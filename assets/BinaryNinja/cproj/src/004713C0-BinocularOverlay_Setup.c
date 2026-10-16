#include "gi_platform.h"
#include "004713C0-BinocularOverlay_Setup.h"
int32_t BinocularOverlay_Setup(void* a1)

{
    Sys_ReadFileBlock_18((*(int32_t*)(uintptr_t)(a1 + 0x20)));
    Sys_ReadFileBlock_18((*(int32_t*)(uintptr_t)(a1 + 0x34)));
    Sys_ReadFileBlock_18((*(int32_t*)(uintptr_t)(a1 + 0x24)));
    Sys_ReadFileBlock_18((*(int32_t*)(uintptr_t)(a1 + 0x28)));
    Sys_ReadFileBlock_18((*(int32_t*)(uintptr_t)(a1 + 0x2c)));
    return Sys_ReadFileBlock_18((*(int32_t*)(uintptr_t)(a1 + 0x30)));
}
