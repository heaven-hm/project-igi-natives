#include "gi_platform.h"
#include "004A9D28-Camera_ApplyBandFilter_18.h"
🌐  int32_t __checkTOS_withFB(int32_t a1 ) __pure

{
    int32_t valA = a1 & 0x7ff00000;

    if (valA == 0x7ff00000)
        return a1;

    return valA;
}
