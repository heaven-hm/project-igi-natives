// Original IGI.EXE function: Display_SetDisplayMode_16 (VA 0x00498380; static CFG gate FAIL, CFG score 0.778).
#include "Display_SetDisplayMode_16.h"
int32_t Display_SetDisplayMode_16(int32_t* a1, int32_t a2, int32_t a3)

{
    int32_t srcS2 = (a2 * a3) << 2;
    void* valA = Mem_Alloc(srcS2, 4);
    a1[2] = valA;
    a1[1] = a3;
    *a1 = a2;
    __builtin_memset(__builtin_memset(valA, 0, srcS2 & 0xfffffffc), 0, srcS2 & 3);
    return 0;
}
