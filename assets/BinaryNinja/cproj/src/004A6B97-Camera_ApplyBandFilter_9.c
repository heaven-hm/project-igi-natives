#include "gi_platform.h"
#include "004A6B97-Camera_ApplyBandFilter_9.h"
int32_t Camera_ApplyBandFilter_9(int32_t* a1)

{
    if (!a1)
        return Camera_ApplyPostProcess_9(a1);

    if (Camera_ApplyHandiCam_9(a1))
        return 0xffffffff;

    if (!((*(int32_t*)(uintptr_t)(a1 + 0xd)) & 0x40))
        return 0;

    enum WIN32_ERROR valA3 = Camera_ApplyBandFilter_23(a1[4]);
    int32_t valA4 = -(valA3);
    return valA4 - valA4;
}
