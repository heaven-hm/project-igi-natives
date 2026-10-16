#include "gi_platform.h"
#include "004ACBE9-Camera_SetFieldOfView_26.h"
int32_t Camera_SetFieldOfView_26()

{
    int32_t v_10;
    char arg_4;
    Camera_ApplyLineFilter_26(&v_10, &arg_4);
    int16_t* v_1c_1 = &g_936218;
    int32_t v_20_1 = 0;
    int32_t v_24 = 0x11;
    int32_t v_30 = v_10;
    char v_2c;
    int32_t* dstD = &v_2c;
    char v_c;
    int32_t* srcS = &v_c;
    *dstD = *srcS;
    dstD[1] = srcS[1];
    g_936240 = Camera_1Snan(v_30);
    g_936238 = g_93621a;
    g_93623c = g_936218;
    g_936244 = 0x93621c;
    return &g_936238;
}
