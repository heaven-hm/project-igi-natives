#include "AI_AnimationDNotFound_2.h"
void* AI_AnimationDNotFound_2(void* a1, void* a2)

{
    int32_t valA = *(a2 + 0xd0c);
    *(a2 + 0x696) = 0;

    if (valA == 0xffffffff)
        Human_StateAnimation(a2, 6, 0f);
    else if (!Render_BindTexture_11(a2 + 0x68, 0, valA))
    {
        int32_t v_8_2 = *(a2 + 0xd0c);
        Warning_Show("Animation #%d not found");
        Human_StateAnimation(a2, 6, 0f);
    }
    else
        FX_DebrisSpawn_14(a2, *(a2 + 0xd0c), 1, 0f);

    *(a2 + 0xd0c) = 0;
    FX_TrailUpdate_15(a2);
    *(a1 + 0x14) = AI_SelectTarget_6;
    return a1;
}
