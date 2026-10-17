// Original IGI.EXE function: Camera_ResetMatrix_25 (VA 0x004ACB45; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_25.h"
int32_t Camera_ResetMatrix_25(int32_t* context, int32_t param_2)

{
    void item_10;
    Camera_ApplyHandiCam_29(&item_10, &param_2, param_2, 0, 0, 0, 0);
    return Camera_ApplyPostProcess_25(&item_10, context);
}
