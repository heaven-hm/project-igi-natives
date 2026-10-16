#include "004A7E96-Camera_UpdateViewCone_11.h"
/* 0x004a7e96 Camera_UpdateViewCone_11 full linked: callers=3 callees=1 */
int32_t* sub_4a7e96(int32_t a1, int32_t* a2, int32_t* a3, int32_t* a4)

{
    int32_t* i = a2;
    int32_t* i_1 = a2 - 1;

    while (i > 0)
    {
        i = sub_4a7e61(a1, a3, a4);

        if (*a4 == 0xffffffff)
            break;

        i = i_1;
        i_1 -= 1;
    }

    return i;
}
