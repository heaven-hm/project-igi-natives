#include "004B7E10-Sys_FreeMemory_22.h"
/* 0x004b7e10 Sys_FreeMemory_22 full linked: callers=40 callees=2 */
int32_t sub_4b7e10(char* a1)

{
    int32_t result = g_a96598;
    g_a965a8 = 1;

    if (!result)
        return result;

    void var_400;
    void arg_8;
    String_VFormat(&var_400, a1, &arg_8);
    int32_t eax = g_a43e70;

    if (eax)
        return eax(&var_400, g_a43e68);

    Error_Show(&var_400);

    while (true)
        /* nop */
}
