// Original IGI.EXE function: AI_AnimationDNotFound_2 (VA 0x004547F0; static CFG gate PASS, CFG score 1.000).
#include "AI_AnimationDNotFound_2.h"
void* AI_AnimationDNotFound_2(void* context, void* param_2)

{
    int32_t data_val = *(param_2 + 0xd0c);
    *(param_2 + 0x696) = 0;

    if (data_val == 0xffffffff)
        Human_StateAnimation(param_2, 6, 0.0f);
    else if (!Render_BindTexture_11(param_2 + 0x68, 0, data_val))
    {
        int32_t item_8_2 = *(param_2 + 0xd0c);
        Warning_Show("Animation #%d not found");
        Human_StateAnimation(param_2, 6, 0.0f);
    }
    else
        FX_DebrisSpawn_14(param_2, *(param_2 + 0xd0c), 1, 0.0f);

    *(param_2 + 0xd0c) = 0;
    FX_TrailUpdate_15(param_2);
    *(context + 0x14) = AI_SelectTarget_6;
    return context;
}
