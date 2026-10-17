// Original IGI.EXE function: Camera_ApplyLineFilter_14 (VA 0x004A8880; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_14.h"
int32_t Camera_ApplyLineFilter_14(int16_t context , long double param_2 , long double param_3 ) {
    int32_t saved_frame;
    int32_t* flagP = &saved_frame;
    int16_t x87status;
    int16_t f0;
    f0 = __fnstcw_memmem16(context);
    int16_t item_a8 = f0;

    if (!g_546af0)
    {
        double item_8a_1 = param_3;
        double item_82_1 = param_2;
    }

    int32_t entity_val;
    void* temp_val;
    __trandisp2(entity_val, temp_val, flagP, param_2, param_3);
    g_9361d8 = 1;
    return Camera_ApplyPostProcess_14(flagP, param_2);
}
