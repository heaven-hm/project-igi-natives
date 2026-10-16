#include "00408390-HumanPlayer_UpdateHealth.h"
/* 0x00408390 HumanPlayer_UpdateHealth full linked: callers=1 callees=1 */
int32_t HumanPlayer_UpdateHealth(int32_t a1)

{
    int32_t edi = 0;
    int32_t result;

    for (void* i = &g_569210; i < 0x56df10; )
    {
        result = sub_4ce3e0(a1, edi, i);
        i += 0x268;
        edi += 1;
    }

    return result;
}
