#include "Sys_ExecuteBytecode_2.h"
int32_t Sys_ExecuteBytecode_2(void* a1)

{
    int32_t* valA = a1 - 4;
    valA &= 0xfc;
    g_942300 -= 1;
    int32_t* srcS = *valA;
    int32_t* v_c = srcS;
    return Camera_UpdateTransform_9(Camera_ApplyHandiCam_33(srcS));
}
