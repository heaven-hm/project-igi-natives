// Original IGI.EXE function: Camera_ApplyLineFilter_17 (VA 0x004A9A41; static CFG gate FAIL, CFG score 0.533).
#include "Camera_ApplyLineFilter_17.h"
int32_t Camera_ApplyLineFilter_17(void* context , long double param_2 ) {
    *(context - 0x90) = 0xfe;
    int32_t entity_val;
    *(&entity_val + 1) = 0;
    long double fpu1;
    long double fpu2;
    /* tailcall */
    return sub_4a9a4e(context, fpu1, fpu2);
}
