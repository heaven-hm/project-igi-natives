// Original IGI.EXE function: Camera_UpdateTransform_29 (VA 0x004ADA79; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_29.h"
int32_t Camera_UpdateTransform_29(int32_t* a1, int32_t* a2)

{
    if (Camera_ResetMatrix_28(*a1, *a2, a1) && Camera_ResetMatrix_28(a1[1], 1, &a1[1]))
        a1[2] += 1;

    if (Camera_ResetMatrix_28(a1[1], a2[1], &a1[1]))
        a1[2] += 1;

    return Camera_ResetMatrix_28(a1[2], a2[2], &a1[2]);
}
