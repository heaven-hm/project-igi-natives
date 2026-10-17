// Original IGI.EXE function: DynObj_LinkDynamicCube_2 (VA 0x004C0720; static CFG gate PASS, CFG score 1.000).
#include "DynObj_LinkDynamicCube_2.h"
int32_t* DynObj_LinkDynamicCube_2(int32_t* context, int32_t param_2, int32_t param_3)

{
    *context = param_2;
    context[1] = param_3;
    context[4] = &context[2];
    context[2] = &context[3];
    context[3] = 0;
    return context;
}
