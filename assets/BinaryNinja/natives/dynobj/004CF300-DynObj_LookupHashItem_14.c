// Original IGI.EXE function: DynObj_LookupHashItem_14 (VA 0x004CF300; static CFG gate PASS, CFG score 1.000).
#include "DynObj_LookupHashItem_14.h"
int32_t* DynObj_LookupHashItem_14(int32_t* context, int32_t param_2)

{
    int32_t temp_val = 0;
    int32_t* result = *context;
    int32_t* i = *result;

    while (i)
    {
        if (temp_val == param_2)
            return result;

        result = i;
        i = *i;
        temp_val += 1;
    }

    return nullptr;
}
