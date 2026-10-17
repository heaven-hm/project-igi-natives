// Original IGI.EXE function: FX_TrailUpdate_13 (VA 0x00489B90; static CFG gate PASS, CFG score 1.000).
#include "FX_TrailUpdate_13.h"
int32_t* FX_TrailUpdate_13(void* a1)

{
    int32_t* i_2 = *(a1 + 0x18);

    for (int32_t* i = *i_2; i; i = *i)
    {
        Qtask_UpdateList(i_2[2]);
        i_2 = i;
    }

    int32_t* result = *(a1 + 0x24);

    for (int32_t* i_1 = *result; i_1; i_1 = *i_1)
    {
        Qtask_UpdateList(result[2]);
        result = i_1;
    }

    return result;
}
