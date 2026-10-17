// Original IGI.EXE function: Menu_RequestScreen_9 (VA 0x0041DC20; static CFG gate FAIL, CFG score 0.667).
#include "Menu_RequestScreen_9.h"
int32_t Menu_RequestScreen_9(int32_t context)

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
    int32_t dest_3;
    dest_3 = memcpy(g_57bbcc + 0x54, dest_val - result, result & 0xfffffffc);
    memcpy(dest_3, source_1, result & 3);
    return result;
}
