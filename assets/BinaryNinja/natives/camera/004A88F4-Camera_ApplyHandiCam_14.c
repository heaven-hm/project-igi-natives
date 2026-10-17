// Original IGI.EXE function: Camera_ApplyHandiCam_14 (VA 0x004A88F4; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_14.h"
long double Camera_ApplyHandiCam_14(int16_t context , int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5)

{
    long double fp0 = __fload(param_2, param_3);
    long double result = __fload(param_4, param_5);
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(context);
    int16_t item_a8 = f0;
    int32_t saved_frame;
    int32_t entity_val;
    void* temp_val;
    __trandisp2(entity_val, temp_val, &saved_frame, result, fp0);
    Camera_ApplyWideScreen_14();
    return result;
}
