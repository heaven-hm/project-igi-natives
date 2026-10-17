// Original IGI.EXE function: Display_RestoreDevice_9 (VA 0x00495C80; static CFG gate PASS, CFG score 1.000).
#include "Display_RestoreDevice_9.h"
int32_t* Display_RestoreDevice_9()

{
    int32_t* result = g_5ca194;

    if (!result)
        return result;

    Sys_ReadFileBlock_4(result);
    int32_t* valA = g_5ca190;
    (*(*valA + 0x48))(valA);
    int32_t* valA1 = g_5ca190;
    return (*(*valA1 + 8))(valA1);
}
