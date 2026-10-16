#include "gi_platform.h"
#include "004A88F4-Camera_ApplyHandiCam_14.h"
long double Camera_ApplyHandiCam_14(int16_t a1 , int32_t a2, int32_t a3, int32_t a4, int32_t a5)

{
    long double fp0 = __fload(a2, a3);
    long double result = __fload(a4, a5);
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(a1);
    int16_t v_a8 = f0;
    int32_t saved_frame;
    int32_t objC;
    void* tmpD;
    __trandisp2(objC, tmpD, &saved_frame, result, fp0);
    Camera_ApplyWideScreen_14();
    return result;
}
