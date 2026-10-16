#include "004E8BD0-SoundDefSound_OnEvent.h"
/* 0x004e8bd0 SoundDefSound_OnEvent full linked: callers=0 callees=2 */
float sub_4e8bd0(int32_t a1, int32_t* a2) __location("eax")

{
    float result = sub_496db0(*(a1 + 0x128), *(a1 + 0x12c));
    result = sub_4e6050() * result;

    if (result > *a2)
        *a2 = result;

    return result;
}
