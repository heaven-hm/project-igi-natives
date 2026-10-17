// Original IGI.EXE function: Display_SyncVSync_10 (VA 0x00496250; static CFG gate PASS, CFG score 1.000).
#include "Display_SyncVSync_10.h"
int32_t Display_SyncVSync_10(int32_t a1, int32_t a2, int32_t a3, void** a4)

{
    Camera_SetFieldOfView_33(a1 + a2 * 0xc, a4);
    a4[2] = a2;
    a4[3] = a3;
    return a3;
}
