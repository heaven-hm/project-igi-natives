#include "Camera_ApplyBandFilter_14.h"
int32_t Camera_ApplyBandFilter_14(int16_t a1 @ x87control, long double a2 @ fp0) __location("fp0")

{
    int32_t saved_frame;
    int32_t* flagP = &saved_frame;
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(a1);
    int16_t v_a8 = f0;

    if (!g_546af0)
        double v_8a_1 = a2;

    int32_t objC;
    void* tmpD;
    __trandisp1(objC, tmpD, flagP, a2);
    g_9361d8 = 1;
    return Camera_ApplyPostProcess_14(flagP, a2);
}
