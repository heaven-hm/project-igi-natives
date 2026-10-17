// Original IGI.EXE function: HumanPlayer_TakeDamage (VA 0x00408A40; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_TakeDamage.h"
int32_t HumanPlayer_TakeDamage(void* context, void* param_2)

{
    *(param_2 + 0x33d) = 0;
    Render_TransformVertices_10(param_2 + 0x68, 0.0f);
    int32_t item_10_1;
    float item_c;

    if (*(context + 0xc) != 0x1c)
    {
        item_c = 0.200000003f;
        item_10_1 = *(context + 0x10);
    }
    else
    {
        item_c = 0.0f;
        item_10_1 = *(context + 0x10);
    }

    Human_StateAnimation(param_2, item_10_1, item_c);
    int32_t result = HumanPlayer_ApplyRecoil_9(param_2, 3);
    *(context + 0x14) = HumanPlayer_UpdateAnimation;
    return result;
}
