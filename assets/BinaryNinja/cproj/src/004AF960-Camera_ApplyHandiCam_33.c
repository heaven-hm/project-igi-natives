#include "gi_platform.h"
#include "004AF960-Camera_ApplyHandiCam_33.h"
int32_t* Camera_ApplyHandiCam_33(int32_t* a1)

{
    *a1[1] = *a1;
    (*(int32_t*)(uintptr_t)(*a1 + 4)) = a1[1];
    a1[1] = 0;
    *a1 = 0;
    return a1;
}
