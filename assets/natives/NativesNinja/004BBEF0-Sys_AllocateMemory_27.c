#include "004BBEF0-Sys_AllocateMemory_27.h"
/* 0x004bbef0 Sys_AllocateMemory_27 full linked: callers=1 callees=1 */
int32_t sub_4bbef0(char* a1)

{
    int32_t result = g_a442c0;

    if (!result)
        return result;

    void var_400;
    void arg_8;
    String_VFormat(&var_400, a1, &arg_8);
    return g_a442c0(&var_400, g_a442cc);
}
