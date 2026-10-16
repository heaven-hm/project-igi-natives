#include "004E9E20-SoundDefTriggerOnce_Action.h"
/* 0x004e9e20 SoundDefTriggerOnce_Action full linked: callers=0 callees=2 */
float sub_4e9e20(int32_t a1, int32_t* a2) __location("eax")

{
    float result = sub_496db0(*(a1 + 0x130), *(a1 + 0x134));
    result = sub_4e6050() * result;

    if (result > *a2)
        *a2 = result;

    return result;
}
