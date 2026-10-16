#include "gi_platform.h"
#include "004A8A65-Camera_UpdateViewCone_14.h"
long double Camera_UpdateViewCone_14(int16_t a1 , int32_t a2, int32_t a3)

{
    long double result = __fload(a2, a3);
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(a1);
    int16_t v_a8 = f0;
    int32_t saved_frame;
    int32_t objC;
    void* tmpD;
    __trandisp1(objC, tmpD, &saved_frame, result);
    Camera_ApplyWideScreen_14();
    return result;
}
