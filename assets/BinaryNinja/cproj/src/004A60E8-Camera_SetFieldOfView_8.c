#include "gi_platform.h"
#include "004A60E8-Camera_SetFieldOfView_8.h"
int32_t __fastcall Camera_SetFieldOfView_8(int32_t a1)

{
    int32_t v_8 = a1;
    int32_t v_c = a1;

    if (!g_c32548)
        Camera_SetFieldOfView_20();

    GetModuleFileNameA(nullptr, &g_9360b4, 0x104);
    char* valA = g_c32554;
    g_93609c = &g_9360b4;
    char* dstD = &g_9360b4;

    if (*valA)
        dstD = valA;

    Camera_ApplyLineFilter_8(dstD, nullptr, nullptr, &v_8, &v_c);
    int32_t* valA3 = Camera_ApplyHandiCam_20(v_c + (v_8 << 2));

    if (!valA3)
        Camera_UpdateViewCone_3(8);

    Camera_ApplyLineFilter_8(dstD, valA3, &valA3[v_8], &v_8, &v_c);
    int32_t result = v_8 - 1;
    g_936084 = valA3;
    g_936080 = result;
    return result;
}
