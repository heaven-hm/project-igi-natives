#include "004B26C0-Sys_CheckHeap_8.h"
/* 0x004b26c0 Sys_CheckHeap_8 full linked: callers=1 callees=2 */
int32_t sub_4b26c0()

{
    int32_t result = sub_4b26f0();

    if (*((result << 2) + &g_a94e84))
        result = (*((sub_4b26f0() << 2) + &g_a94e84))(0);

    return result;
}
