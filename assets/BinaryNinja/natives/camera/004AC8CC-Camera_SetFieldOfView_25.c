#include "Camera_SetFieldOfView_25.h"
int32_t Camera_SetFieldOfView_25(int32_t* a1)

{
    *a1 = 0;
    int32_t* dstD1 = &a1[1];
    *dstD1 = 0;
    dstD1[1] = 0;
    return 0;
}
