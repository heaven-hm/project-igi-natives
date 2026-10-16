/* LOGIC NOTE (QTask_OpenEvent @ 0x00401050)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : Game_G
   called by : sub_48f530
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_OpenEvent.h"

int32_t QTask_OpenEvent(int32_t arg1 @ frame)

{
    int32_t saved_frame;
    struct _EXCEPTION_REGISTRATION_RECORD* src;
    int32_t dst;
    Camera_ApplyLineFilter_3(&saved_frame, src, dst, 0x54f8e0, 0, src, arg1);
    struct frames_ctx* result = Game_GetContext();
    int32_t ctx = 0;
    ctx = result->pad_00[0x1c];
    *(&ctx + 1) = result->pad_00[0x1d];
    return (*((ctx << 2) + &data_a970e0))(Game_GetContext());
}
