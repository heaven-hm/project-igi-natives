#include "gi_platform.h"
#include "004A9491-Camera_ApplyPostProcess_16.h"
int32_t Camera_ApplyPostProcess_16(long double a1 , long double a2 ) __location("fp0")

{
    int16_t x87control;
    return Camera_ApplyLineFilter_16(x87control, a2, a1);
}
