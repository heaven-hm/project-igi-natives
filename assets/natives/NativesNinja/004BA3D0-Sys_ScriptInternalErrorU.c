#include "004BA3D0-Sys_ScriptInternalErrorU.h"
/* 0x004ba3d0 Sys_ScriptInternalErrorU full linked: callers=7 callees=1 */
int32_t sub_4ba3d0(int32_t a1)

{
    if (a1 - 1 <= 0x1c)
    {
        int32_t edx_1 = 0;
        edx_1 = *(a1 + (&jump_table_4ba458[0xf] + 3));

        switch (edx_1)
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

    int32_t var_4 = a1;
    Error_Show("Script: Internal Error: Unknown opcode: %02X.");

    while (true)
        /* nop */
}
