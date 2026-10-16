#include "Sys_PushStack_19.h"
int32_t Sys_PushStack_19(int32_t a1, int32_t a2)

{
    *(a1 + (a2 << 2) + 0x14) = 0;
    return a2;
}
