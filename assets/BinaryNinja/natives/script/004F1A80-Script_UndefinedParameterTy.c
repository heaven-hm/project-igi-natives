// Original IGI.EXE function: Script_UndefinedParameterTy (VA 0x004F1A80; static CFG gate PASS, CFG score 1.000).
#include "Script_UndefinedParameterTy.h"
int32_t* Script_UndefinedParameterTy(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4, char param_5, int32_t param_6)

{
    if (param_4 != 0xffffffff)
    {
        *((*context << 4) + context[2]) = param_3 - param_2;
        *((*context << 4) + context[2] + 4) = param_4;
        *((*context << 4) + context[2] + 8) = param_6;
        *((*context << 4) + context[2] + 0xc) = param_5;
        *context += 1;
        return context;
    }

    Error_Show("Undefined parameter type.");

    while (true)
        /* nop */
}
