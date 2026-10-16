#include "Camera_SetFieldOfView_12.h"
int32_t Camera_SetFieldOfView_12(int32_t* a1)

{
    *a1 += 8;
    void* objC = *a1;
    *(objC - 4);
    return *(objC - 8);
}
