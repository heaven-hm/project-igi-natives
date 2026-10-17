// Original IGI.EXE function: DynObj_LookupHashItem_7 (VA 0x004C5C90; static CFG gate FAIL, CFG score 0.667).
#include "DynObj_LookupHashItem_7.h"
int32_t* DynObj_LookupHashItem_7(int32_t* context , int32_t param_2, int32_t param_3, int32_t param_4)

{
    context[0xe] = 0x8000;
    *(context + 0x3a) = 0x8000;
    context[0xc] = 0;
    context[1] = param_2;
    *context = param_3;
    memset(&context[2], 0, 0x28);
    context[0xd] = param_4;
    context[0xf] = 0;
    return context;
}
