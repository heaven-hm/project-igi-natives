// Original IGI.EXE function: Camera_ResetMatrix_3 (VA 0x004A5210; static CFG gate PASS, CFG score 1.000).
#include "Camera_ResetMatrix_3.h"
void Camera_ResetMatrix_3(int32_t context) {
    if (g_936054 == 1)
        Camera_ResetMatrix_8();

    Camera_ProgramNameUnknown(context);
    ExitProcess(0xff);
    /* no return */
}
