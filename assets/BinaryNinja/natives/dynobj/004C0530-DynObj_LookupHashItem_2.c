// Original IGI.EXE function: DynObj_LookupHashItem_2 (VA 0x004C0530; static CFG gate PASS, CFG score 1.000).
#include "DynObj_LookupHashItem_2.h"
uint32_t DynObj_LookupHashItem_2(char* context, int32_t param_2)

{
    char* temp_val = context;
    int32_t data_val = 0;

    for (char i = *temp_val; i; i = *temp_val)
    {
        temp_val = &temp_val[1];
        data_val = (data_val << 5) + i;
    }

    return COMBINE(0, data_val) % param_2;
}
