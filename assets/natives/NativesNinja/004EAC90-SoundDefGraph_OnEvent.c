#include "004EAC90-SoundDefGraph_OnEvent.h"
/* 0x004eac90 SoundDefGraph_OnEvent full linked: callers=0 callees=2 */
float sub_4eac90(int32_t a1, int32_t* a2) __location("eax")

{
    float result = sub_496db0(*(a1 + 0x180), *(a1 + 0x184));
    result = sub_4e6050() * result;

    if (result > *a2)
        *a2 = result;

    return result;
}
