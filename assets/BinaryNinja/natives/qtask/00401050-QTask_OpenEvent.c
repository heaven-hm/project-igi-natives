// Original IGI.EXE function: QTask_OpenEvent (VA 0x00401050; static CFG gate PASS, CFG score 1.000).
#include "QTask_OpenEvent.h"
int32_t QTask_OpenEvent(int32_t a1 @ flagP)

{
    int32_t saved_frame;
    struct _EXCEPTION_REGISTRATION_RECORD* srcS;
    int32_t dstD;
    Camera_ApplyLineFilter_3(&saved_frame, srcS, dstD, 0x54f8e0, 0, srcS, a1);
    struct frames_ctx* valA = Game_GetContext();
    int32_t objC = 0;
    objC = valA->pad_00[0x1c];
    *(&objC + 1) = valA->pad_00[0x1d];
    return (*((objC << 2) + &g_a970e0))(Game_GetContext());
}
