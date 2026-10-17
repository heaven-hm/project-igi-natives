// Original IGI.EXE function: CameraBase_Cleanup_7 (VA 0x004F0380; static CFG gate PASS, CFG score 1.000).
#include "CameraBase_Cleanup_7.h"
int32_t* CameraBase_Cleanup_7(int32_t context, int32_t* param_2)

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

    *param_2 = ~i;
    return param_2;
}
