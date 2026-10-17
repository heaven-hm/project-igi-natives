// Original IGI.EXE function: Camera_UpdateViewCone_3 (VA 0x004A51EB; static CFG gate PASS, CFG score 0.889).
#include "Camera_UpdateViewCone_3.h"
int32_t Camera_UpdateViewCone_3(int32_t context)

{
    if (g_936054 == 1)
        Camera_ResetMatrix_8();

    Camera_ProgramNameUnknown(context);
    return g_543e7c(0xff);
}
