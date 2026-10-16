#include "gi_platform.h"
#include "0045C750-AI_AnimationDNotFound_7.h"
void* AI_AnimationDNotFound_7(void* a1, void* a2)

{
    int32_t valA = (*(int32_t*)(uintptr_t)(a2 + 0xd0c));
    (*(int32_t*)(uintptr_t)(a2 + 0x696)) = 0;

    if (valA == 0xffffffff)
        Human_StateAnimation(a2, 2, 0.0f);
    else if (!Render_BindTexture_11(a2 + 0x68, 0, valA))
    {
        int32_t v_8_2 = (*(int32_t*)(uintptr_t)(a2 + 0xd0c));
        Warning_Show("Animation #%d not found");
        Human_StateAnimation(a2, 2, 0.0f);
    }
    else
        FX_DebrisSpawn_14(a2, (*(int32_t*)(uintptr_t)(a2 + 0xd0c)), 0, 0.0f);

    (*(int32_t*)(uintptr_t)(a2 + 0xd0c)) = 0;
    FX_TrailUpdate_15(a2);
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = AI_CombatTarget_16;
    return a1;
}
