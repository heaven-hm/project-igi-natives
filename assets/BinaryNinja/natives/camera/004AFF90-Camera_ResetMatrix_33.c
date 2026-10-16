#include "Camera_ResetMatrix_33.h"
int32_t* Camera_ResetMatrix_33(int32_t a1, int32_t* a2)

{
    __builtin_memset(a1, 0x1010101, 0x100);
    *a2 = 1;
    return a2;
}
