#include "004AF960-Camera_ApplyHandiCam_33.h"
/* 0x004af960 Camera_ApplyHandiCam_33 full linked: callers=60 callees=0 */
int32_t* sub_4af960(int32_t* a1)

{
    *a1[1] = *a1;
    *(*a1 + 4) = a1[1];
    a1[1] = 0;
    *a1 = 0;
    return a1;
}
