// Original IGI.EXE function: DynObj_LookupHashItem_15 (VA 0x004CFBD0; static CFG gate FAIL, CFG score 0.667).
#include "DynObj_LookupHashItem_15.h"
int32_t DynObj_LookupHashItem_15(int32_t context)

{
    int32_t dest_val = context;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t result = ~i;
    int32_t source_1;
    int32_t dest_2;
    dest_2 = memcpy(&g_a4ed6c, dest_val - result, result & 0xfffffffc);
    memcpy(dest_2, source_1, result & 3);
    return result;
}
