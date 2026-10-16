#include "Camera_ApplyHandiCam_7.h"
int32_t Camera_ApplyHandiCam_7(void* a1 @ flagP)

{
    int32_t result = 0;
    result = ***(a1 - 0x14) == 0xc0000005;
    return result;
}
