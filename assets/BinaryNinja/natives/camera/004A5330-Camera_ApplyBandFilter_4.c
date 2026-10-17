// Original IGI.EXE function: Camera_ApplyBandFilter_4 (VA 0x004A5330; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_4.h"
int32_t* Camera_ApplyBandFilter_4(PSTR context, char* param_2, int32_t param_3)

{
    int32_t* result = Camera_ApplyLineFilter_10();

    if (result)
        return Camera_SetFieldOfView_10(context, param_2, param_3, result);

    return result;
}
