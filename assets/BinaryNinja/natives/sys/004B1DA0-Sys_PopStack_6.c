#include "Sys_PopStack_6.h"
int32_t Sys_PopStack_6(int32_t a1, int32_t a2)

{
    int32_t result = a1 * 0x23;
    *((result << 2) + &g_9436ec) = a2;
    return result;
}
