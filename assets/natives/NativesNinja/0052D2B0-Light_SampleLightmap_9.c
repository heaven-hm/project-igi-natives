#include "0052D2B0-Light_SampleLightmap_9.h"
/* 0x0052d2b0 Light_SampleLightmap_9 full linked: callers=2 callees=1 */
int32_t sub_52d2b0(int32_t* a1, int32_t* a2, int32_t* a3, int32_t* a4, int32_t* a5, int32_t* a6)

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
    return sub_52cc40(a1);
}
