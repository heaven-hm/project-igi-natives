#include "004AC8D8-Camera_ApplyLineFilter_25.h"
/* 0x004ac8d8 Camera_ApplyLineFilter_25 full linked: callers=1 callees=0 */
int32_t sub_4ac8d8(int32_t* a1)

{
    int32_t* eax = a1;

    for (int32_t i = 0; i < 3; )
    {
        if (*eax)
            return 0;

        i += 1;
        eax = &eax[1];
    }

    return 1;
}
