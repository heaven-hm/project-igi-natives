#include "004ADA58-Camera_ResetMatrix_28.h"
/* 0x004ada58 Camera_ResetMatrix_28 full linked: callers=7 callees=0 */
int32_t sub_4ada58(int32_t a1, int32_t a2, int32_t* a3)

{
    int32_t result = 0;
    int32_t ecx = a1 + a2;

    if (ecx < a1 || ecx < a2)
        result = 1;

    *a3 = ecx;
    return result;
}
