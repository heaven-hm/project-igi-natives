// Original IGI.EXE function: Camera_UpdateTransform_29 (VA 0x004ADA79; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_29.h"
int32_t Camera_UpdateTransform_29(int32_t* context, int32_t* param_2)

{
    if (Camera_ResetMatrix_28(*context, *param_2, context) && Camera_ResetMatrix_28(context[1], 1, &context[1]))
        context[2] += 1;

    if (Camera_ResetMatrix_28(context[1], param_2[1], &context[1]))
        context[2] += 1;

    return Camera_ResetMatrix_28(context[2], param_2[2], &context[2]);
}
