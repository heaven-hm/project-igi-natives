// Original IGI.EXE function: Sys_UndefinedError (VA 0x004BD080; static CFG gate PASS, CFG score 1.000).
#include "Sys_UndefinedError.h"
int32_t Sys_UndefinedError(int32_t* a1)

{
    int32_t valA = a1[3];
    int32_t objC = a1[2];
    a1[5] = 0;
    a1[7] = valA;
    a1[6] = objC;
    a1[0xb] = 0;
    a1[8] = 0;
    a1[4] = 0;
    Sys_ExecuteBytecode_28(a1);
    int32_t valA1 = a1[8];

    if (!valA1)
        return 0;

    char* v_10;
    char* v_c_1;

    if (valA1 - 1 > 0xe)
    {
    label_4bd1b2:
        v_c_1 = "Undefined error";
    label_4bd1bd:
        v_10 = &a1[0x9a];
        goto label_4bd1be;
    }

    switch (valA1)
    {
        case 1:
        {
            v_c_1 = "Stack underflow";
            v_10 = &a1[0x9a];
        label_4bd1be:
            Game_DataSymbolLoad(v_10, v_c_1);
            Sys_UnknownDataType(a1);
            return a1[8];
            break;
        }
        case 2:
        {
            v_c_1 = "Stack overflow";
            goto label_4bd1bd;
        }
        case 3:
        {
            v_c_1 = "Internal error (read: BUG!!!).";
            v_10 = &a1[0x9a];
            goto label_4bd1be;
        }
        case 4:
        case 0xc:
        {
            goto label_4bd1b2;
        }
        case 5:
        {
            v_c_1 = "Illegal instruction";
            v_10 = &a1[0x9a];
            goto label_4bd1be;
        }
        case 6:
        {
            v_c_1 = "Illegal operand(s) for instruction";
            goto label_4bd1bd;
        }
        case 7:
        {
            void* v_c_2 = &a1[0x1a];
            Game_DataSymbolLoad(&a1[0x9a], "Unknown identifier: %s");
            Sys_UnknownDataType(a1);
            return a1[8];
            break;
        }
        case 8:
        {
            v_c_1 = "Identifier not a variable";
            v_10 = &a1[0x9a];
            goto label_4bd1be;
        }
        case 9:
        {
            v_c_1 = "Identifier not a function";
            v_10 = &a1[0x9a];
            goto label_4bd1be;
        }
        case 0xa:
        {
            v_c_1 = "No function on stack";
            goto label_4bd1bd;
        }
        case 0xb:
        {
            v_c_1 = "Syntax error";
            v_10 = &a1[0x9a];
            goto label_4bd1be;
        }
        case 0xd:
        {
            int32_t v_c_4 = *(*a1 + a1[4] + 1);
            Game_DataSymbolLoad(&a1[0x9a], "Function argument overflow: %d arguments.");
            Sys_UnknownDataType(a1);
            return a1[8];
            break;
        }
        case 0xe:
        {
            v_c_1 = "Datablock not present";
            v_10 = &a1[0x9a];
            goto label_4bd1be;
        }
        case 0xf:
        {
            v_c_1 = "Index out of range";
            v_10 = &a1[0x9a];
            goto label_4bd1be;
        }
    }
}
