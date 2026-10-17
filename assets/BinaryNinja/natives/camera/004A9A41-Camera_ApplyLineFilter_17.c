// Original IGI.EXE function: Camera_ApplyLineFilter_17 (VA 0x004A9A41; static CFG gate FAIL, CFG score 0.533).
#include "Camera_ApplyLineFilter_17.h"
int32_t Camera_ApplyLineFilter_17(void* a1 @ flagP, long double a2 @ fp0) __location("fp0")

{
    *(a1 - 0x90) = 0xfe;
    int32_t objC;
    *(&objC + 1) = 0;
    long double fpu1;
    long double fpu2;
    /* tailcall */
    return sub_4a9a4e(a1, fpu1, fpu2);
}
