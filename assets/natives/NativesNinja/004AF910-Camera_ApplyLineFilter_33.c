#include "004AF910-Camera_ApplyLineFilter_33.h"
/* 0x004af910 Camera_ApplyLineFilter_33 full linked: callers=8 callees=0 */
int32_t* sub_4af910(int32_t* a1, int32_t* a2)

{
    int32_t edx = *a1;
    a2[1] = a1;
    *a2 = edx;
    *(*a1 + 4) = a2;
    *a1 = a2;
    return a1;
}
