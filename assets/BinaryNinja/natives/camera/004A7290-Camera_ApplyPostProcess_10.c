// Original IGI.EXE function: Camera_ApplyPostProcess_10 (VA 0x004A7290; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_10.h"
int32_t* Camera_ApplyPostProcess_10(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t* param_5)

{
    int32_t item_c = param_3;
    int32_t arg_c;
    int32_t item_10 = arg_c;

    if (!param_4)
    {
        Camera_ResetMatrix_25(&arg_c, item_10);
        *param_5 = arg_c;
        return param_5;
    }

    Camera_UpdateViewCone_25(&item_c, item_10);
    *param_5 = item_c;
    param_5[1] = param_3;
    return param_5;
}
