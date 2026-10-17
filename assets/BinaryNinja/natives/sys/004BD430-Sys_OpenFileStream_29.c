// Original IGI.EXE function: Sys_OpenFileStream_29 (VA 0x004BD430; static CFG gate PASS, CFG score 1.000).
#include "Sys_OpenFileStream_29.h"
int32_t Sys_OpenFileStream_29()

{
    for (int32_t i = 0; i < 4; i += 1)
    {
        for (int32_t j = 0; j < 0x31; j += 1)
            Sys_AllocateMemory_29(j, i, sub_4bc950);
    }

    for (int32_t i_1 = 0; i_1 < 0x31; i_1 += 1)
    {
        Sys_AllocateMemory_29(i_1, 0, sub_4bec90);
        Sys_AllocateMemory_29(i_1, 1, sub_4becb0);
    }

    Sys_AllocateMemory_29(0, 0, sub_4bec80);
    Sys_AllocateMemory_29(1, 0, sub_4bec70);
    Sys_AllocateMemory_29(3, 0, Sys_InternalError);
    Sys_AllocateMemory_29(4, 0, Sys_InternalError_2);
    Sys_AllocateMemory_29(2, 0, Sys_InternalError_3);
    Sys_AllocateMemory_29(5, 0, Sys_CloseFileStream_30);
    Sys_AllocateMemory_29(6, 0, Sys_InternalError_3);
    Sys_AllocateMemory_29(7, 0, Sys_UnhandledOpcode);
    Sys_AllocateMemory_29(0xb, 0, Sys_UnhandledOpcode);
    Sys_AllocateMemory_29(0xf, 0, Sys_FreeMemory_30);
    Sys_AllocateMemory_29(0x10, 0, Sys_AllocateMemory_30);
    Sys_AllocateMemory_29(0x11, 0, Sys_OpenFileStream_30);
    Sys_AllocateMemory_29(0x13, 0, sub_4bec90);
    Sys_AllocateMemory_29(0x17, 0, sub_4bec90);
    Sys_AllocateMemory_29(0x18, 0, Sys_CloseFileStream_29);
    Sys_AllocateMemory_29(0x19, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x1a, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x1b, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x1c, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x1d, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x1e, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x1f, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x20, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x21, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x22, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x23, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x24, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x25, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x26, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x27, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x28, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x29, 0, sub_4bdc40);
    Sys_AllocateMemory_29(0x2b, 0, sub_4be6a0);
    Sys_AllocateMemory_29(0x2c, 0, sub_4be6a0);
    Sys_AllocateMemory_29(0x2d, 0, sub_4be6a0);
    Sys_AllocateMemory_29(0x2e, 0, sub_4be6a0);
    Sys_AllocateMemory_29(0x2a, 0, Sys_ResolveSymbol_29);
    Sys_AllocateMemory_29(0x12, 0, Sys_ReadFileBlock_29);
    Sys_AllocateMemory_29(0x14, 0, sub_4bd730);
    Sys_AllocateMemory_29(0x16, 0, sub_4bd730);
    Sys_AllocateMemory_29(0x15, 0, sub_4bd730);
    Sys_AllocateMemory_29(0x2f, 0, sub_4be980);
    Sys_AllocateMemory_29(0xc, 0, Sys_UnhandledOpcode_2);
    Sys_AllocateMemory_29(0xd, 0, Sys_UnhandledOpcode_2);
    Sys_AllocateMemory_29(0xe, 0, Sys_UnhandledOpcode_2);
    Sys_AllocateMemory_29(8, 0, Sys_UnhandledOpcode_2);
    Sys_AllocateMemory_29(9, 0, Sys_UnhandledOpcode_2);
    int32_t result = Sys_AllocateMemory_29(0xa, 0, Sys_UnhandledOpcode_2);
    g_a442f8 = 0;
    g_a442ec = 0;
    g_a44300 = 0;
    g_a442fc = 0;
    g_a44308 = 0;
    g_a442f4 = 0;
    return result;
}
