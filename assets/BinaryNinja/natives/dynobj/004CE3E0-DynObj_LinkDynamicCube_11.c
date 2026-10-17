// Original IGI.EXE function: DynObj_LinkDynamicCube_11 (VA 0x004CE3E0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_LinkDynamicCube_11.h"
int32_t DynObj_LinkDynamicCube_11(int32_t context, int32_t param_2, int32_t param_3)

{
    *(context + (param_2 << 2) + 0xd3c) = param_3;
    return param_3;
}
