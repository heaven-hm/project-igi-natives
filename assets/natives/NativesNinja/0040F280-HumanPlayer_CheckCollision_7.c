#include "0040F280-HumanPlayer_CheckCollision_7.h"
/* 0x0040f280 HumanPlayer_CheckCollision_7 full linked: callers=0 callees=5 */
int32_t HumanPlayer_CheckCollision_7(void* a1, int32_t a2)

{
    char result = sub_4647d0(*(a2 + 0x4ec));

    if (result)
    {
        int32_t edi;
        int32_t* eax_1 = HumanPlayer_UpdateMotion_11(a2, edi, a2, *(a2 + 0xd4c));

        if (eax_1)
            sub_4f2070(a2 + 0x4c4, nullptr, eax_1);

        *(a2 + 0xd4c) = 0xffffffff;
        HumanPlayer_CheckCollision_9(a2, 1.40129846e-44f);
        result = sub_464770(*(a2 + 0x4ec), 0f, 0, 0x3d6e4bae, 0x3d082b3f);
        *(a1 + 0x14) = HumanPlayer_ApplyRecoil_7;
    }

    return result;
}
