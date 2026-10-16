#include "gi_platform.h"
#include "004B7450-Sys_PushStack_19.h"
int32_t Sys_PushStack_19(int32_t a1, int32_t a2)

{
    (*(int32_t*)(uintptr_t)(a1 + (a2 << 2) + 0x14)) = 0;
    return a2;
}
