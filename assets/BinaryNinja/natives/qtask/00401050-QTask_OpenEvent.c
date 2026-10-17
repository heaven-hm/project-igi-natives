// Original IGI.EXE function: QTask_OpenEvent (VA 0x00401050; static CFG gate PASS, CFG score 1.000).
#include "QTask_OpenEvent.h"
int32_t QTask_OpenEvent(int32_t context )

{
    int32_t saved_frame;
    struct _EXCEPTION_REGISTRATION_RECORD* source_val;
    int32_t dest_val;
    Camera_ApplyLineFilter_3(&saved_frame, source_val, dest_val, 0x54f8e0, 0, source_val, context);
    struct frames_ctx* data_val = Game_GetContext();
    int32_t entity_val = 0;
    entity_val = data_val->pad_00[0x1c];
    *(&entity_val + 1) = data_val->pad_00[0x1d];
    return (*((entity_val << 2) + &g_a970e0))(Game_GetContext());
}
