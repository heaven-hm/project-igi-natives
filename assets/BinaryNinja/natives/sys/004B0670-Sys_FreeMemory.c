#include "Sys_FreeMemory.h"
int32_t Sys_FreeMemory(int32_t a1, int32_t a2, int32_t a3)

{
    return *((a3 << 8) + a1 + a2);
}
