// Original IGI.EXE function: Sys_AllocateMemory_27 (VA 0x004BBEF0; static CFG gate FAIL, CFG score 0.833).
#include "Sys_AllocateMemory_27.h"
int32_t Sys_AllocateMemory_27(char* context)

{
    int32_t result = g_a442c0;

    if (!result)
        return result;

    void item_400;
    void arg_8;
    String_VFormat(&item_400, context, &arg_8);
    return g_a442c0(&item_400, g_a442cc);
}
