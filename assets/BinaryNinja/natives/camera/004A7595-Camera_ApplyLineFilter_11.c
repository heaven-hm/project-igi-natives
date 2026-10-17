// Original IGI.EXE function: Camera_ApplyLineFilter_11 (VA 0x004A7595; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_11.h"
char* Camera_ApplyLineFilter_11(double* a1, char* a2, int32_t a3, int32_t a4, int32_t a5)

{
    if (a3 == 0x65 || a3 == 0x45)
        return Camera_E000(a1, a2, a4, a5);

    if (a3 != 0x66)
        return Camera_ResetMatrix_10(a1, a2, a4, a5);

    return Camera_UpdateViewCone_10(a1, a2, a4);
}
