#include "0040BE40-HumanPlayer_PlaySound_4.h"
/* 0x0040be40 HumanPlayer_PlaySound_4 full linked: callers=0 callees=5 */
int32_t HumanPlayer_PlaySound_4(void* a1, float a2)

{
    int32_t result = FallLanding(a2);

    if (!(*(a1 + 8) & 4))
        return result;

    void* eax = *(a2 + 0x6ec);

    if (eax)
    {
        struct status_msg* eax_3 = sub_4e6b00(sub_4f0ee0(), eax + 0x114);

        if (eax_3)
            sub_4e6c30(eax_3, a2 + 0x6a8);
    }

    __builtin_memset(a2 + 0x664, 0, 0x18);
    int32_t* eax_4 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t eax_5 = *eax_4;
    *(a1 + 0x14) = eax_5;
    return eax_5(a1, a2);
}
