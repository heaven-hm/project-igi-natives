#include "Camera_UpdateViewCone_11.h"
int32_t* Camera_UpdateViewCone_11(int32_t a1, int32_t* a2, int32_t* a3, int32_t* a4)

{
    int32_t* i = a2;
    int32_t* i_1 = a2 - 1;

    while (i > 0)
    {
        i = Camera_ApplyPostProcess_11(a1, a3, a4);

        if (*a4 == 0xffffffff)
            break;

        i = i_1;
        i_1 -= 1;
    }

    return i;
}
