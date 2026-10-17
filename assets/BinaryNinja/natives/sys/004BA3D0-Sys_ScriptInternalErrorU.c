// Original IGI.EXE function: Sys_ScriptInternalErrorU (VA 0x004BA3D0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ScriptInternalErrorU.h"
int32_t Sys_ScriptInternalErrorU(int32_t context)

{
    if (context - 1 <= 0x1c)
    {
        int32_t temp_1 = 0;
        temp_1 = *(context + (&jump_table_4ba458[0xf] + 3));

        switch (temp_1)
        {
            case 0:
            {
                return 4;
                break;
            }
            case 1:
            {
                return 2;
                break;
            }
            case 2:
            {
                return 3;
                break;
            }
            case 3:
            {
                return 0xa;
                break;
            }
            case 4:
            {
                return 9;
                break;
            }
            case 5:
            {
                return 8;
                break;
            }
            case 6:
            {
                return 5;
                break;
            }
            case 7:
            {
                return 7;
                break;
            }
            case 8:
            {
                return 6;
                break;
            }
            case 9:
            {
                return 0xf;
                break;
            }
            case 0xa:
            {
                return 0xe;
                break;
            }
            case 0xb:
            {
                return 1;
                break;
            }
            case 0xc:
            {
                return 0xc;
                break;
            }
            case 0xd:
            {
                return 0xb;
                break;
            }
            case 0xe:
            {
                return 0xd;
                break;
            }
        }
    }

    int32_t item_4 = context;
    Error_Show("Script: Internal Error: Unknown opcode: %02X.");

    while (true)
        /* nop */
}
