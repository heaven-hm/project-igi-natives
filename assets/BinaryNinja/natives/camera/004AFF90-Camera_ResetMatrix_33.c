// Original IGI.EXE function: Camera_ResetMatrix_33 (VA 0x004AFF90; static CFG gate FAIL, CFG score 0.667).
#include "Camera_ResetMatrix_33.h"
int32_t* Camera_ResetMatrix_33(int32_t context, int32_t* param_2)

{
    memset(context, 0x1010101, 0x100);
    *param_2 = 1;
    return param_2;
}
