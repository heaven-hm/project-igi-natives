#include "gi_platform.h"
#include "004AC655-Camera_ApplyLineFilter_24.h"
int32_t Camera_ApplyLineFilter_24(int32_t a1, int32_t a2)

{
    int16_t x87control;
    return Camera_SetFieldOfView_24(x87control, a1, a2 & 0xfff7ffff);
}
