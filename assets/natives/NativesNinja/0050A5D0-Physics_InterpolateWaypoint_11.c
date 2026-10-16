#include "0050A5D0-Physics_InterpolateWaypoint_11.h"
/* 0x0050a5d0 Physics_InterpolateWaypoint_11 full linked: callers=0 callees=3 */
int32_t sub_50a5d0(int32_t* a1 @ 0x8, PSTR a2)

{
    *a1 = 0;
    a1[1] = 0;
    HANDLE eax = CreateFileA(a2, 0, FILE_SHARE_NONE, nullptr, OPEN_EXISTING,
        FILE_ATTRIBUTE_NORMAL, nullptr);

    if (eax == 0xffffffff)
        return 0xffffffff;

    GetFileTime(eax, nullptr, nullptr, a1);
    CloseHandle(eax);
    return 0;
}
