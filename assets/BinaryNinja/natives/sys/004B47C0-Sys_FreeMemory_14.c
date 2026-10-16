#include "Sys_FreeMemory_14.h"
uint32_t Sys_FreeMemory_14(int32_t* a1, int32_t a2)

{
    return COMBINE(0, Sys_CheckHeap_13(a1)) % a2;
}
