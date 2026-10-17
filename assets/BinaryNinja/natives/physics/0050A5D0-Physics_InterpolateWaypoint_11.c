// Original IGI.EXE function: Physics_InterpolateWaypoint_11 (VA 0x0050A5D0; static CFG gate PASS, CFG score 1.000).
#include "Physics_InterpolateWaypoint_11.h"
int32_t Physics_InterpolateWaypoint_11(int32_t* a1 @ 0x8, PSTR a2)

{
    *a1 = 0;
    a1[1] = 0;
    HANDLE valA = CreateFileA(a2, 0, FILE_SHARE_NONE, nullptr, OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL, nullptr);

    if (valA == 0xffffffff)
        return 0xffffffff;

    GetFileTime(valA, nullptr, nullptr, a1);
    CloseHandle(valA);
    return 0;
}
