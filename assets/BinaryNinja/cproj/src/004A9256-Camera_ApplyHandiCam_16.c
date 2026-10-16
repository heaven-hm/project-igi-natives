#include "gi_platform.h"
#include "004A9256-Camera_ApplyHandiCam_16.h"
int32_t Camera_ApplyHandiCam_16(long double a1 , long double a2 ) __location("fp0")

{
    int16_t x87control;
    return Camera_ApplyLineFilter_16(x87control, a1, a2);
}
