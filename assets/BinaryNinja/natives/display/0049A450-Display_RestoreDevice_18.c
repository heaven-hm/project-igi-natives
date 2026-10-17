// Original IGI.EXE function: Display_RestoreDevice_18 (VA 0x0049A450; static CFG gate PASS, CFG score 0.867).
#include "Display_RestoreDevice_18.h"
struct status_msg* Display_RestoreDevice_18(uint32_t context, void* param_2, int32_t param_3, int32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, uint32_t param_8, uint32_t param_9, char* param_10, uint32_t param_11)

{
    int32_t kind;
    kind = g_543c64;
    struct status_msg* result = QTask_HandleInput(param_2, kind, 0);
    result->head[0x1a] = context;
    result->head[0x1b] = param_5;
    result->head[0x27] = param_6;
    result->head[0x28] = param_7;
    result->head[0x2a] = param_8;
    result->head[0x29] = param_9;
    result->text = param_10;
    result->head[0x2b] = param_11;
    result->head[0x26] = 0;

    if (!param_2)
    {
        result->sprite[0] = 0;
        result->sprite[1] = 0;
        result->sprite[2] = 0;
        result->sprite[3] = 0;
    }
    else
    {
        int32_t* data_2 = QTask_LinkEventHandler_2(param_2);
        result->sprite[0] = data_2;
        result->sprite[1] = *(&data_2 + 1);
        result->sprite[2] = *(&data_2 + 2);
        result->sprite[3] = *(&data_2 + 3);
    }

    memcpy(&result->head[8], param_3, 0x18);
    memcpy(&result->head[0x1c], param_4, 0x28);

    if (param_8)
        DynObj_RegisterSymbol_8(context, result, 0);

    return result;
}
