// Original IGI.EXE function: DynCubeObj_OnTick (VA 0x004E5550; static CFG gate PASS, CFG score 1.000).
#include "DynCubeObj_OnTick.h"
int32_t DynCubeObj_OnTick(void* a1, int32_t a2, int32_t a3)

{
    int32_t result = ((a3 << (*(a1 + 4) & 0x1f)) + (a2 & 0xfffffff8)) >> 3;
    *(result + a1 + 0xc) |= 1 << (a2 & 7);
    return result;
}
