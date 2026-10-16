#include "gi_platform.h"
#include "004B6E90-Sys_FreeMemory_18.h"
void* Sys_FreeMemory_18(int32_t* a1, char* a2)

{
    Sys_ExecuteBytecode_21(*a1);
    return Sys_AllocateMemory_21(*a1, a2, 0, nullptr);
}
