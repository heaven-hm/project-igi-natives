// IGI native provenance: QTask_OpenEvent - 0x00401050 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401050-QTask_OpenEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
