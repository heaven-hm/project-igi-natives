// Original IGI.EXE function: Camera_ApplyPostProcess_24 (VA 0x004AC786; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_24.h"
int32_t Camera_ApplyPostProcess_24(int32_t a1, int32_t a2)

{
    int32_t f0 = a2 / 0x20;

    if (*(a1 + (f0 << 2)) & ~(0xffffffff << ((0x1f - a2 % 0x20) & 0x1f)))
        return 0;

    int32_t srcS1 = f0 + 1;

    if (srcS1 >= 3)
        return 1;

    int32_t* valA5 = a1 + (srcS1 << 2);

    while (true)
    {
        if (*valA5)
            return 0;

        srcS1 += 1;
        valA5 = &valA5[1];

        if (srcS1 >= 3)
            return 1;
    }
}
