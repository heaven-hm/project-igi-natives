// Original IGI.EXE function: Camera_ApplyPostProcess_11 (VA 0x004A7E61; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_11.h"
int32_t* Camera_ApplyPostProcess_11(int32_t context, int32_t* param_2, int32_t* param_3)

{
    int32_t f0 = param_2[1];
    param_2[1] -= 1;
    uint32_t data_1;

    if (f0 - 1 < 0)
    {
        int32_t item_c_1 = context;
        data_1 = Camera_ApplyHandiCam_11(param_2);
    }
    else
    {
        char data_val = context;
        **param_2 = data_val;
        *param_2 += 1;
        data_1 = data_val;
    }

    if (data_1 != 0xffffffff)
    {
        *param_3 += 1;
        return param_3;
    }

    *param_3 = 0xffffffff;
    return param_3;
}
