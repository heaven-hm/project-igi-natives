// Original IGI.EXE function: Camera_ApplyWideScreen_24 (VA 0x004AC6FD; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_24.h"
int32_t Camera_ApplyWideScreen_24(int32_t context) {
    int32_t result = 0;

    if (context & 0x10)
        result = 1;

    if (context & 8)
        result |= 4;

    if (context & 4)
        result |= 8;

    if (context & 2)
        result |= 0x10;

    if (context & 1)
        result |= 0x20;

    if (context & 0x80000)
        result |= 2;

    int32_t entity_1 = context & 0x300;

    if (entity_1)
    {
        if (entity_1 == 0x100)
            *(&result + 1) |= 4;
        else if (entity_1 == 0x200)
            *(&result + 1) |= 8;
        else if (entity_1 == 0x300)
            *(&result + 1) |= 0xc;
    }

    int32_t entity_3 = context & 0x30000;

    if (!entity_3)
        result |= 0x300;
    else if (entity_3 == 0x10000)
        result |= 0x200;

    if (context & 0x40000)
        *(&result + 1) |= 0x10;

    return result;
}
