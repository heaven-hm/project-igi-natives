// Original IGI.EXE function: Camera_ResetMatrix_25 (VA 0x004ACB45; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_25.h"
int32_t Camera_ResetMatrix_25(int32_t* a1, int32_t a2)

{
    void v_10;
    Camera_ApplyHandiCam_29(&v_10, &a2, a2, 0, 0, 0, 0);
    return Camera_ApplyPostProcess_25(&v_10, a1);
}
