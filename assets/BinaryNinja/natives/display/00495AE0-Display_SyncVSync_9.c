// Original IGI.EXE function: Display_SyncVSync_9 (VA 0x00495AE0; static CFG gate PASS, CFG score 1.000).
#include "Display_SyncVSync_9.h"
int32_t Display_SyncVSync_9()

{
    void* data_5 = g_6840f0;

    if (data_5)
    {
        Sys_ExecuteBytecode_2(data_5);
        g_6840f0 = 0;
        g_6840f8 = 0;
        g_6840f4 = 0;
    }

    int32_t result = g_67a498;

    if (!result)
        return result;

    if (g_6840ea)
    {
        int32_t* data_1 = g_67a49c;
        (*(*data_1 + 8))(data_1);
    }

    int32_t* data_2 = g_5ca154;
    (*(*data_2 + 0x48))(data_2);
    int32_t* data_3 = g_5ca154;
    (*(*data_3 + 8))(data_3);
    int32_t* data_4 = g_67a498;
    return (*(*data_4 + 8))(data_4);
}
