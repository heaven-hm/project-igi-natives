#include "Sys_AllocateMemory_27.h"
int32_t Sys_AllocateMemory_27(char* a1)

{
    int32_t result = g_a442c0;

    if (!result)
        return result;

    void v_400;
    void arg_8;
    String_VFormat(&v_400, a1, &arg_8);
    return g_a442c0(&v_400, g_a442cc);
}
