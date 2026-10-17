// Original IGI.EXE function: Script_ParseEnumInt32_27 (VA 0x004FA8D0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_27.h"
double* Script_ParseEnumInt32_27(void* context, double* param_2)

{
    Sys_ResolveSymbol_4(*(context + 4));
    void item_c;
    Resource_Unpack(*(context + 4), &item_c, 9);
    double* result = param_2;
    double item_b;
    *result = item_b;
    result = 1;
    return result;
}
