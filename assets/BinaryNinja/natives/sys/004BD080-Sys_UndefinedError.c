// Original IGI.EXE function: Sys_UndefinedError (VA 0x004BD080; static CFG gate PASS, CFG score 1.000).
#include "Sys_UndefinedError.h"
int32_t Sys_UndefinedError(int32_t* context)

{
    int32_t data_val = context[3];
    int32_t entity_val = context[2];
    context[5] = 0;
    context[7] = data_val;
    context[6] = entity_val;
    context[0xb] = 0;
    context[8] = 0;
    context[4] = 0;
    Sys_ExecuteBytecode_28(context);
    int32_t data_1 = context[8];

    if (!data_1)
        return 0;

    char* item_10;
    char* item_c_1;

    if (data_1 - 1 > 0xe)
    {
    label_4bd1b2:
        item_c_1 = "Undefined error";
    label_4bd1bd:
        item_10 = &context[0x9a];
        goto label_4bd1be;
    }

    switch (data_1)
    {
        case 1:
        {
            item_c_1 = "Stack underflow";
            item_10 = &context[0x9a];
        label_4bd1be:
            Game_DataSymbolLoad(item_10, item_c_1);
            Sys_UnknownDataType(context);
            return context[8];
            break;
        }
        case 2:
        {
            item_c_1 = "Stack overflow";
            goto label_4bd1bd;
        }
        case 3:
        {
            item_c_1 = "Internal error (read: BUG!!!).";
            item_10 = &context[0x9a];
            goto label_4bd1be;
        }
        case 4:
        case 0xc:
        {
            goto label_4bd1b2;
        }
        case 5:
        {
            item_c_1 = "Illegal instruction";
            item_10 = &context[0x9a];
            goto label_4bd1be;
        }
        case 6:
        {
            item_c_1 = "Illegal operand(s) for instruction";
            goto label_4bd1bd;
        }
        case 7:
        {
            void* item_c_2 = &context[0x1a];
            Game_DataSymbolLoad(&context[0x9a], "Unknown identifier: %s");
            Sys_UnknownDataType(context);
            return context[8];
            break;
        }
        case 8:
        {
            item_c_1 = "Identifier not a variable";
            item_10 = &context[0x9a];
            goto label_4bd1be;
        }
        case 9:
        {
            item_c_1 = "Identifier not a function";
            item_10 = &context[0x9a];
            goto label_4bd1be;
        }
        case 0xa:
        {
            item_c_1 = "No function on stack";
            goto label_4bd1bd;
        }
        case 0xb:
        {
            item_c_1 = "Syntax error";
            item_10 = &context[0x9a];
            goto label_4bd1be;
        }
        case 0xd:
        {
            int32_t item_c_4 = *(*context + context[4] + 1);
            Game_DataSymbolLoad(&context[0x9a], "Function argument overflow: %d arguments.");
            Sys_UnknownDataType(context);
            return context[8];
            break;
        }
        case 0xe:
        {
            item_c_1 = "Datablock not present";
            item_10 = &context[0x9a];
            goto label_4bd1be;
        }
        case 0xf:
        {
            item_c_1 = "Index out of range";
            item_10 = &context[0x9a];
            goto label_4bd1be;
        }
    }
}
