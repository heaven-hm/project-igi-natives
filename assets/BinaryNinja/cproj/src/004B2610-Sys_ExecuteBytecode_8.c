#include "gi_platform.h"
#include "004B2610-Sys_ExecuteBytecode_8.h"
int32_t Sys_ExecuteBytecode_8(int32_t a1)

{
    int32_t objC = g_546fb8;
    a1 = a1;
    int32_t result = *((objC << 2) + &g_a94e84);

    if (result)
        result = result(&a1);

    return result;
}
