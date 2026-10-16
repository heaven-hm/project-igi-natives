#include "gi_platform.h"
#include "004894E0-FX_FireBallUpdate_12.h"
int32_t* FX_FireBallUpdate_12(int32_t* a1)

{
    Qtask_UpdateList(a1[2]);
    (*(int32_t*)(uintptr_t)(a1 + 0x2a)) = 0;
    return Camera_ApplyHandiCam_33(a1);
}
