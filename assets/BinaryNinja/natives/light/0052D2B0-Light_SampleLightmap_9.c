// Original IGI.EXE function: Light_SampleLightmap_9 (VA 0x0052D2B0; static CFG gate PASS, CFG score 1.000).
#include "Light_SampleLightmap_9.h"
int32_t Light_SampleLightmap_9(int32_t* a1, int32_t* a2, int32_t* a3, int32_t* a4, int32_t* a5, int32_t* a6)

{
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    a1[3] = *a2;
    a1[4] = a2[1];
    a1[5] = a2[2];
    a1[6] = *a3;
    a1[7] = a3[1];
    a1[8] = a3[2];
    a1[9] = *a4;
    a1[0xa] = a4[1];
    a1[0xb] = a4[2];
    a1[0xc] = *a5;
    a1[0xd] = a5[1];
    a1[0xe] = a5[2];
    a1[0xf] = *a6;
    a1[0x10] = a6[1];
    a1[0x11] = a6[2];
    return Light_ComputeDirectional(a1);
}
