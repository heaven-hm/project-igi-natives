// Original IGI.EXE function: Camera_SetFieldOfView_5 (VA 0x004A54D0; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_5.h"
char* Camera_SetFieldOfView_5(int32_t context, char param_2)

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

    int32_t i_1 = -((i + 1));
    void* dest_1 = dest_val - 1;

    while (i_1)
    {
        bool flag_1_1 = param_2 != *dest_1;
        dest_1 -= 1;
        i_1 -= 1;

        if (!flag_1_1)
            break;
    }

    if (*(dest_1 + 1) == param_2)
        return dest_1 + 1;

    return nullptr;
}
