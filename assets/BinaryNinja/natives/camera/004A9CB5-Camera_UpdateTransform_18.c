// Original IGI.EXE function: Camera_UpdateTransform_18 (VA 0x004A9CB5; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_18.h"
int32_t __load_CW(int32_t context)

{
    *(&context + 2) = (context & 0x300) | 0x7f;
    int16_t fpu_control;
    int16_t x87status;
    fpu_control = __fldcw_memmem16(*(&context + 2));
}
