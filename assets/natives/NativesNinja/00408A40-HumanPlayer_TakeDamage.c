#include "00408A40-HumanPlayer_TakeDamage.h"
/* 0x00408a40 HumanPlayer_TakeDamage full linked: callers=0 callees=3 */
int32_t HumanPlayer_TakeDamage(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    sub_4d6520(a2 + 0x68, 0f);
    int32_t var_10_1;
    float var_c;

    if (*(a1 + 0xc) != 0x1c)
    {
        var_c = 0.200000003f;
        var_10_1 = *(a1 + 0x10);
    }
    else
    {
        var_c = 0f;
        var_10_1 = *(a1 + 0x10);
    }

    sub_489e70(a2, var_10_1, var_c);
    int32_t result = HumanPlayer_ApplyRecoil_9(a2, 3);
    *(a1 + 0x14) = HumanPlayer_UpdateAnimation;
    return result;
}
