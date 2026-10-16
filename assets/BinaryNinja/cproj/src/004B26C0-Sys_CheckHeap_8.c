#include "gi_platform.h"
#include "004B26C0-Sys_CheckHeap_8.h"
int32_t Sys_CheckHeap_8()

{
    int32_t result = Sys_FreeMemory_9();

    if (*((result << 2) + &g_a94e84))
        result = ((int(*)())(uintptr_t)(*((Sys_FreeMemory_9() << 2) + &g_a94e84)))(0);

    return result;
}
