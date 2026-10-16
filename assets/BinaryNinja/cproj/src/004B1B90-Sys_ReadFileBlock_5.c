#include "gi_platform.h"
#include "004B1B90-Sys_ReadFileBlock_5.h"
int32_t Sys_ReadFileBlock_5(int32_t a1, int32_t a2)

{
    int32_t result = a2(a1);

    if (result)
        *(result * 0x8c + &g_943708) = 1;

    return result;
}
