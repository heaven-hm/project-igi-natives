// Original IGI.EXE function: Camera_ApplyHandiCam_12 (VA 0x004A7FD4; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_12.h"
long double Camera_ApplyHandiCam_12(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, double param_5, int32_t param_6)

{
    if (g_546af0)
    {
        g_936064 = 0x21;
        int16_t fpu_control;
        Camera_UpdateTransform_14(fpu_control, param_6, 0xffff);
        return param_5;
    }

    int32_t item_c = param_3;
    int32_t item_10 = param_3;
    item_10 = param_5;
    int32_t item_18 = param_3;
    item_18 = 0;
    int32_t item_20 = param_3;
    item_20 = param_5;
    return Camera_ResetMatrix_12(1, param_4, item_20, param_3, item_18, param_3, item_10, param_6);
}
