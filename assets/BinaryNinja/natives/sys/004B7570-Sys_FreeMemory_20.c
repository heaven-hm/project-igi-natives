#include "Sys_FreeMemory_20.h"
int32_t Sys_FreeMemory_20(void* a1)

{
    if (!a1)
        return 0;

    return *(a1 + 0x10);
}
