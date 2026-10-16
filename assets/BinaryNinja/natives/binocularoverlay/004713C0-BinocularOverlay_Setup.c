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
