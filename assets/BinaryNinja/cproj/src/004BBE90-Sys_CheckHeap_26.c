#include "gi_platform.h"
#include "004BBE90-Sys_CheckHeap_26.h"
int32_t Sys_CheckHeap_26(char* a1)

{
    char v_400;
    char arg_8;
    String_VFormat(&v_400, a1, &arg_8);
    int32_t valA = g_a442c4;
    g_a442c8 += 1;

    if (valA)
        return valA(&v_400, g_a442b4);

    Error_Show(&v_400);

    while (true)
        /* nop */
}
