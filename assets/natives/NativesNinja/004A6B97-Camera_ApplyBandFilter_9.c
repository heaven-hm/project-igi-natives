#include "004A6B97-Camera_ApplyBandFilter_9.h"
/* 0x004a6b97 Camera_ApplyBandFilter_9 full linked: callers=2 callees=3 */
int32_t sub_4a6b97(int32_t* a1)

{
    if (!a1)
        return sub_4a6c37(a1);

    if (sub_4a6bd2(a1))
        return 0xffffffff;

    if (!(*(a1 + 0xd) & 0x40))
        return 0;

    enum WIN32_ERROR eax_3 = sub_4abe70(a1[4]);
    int32_t eax_4 = -(eax_3);
    return eax_4 - eax_4;
}
