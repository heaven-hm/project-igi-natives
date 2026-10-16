#include "gi_platform.h"
#include "004A5E25-Camera_ApplyHandiCam_7.h"
int32_t Camera_ApplyHandiCam_7(void* a1 )

{
    int32_t result = 0;
    result = **(*(int32_t*)(uintptr_t)(a1 - 0x14)) == 0xc0000005;
    return result;
}
