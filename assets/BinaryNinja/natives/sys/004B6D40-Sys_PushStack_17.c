#include "Sys_PushStack_17.h"
int32_t Sys_PushStack_17(void* a1)

{
    int32_t valA = 0;
    valA = *(a1 + 0x14);
    return *(*(a1 + 8) + valA * 0x24 + 4) >> 0x10 & 1;
}
