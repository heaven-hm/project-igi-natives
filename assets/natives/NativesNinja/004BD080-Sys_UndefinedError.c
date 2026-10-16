#include "004BD080-Sys_UndefinedError.h"
/* 0x004bd080 Sys_UndefinedError full linked: callers=1 callees=7 */
int32_t sub_4bd080(int32_t* a1)

{
    int32_t eax = a1[3];
    int32_t ecx = a1[2];
    a1[5] = 0;
    a1[7] = eax;
    a1[6] = ecx;
    a1[0xb] = 0;
    a1[8] = 0;
    a1[4] = 0;
    sub_4bcfd0(a1);
    int32_t eax_1 = a1[8];

    if (!eax_1)
        return 0;

    char* var_10;
    char* var_c_1;

    if (eax_1 - 1 > 0xe)
    {
    label_4bd1b2:
        var_c_1 = "Undefined error";
    label_4bd1bd:
        var_10 = &a1[0x9a];
        goto label_4bd1be;
    }

    switch (eax_1)
    {
        case 1:
        {
            var_c_1 = "Stack underflow";
            var_10 = &a1[0x9a];
        label_4bd1be:
            Game_DataSymbolLoad(var_10, var_c_1);
            sub_4bc960(a1);
            return a1[8];
            break;
        }
        case 2:
        {
            var_c_1 = "Stack overflow";
            goto label_4bd1bd;
        }
        case 3:
        {
            var_c_1 = "Internal error (read: BUG!!!).";
            var_10 = &a1[0x9a];
            goto label_4bd1be;
        }
        case 4:
        case 0xc:
        {
            goto label_4bd1b2;
        }
        case 5:
        {
            var_c_1 = "Illegal instruction";
            var_10 = &a1[0x9a];
            goto label_4bd1be;
        }
        case 6:
        {
            var_c_1 = "Illegal operand(s) for instruction";
            goto label_4bd1bd;
        }
        case 7:
        {
            void* var_c_2 = &a1[0x1a];
            Game_DataSymbolLoad(&a1[0x9a], "Unknown identifier: %s");
            sub_4bc960(a1);
            return a1[8];
            break;
        }
        case 8:
        {
            var_c_1 = "Identifier not a variable";
            var_10 = &a1[0x9a];
            goto label_4bd1be;
        }
        case 9:
        {
            var_c_1 = "Identifier not a function";
            var_10 = &a1[0x9a];
            goto label_4bd1be;
        }
        case 0xa:
        {
            var_c_1 = "No function on stack";
            goto label_4bd1bd;
        }
        case 0xb:
        {
            var_c_1 = "Syntax error";
            var_10 = &a1[0x9a];
            goto label_4bd1be;
        }
        case 0xd:
        {
            int32_t var_c_4 = *(*a1 + a1[4] + 1);
            Game_DataSymbolLoad(&a1[0x9a], "Function argument overflow: %d arguments.");
            sub_4bc960(a1);
            return a1[8];
            break;
        }
        case 0xe:
        {
            var_c_1 = "Datablock not present";
            var_10 = &a1[0x9a];
            goto label_4bd1be;
        }
        case 0xf:
        {
            var_c_1 = "Index out of range";
            var_10 = &a1[0x9a];
            goto label_4bd1be;
        }
    }
}
