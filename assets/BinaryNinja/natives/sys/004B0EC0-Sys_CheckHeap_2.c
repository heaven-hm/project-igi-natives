#include "Sys_CheckHeap_2.h"
int32_t Sys_CheckHeap_2(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t result = a2 + a1 * 0x82;
    *((result << 2) + &g_a950a4) = a3;
    return result;
}
