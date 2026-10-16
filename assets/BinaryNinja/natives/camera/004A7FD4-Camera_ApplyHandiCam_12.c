#include "Camera_ApplyHandiCam_12.h"
long double __convention("regparm") Camera_ApplyHandiCam_12(int32_t a1, int32_t a2, int32_t a3, int32_t a4, double a5, int32_t a6)

{
    if (g_546af0)
    {
        g_936064 = 0x21;
        int16_t x87control;
        Camera_UpdateTransform_14(x87control, a6, 0xffff);
        return a5;
    }

    int32_t v_c = a3;
    int32_t v_10 = a3;
    v_10 = a5;
    int32_t v_18 = a3;
    v_18 = 0;
    int32_t v_20 = a3;
    v_20 = a5;
    return Camera_ResetMatrix_12(1, a4, v_20, a3, v_18, a3, v_10, a6);
}
