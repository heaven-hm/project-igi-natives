#include "004B1B90-Sys_ReadFileBlock_5.h"
/* 0x004b1b90 Sys_ReadFileBlock_5 full linked: callers=1 callees=0 */
int32_t sub_4b1b90(int32_t a1, int32_t a2)

{
    int32_t result = a2(a1);

    if (result)
        *(result * 0x8c + &g_943708) = 1;

    return result;
}
