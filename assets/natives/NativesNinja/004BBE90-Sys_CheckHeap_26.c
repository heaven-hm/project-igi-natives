#include "004BBE90-Sys_CheckHeap_26.h"
/* 0x004bbe90 Sys_CheckHeap_26 full linked: callers=1 callees=2 */
int32_t sub_4bbe90(char* a1)

{
    void var_400;
    void arg_8;
    String_VFormat(&var_400, a1, &arg_8);
    int32_t eax = g_a442c4;
    g_a442c8 += 1;

    if (eax)
        return eax(&var_400, g_a442b4);

    Error_Show(&var_400);

    while (true)
        /* nop */
}
