// Original IGI.EXE function: Camera_ResetMatrix_19 (VA 0x004AA3B4; static CFG gate FAIL, CFG score 0.667).
#include "Camera_ResetMatrix_19.h"
int32_t Camera_ResetMatrix_19()

{
    *__builtin_memset(0xc32320, 0, 0x100) = 0;
    g_c32200 = 0;
    g_c3221c = 0;
    g_c32424 = 0;
    g_c32210 = 0;
    int32_t* dstD2 = &g_c32214;
    *dstD2 = 0;
    dstD2[1] = 0;
    return 0;
}
