#include "FX_FragmentSimulate_12.h"
int32_t* FX_FragmentSimulate_12(int32_t a1, void* a2, void* a3, int32_t a4)

{
    int32_t* result = ((a4 * 3 + 3) << 4) + a1;
    result[2] = QTask_LinkEventHandler_2(a3);
    result[4] = 0;
    result[5] = 0;
    uint32_t valA2 = Frames_GetUpdateCounter();
    result[8] = 0;
    result[6] = valA2;
    result[9] = 0;
    result[0xa] = 0;
    *(result + 0x29) = 0;
    *(result + 0x2a) = 1;
    result[1] = 0;
    *result = 0;
    Camera_SetFieldOfView_33(a2, result);
    return result;
}
