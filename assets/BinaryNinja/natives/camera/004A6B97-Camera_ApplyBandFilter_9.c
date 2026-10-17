// Original IGI.EXE function: Camera_ApplyBandFilter_9 (VA 0x004A6B97; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_9.h"
int32_t Camera_ApplyBandFilter_9(int32_t* context)

{
    if (!context)
        return Camera_ApplyPostProcess_9(context);

    if (Camera_ApplyHandiCam_9(context))
        return 0xffffffff;

    if (!(*(context + 0xd) & 0x40))
        return 0;

    enum WIN32_ERROR data_3 = Camera_ApplyBandFilter_23(context[4]);
    int32_t data_4 = -(data_3);
    return data_4 - data_4;
}
