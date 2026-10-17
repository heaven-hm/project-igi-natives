// Original IGI.EXE function: Camera_UpdateViewCone_19 (VA 0x004AA381; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_19.h"
int32_t Camera_UpdateViewCone_19(int32_t context) {
    if (context == 0x3a4)
        return 0x411;

    if (context == 0x3a8)
        return 0x804;

    if (context == 0x3b5)
        return 0x412;

    if (context == 0x3b6)
        return 0x404;

    return 0;
}
