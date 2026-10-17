// Original IGI.EXE function: Camera_SetFieldOfView_20 (VA 0x004AA562; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_20.h"
void Camera_SetFieldOfView_20()

{
    if (!g_c32548)
    {
        Camera_ApplyWideScreen_19(0xfffffffd);
        g_c32548 = 1;
    }
}
