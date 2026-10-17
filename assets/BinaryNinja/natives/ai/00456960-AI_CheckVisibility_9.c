// Original IGI.EXE function: AI_CheckVisibility_9 (VA 0x00456960; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckVisibility_9.h"
int32_t AI_CheckVisibility_9(void* context, void* param_2)

{
    int32_t data_val = *(param_2 + 0xd04);
    *(param_2 + 0x696) = 0;

    if (data_val == 0xffffffff)
    {
        int32_t data_6 = Human_StateAnimation(param_2, 2, 0.0f);
        *(param_2 + 0xd04) = 0;
        *(context + 0x14) = sub_456a10;
        return data_6;
    }

    if (Render_BindTexture_11(param_2 + 0x68, 0, data_val))
    {
        int32_t data_3 = FX_DebrisSpawn_14(param_2, *(param_2 + 0xd04), 0, 0.0f);
        *(param_2 + 0xd04) = 0;
        *(context + 0x14) = sub_456a10;
        return data_3;
    }

    int32_t item_c_1 = *(param_2 + 0xd04);
    Warning_Show("Animation #%d not found");
    int32_t data_5 = Human_StateAnimation(param_2, 2, 0.0f);
    *(param_2 + 0xd04) = 0;
    *(context + 0x14) = sub_456a10;
    return data_5;
}
