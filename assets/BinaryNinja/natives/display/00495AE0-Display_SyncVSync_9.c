// Original IGI.EXE function: Display_SyncVSync_9 (VA 0x00495AE0; static CFG gate PASS, CFG score 1.000).
#include "Display_SyncVSync_9.h"
int32_t Display_SyncVSync_9()

{
    void* valA5 = g_6840f0;

    if (valA5)
    {
        Sys_ExecuteBytecode_2(valA5);
        g_6840f0 = 0;
        g_6840f8 = 0;
        g_6840f4 = 0;
    }

    int32_t result = g_67a498;

    if (!result)
        return result;

    if (g_6840ea)
    {
        int32_t* valA1 = g_67a49c;
        (*(*valA1 + 8))(valA1);
    }

    int32_t* valA2 = g_5ca154;
    (*(*valA2 + 0x48))(valA2);
    int32_t* valA3 = g_5ca154;
    (*(*valA3 + 8))(valA3);
    int32_t* valA4 = g_67a498;
    return (*(*valA4 + 8))(valA4);
}
