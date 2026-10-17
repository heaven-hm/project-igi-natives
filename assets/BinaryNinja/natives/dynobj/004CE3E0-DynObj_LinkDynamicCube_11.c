// Original IGI.EXE function: DynObj_LinkDynamicCube_11 (VA 0x004CE3E0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_LinkDynamicCube_11.h"
int32_t DynObj_LinkDynamicCube_11(int32_t a1, int32_t a2, int32_t a3)

{
    *(a1 + (a2 << 2) + 0xd3c) = a3;
    return a3;
}
