#include "gi_platform.h"
#include "004B2670-Sys_PushStack_8.h"
int32_t __fastcall Sys_PushStack_8(int32_t a1)

{
    int32_t result = a1;
    int32_t objC = g_546fb4;
    result = 1;
    int32_t objC1 = *((objC << 2) + &g_a94e84);

    if (!objC1)
        return 1;

    objC1(&result);
    return result;
}
