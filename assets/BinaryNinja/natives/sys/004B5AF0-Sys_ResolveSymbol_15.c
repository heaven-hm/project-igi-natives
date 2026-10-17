// Original IGI.EXE function: Sys_ResolveSymbol_15 (VA 0x004B5AF0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_15.h"
int32_t Sys_ResolveSymbol_15(char* context, char* param_2)

{
    char* dest_val = param_2;
    char i = *dest_val;

    if (!i)
    {
        *context = 0;
        return i;
    }

    char* source_val = context;

    do
    {
        int32_t i_1 = i;
        int32_t entity_val;
        i = Camera_ApplyWideScreen_28(entity_val);
        *source_val = i;
        i = dest_val[1];
        source_val = &source_val[1];
        dest_val = &dest_val[1];
    } while (i);

    *source_val = i;
    return i;
}
