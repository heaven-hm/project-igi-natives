#include "004A7FD4-Camera_ApplyHandiCam_12.h"
/* 0x004a7fd4 Camera_ApplyHandiCam_12 full linked: callers=2 callees=2 */
long double __convention("regparm") sub_4a7fd4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, double a5, int32_t a6)

{
    if (g_546af0)
    {
        g_936064 = 0x21;
        int16_t x87control;
        sub_4a87fc(x87control, a6, 0xffff);
        return a5;
    }

    int32_t var_c = a3;
    int32_t var_10 = a3;
    var_10 = a5;
    int32_t var_18 = a3;
    var_18 = 0;
    int32_t var_20 = a3;
    var_20 = a5;
    return sub_4a8589(1, a4, var_20, a3, var_18, a3, var_10, a6);
}
