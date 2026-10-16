#include "004A9D28-Camera_ApplyBandFilter_18.h"
/* 0x004a9d28 Camera_ApplyBandFilter_18 full linked: callers=2 callees=0 */
🌐  int32_t __checkTOS_withFB(int32_t a1 @ 0x8) __pure

{
    int32_t eax = a1 & 0x7ff00000;

    if (eax == 0x7ff00000)
        return a1;

    return eax;
}
