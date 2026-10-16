#include "FX_FireBallUpdate_12.h"
int32_t* FX_FireBallUpdate_12(int32_t* a1)

{
    Qtask_UpdateList(a1[2]);
    *(a1 + 0x2a) = 0;
    return Camera_ApplyHandiCam_33(a1);
}
