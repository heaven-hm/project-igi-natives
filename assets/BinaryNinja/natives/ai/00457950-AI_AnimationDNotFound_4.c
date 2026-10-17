// Original IGI.EXE function: AI_AnimationDNotFound_4 (VA 0x00457950; static CFG gate PASS, CFG score 1.000).
#include "AI_AnimationDNotFound_4.h"
int32_t AI_AnimationDNotFound_4(void* a1, void* a2)

{
    int32_t valA = *(a2 + 0xcfc);
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 0;

    if (valA == 0xffffffff)
    {
        int32_t valA6 = Human_StateAnimation(a2, *(a1 + 0x10), 0f);
        *(a1 + 0x14) = sub_457a00;
        return valA6;
    }

    if (Render_BindTexture_11(a2 + 0x68, 0, valA))
    {
        int32_t valA3 = Bones_PlayAnimation(a2 + 0x68, 0, *(a2 + 0xcfc), 0, 0f);
        *(a1 + 0x14) = sub_457a00;
        return valA3;
    }

    int32_t v_c_1 = *(a2 + 0xcfc);
    Warning_Show("Animation #%d not found");
    int32_t valA5 = Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_457a00;
    return valA5;
}
