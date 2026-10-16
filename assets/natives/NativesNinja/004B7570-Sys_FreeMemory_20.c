#include "004B7570-Sys_FreeMemory_20.h"
/* 0x004b7570 Sys_FreeMemory_20 full linked: callers=5 callees=0 */
int32_t sub_4b7570(void* a1)

{
    if (!a1)
        return 0;

    return *(a1 + 0x10);
}
