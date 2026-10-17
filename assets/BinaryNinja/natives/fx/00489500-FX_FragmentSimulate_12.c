// Original IGI.EXE function: FX_FragmentSimulate_12 (VA 0x00489500; static CFG gate PASS, CFG score 1.000).
#include "FX_FragmentSimulate_12.h"
int32_t* FX_FragmentSimulate_12(int32_t context, void* param_2, void* param_3, int32_t param_4)

{
    int32_t* result = ((param_4 * 3 + 3) << 4) + context;
    result[2] = QTask_LinkEventHandler_2(param_3);
    result[4] = 0;
    result[5] = 0;
    uint32_t data_2 = Frames_GetUpdateCounter();
    result[8] = 0;
    result[6] = data_2;
    result[9] = 0;
    result[0xa] = 0;
    *(result + 0x29) = 0;
    *(result + 0x2a) = 1;
    result[1] = 0;
    *result = 0;
    Camera_SetFieldOfView_33(param_2, result);
    return result;
}
