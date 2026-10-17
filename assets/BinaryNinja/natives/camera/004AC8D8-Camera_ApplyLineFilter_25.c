// Original IGI.EXE function: Camera_ApplyLineFilter_25 (VA 0x004AC8D8; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_25.h"
int32_t Camera_ApplyLineFilter_25(int32_t* a1)

{
    int32_t* valA = a1;

    for (int32_t i = 0; i < 3; )
    {
        if (*valA)
            return 0;

        i += 1;
        valA = &valA[1];
    }

    return 1;
}
