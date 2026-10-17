// Original IGI.EXE function: Camera_ApplyLineFilter_13 (VA 0x004A865C; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_13.h"
int32_t Camera_ApplyLineFilter_13(char a1) __pure

{
    if (a1 & 0x20)
        return 5;

    if (a1 & 8)
        return 1;

    if (a1 & 4)
        return 2;

    if (!(a1 & 1))
        return (a1 & 2) << 1;

    return 3;
}
