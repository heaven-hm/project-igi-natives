// Original IGI.EXE function: Camera_ApplyPostProcess_6 (VA 0x004A5B90; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_6.h"
void Camera_ApplyPostProcess_6(int32_t* context, int32_t param_2)

{
    for (int32_t* i = context; i < param_2; i = &i[1])
    {
        int32_t data_val = *i;

        if (data_val)
            data_val();
    }
}
