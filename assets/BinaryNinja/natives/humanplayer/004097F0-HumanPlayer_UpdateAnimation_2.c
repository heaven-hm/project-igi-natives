#include "HumanPlayer_UpdateAnimation_2.h"
int32_t HumanPlayer_UpdateAnimation_2(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    Render_TransformVertices_10(a2 + 0x68, 0f);
    int32_t v_10_1;
    float v_c;

    if (*(a1 + 0xc) != 0x1c)
    {
        v_c = 0.200000003f;
        v_10_1 = *(a1 + 0x10);
    }
    else
    {
        v_c = 0f;
        v_10_1 = *(a1 + 0x10);
    }

    Human_StateAnimation(a2, v_10_1, v_c);
    int32_t result = HumanPlayer_ApplyRecoil_9(a2, 3);
    *(a1 + 0x14) = HumanPlayer_CheckCollision_2;
    return result;
}
