// Original IGI.EXE function: Display_SyncVSync_10 (VA 0x00496250; static CFG gate PASS, CFG score 1.000).
#include "Display_SyncVSync_10.h"
int32_t Display_SyncVSync_10(int32_t context, int32_t param_2, int32_t param_3, void** param_4)

{
    Camera_SetFieldOfView_33(context + param_2 * 0xc, param_4);
    param_4[2] = param_2;
    param_4[3] = param_3;
    return param_3;
}
