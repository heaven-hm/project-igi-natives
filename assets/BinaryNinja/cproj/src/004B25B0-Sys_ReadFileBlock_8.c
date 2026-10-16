#include "gi_platform.h"
#include "004B25B0-Sys_ReadFileBlock_8.h"
int32_t Sys_ReadFileBlock_8(int32_t a1, int32_t a2)

{
    int32_t v_4 = a2;
    int32_t result = *((g_546fa0 << 2) + &g_a94e84);
    int32_t v_8 = a1;

    if (!result)
        return result;

    return result(&v_8);
}
