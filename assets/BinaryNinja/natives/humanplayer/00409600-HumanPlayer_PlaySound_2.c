// IGI native provenance: HumanPlayer_PlaySound_2 - 0x00409600 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00409600-HumanPlayer_PlaySound_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_PlaySound_2.h"
int32_t HumanPlayer_PlaySound_2(void* context, void* param_2)

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
    *(context + 0x14) = HumanPlayer_TakeDamage_2;
    return result;
}
