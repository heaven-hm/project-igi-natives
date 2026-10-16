#include "00436990-RainEffect_Setup.h"
/* 0x00436990 RainEffect_Setup full linked: callers=0 callees=4 */
int32_t RainEffect_Setup(int80_t a1 @ st0, void* a2)

{
    int32_t result = *(a2 + 0x20);

    if (!result)
        return result;

    if (sub_4f16c0(a2 + 0x38))
    {
        sub_4f16e0(a2 + 0x38, a2);
        sub_499f90(*(a2 + 0x20), a1);
    }

    return sub_499cf0(*(a2 + 0x20));
}
