// Original IGI.EXE function: Camera_ApplyLineFilter_11 (VA 0x004A7595; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_11.h"
char* Camera_ApplyLineFilter_11(double* context, char* param_2, int32_t param_3, int32_t param_4, int32_t param_5)

{
    if (param_3 == 0x65 || param_3 == 0x45)
        return Camera_E000(context, param_2, param_4, param_5);

    if (param_3 != 0x66)
        return Camera_ResetMatrix_10(context, param_2, param_4, param_5);

    return Camera_UpdateViewCone_10(context, param_2, param_4);
}
