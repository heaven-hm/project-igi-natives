#include "0048D7D0-FX_SmokeEmit_19.h"
/* 0x0048d7d0 FX_SmokeEmit_19 full linked: callers=0 callees=4 */
int32_t sub_48d7d0(void* a1)

{
    int32_t* eax = *(a1 + 0x3aa8);

    if (eax)
    {
        sub_4512a0(eax, a1, *(a1 + 0x3aba));
        sub_4511f0(*(a1 + 0x3aa8), a1, 0xffffffff);
        *(a1 + 0x3aa8) = 0;
    }

    char result = sub_48efe0(a1, 4);

    if (!result)
        return result;

    return sub_48ef70(a1, 4, 1f);
}
