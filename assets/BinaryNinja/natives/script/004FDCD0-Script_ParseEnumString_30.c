// Original IGI.EXE function: Script_ParseEnumString_30 (VA 0x004FDCD0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumString_30.h"
double* Script_ParseEnumString_30(double* context, void* param_2)

{
    *context = *(param_2 + 0xa0) + *(param_2 + 0x88);
    context[1] = *(param_2 + 0xa8) + *(param_2 + 0x90);
    context[2] = *(param_2 + 0xb0) + *(param_2 + 0x98);
    *context = *context * 0.5;
    context[1] = context[1] * 0.5;
    context[2] = context[2] * 0.5;
    return context;
}
