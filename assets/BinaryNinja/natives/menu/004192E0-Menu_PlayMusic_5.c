// Original IGI.EXE function: Menu_PlayMusic_5 (VA 0x004192E0; static CFG gate PASS, CFG score 1.000).
#include "Menu_PlayMusic_5.h"
float* Menu_PlayMusic_5(float* context, float param_2, float param_3, int32_t param_4, int32_t param_5)

{
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fcos(param_2);
    context[4] = param_4;
    context[5] = param_5;
    context[6] = param_3;
    long double fpu_val_7_1 = fp0 * param_3;
    *context = fpu_val_7_1;
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fsin(param_2);
    context[1] = fp0_1 * param_3;
    context[2] = -(fp0_1) * param_3;
    context[3] = fpu_val_7_1;
    return context;
}
