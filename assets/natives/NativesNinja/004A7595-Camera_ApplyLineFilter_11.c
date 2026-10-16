#include "004A7595-Camera_ApplyLineFilter_11.h"
/* 0x004a7595 Camera_ApplyLineFilter_11 full linked: callers=0 callees=3 */
char* sub_4a7595(double* a1, char* a2, int32_t a3, int32_t a4, int32_t a5)

{
    if (a3 == 0x65 || a3 == 0x45)
        return sub_4a72ce(a1, a2, a4, a5);

    if (a3 != 0x66)
        return sub_4a74b0(a1, a2, a4, a5);

    return sub_4a73d2(a1, a2, a4);
}
