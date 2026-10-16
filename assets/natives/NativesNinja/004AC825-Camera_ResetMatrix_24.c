#include "004AC825-Camera_ResetMatrix_24.h"
/* 0x004ac825 Camera_ResetMatrix_24 full linked: callers=2 callees=3 */
int32_t sub_4ac825(int32_t a1, int32_t* a2)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    int32_t var_c = ecx;
    void* edi = a2 - 1;
    int32_t result = 0;
    int32_t temp0 = (edi + 1) / 0x20;
    int32_t eax_5;
    int32_t edx_1;
    edx_1 = HIGHD(edi + 1);
    eax_5 = LOWD(edi + 1);
    int32_t* eax_7 = a1 + (temp0 << 2);

    if (*eax_7 & 1 << ((0x1f - COMBINE(edx_1, eax_5) % 0x20) & 0x1f) && !sub_4ac786(a1, edi + 2))
        result = sub_4ac7cf(a1, edi);

    *eax_7 &= 0xffffffff << ((0x1f - COMBINE(edx_1, eax_5) % 0x20) & 0x1f);

    if (temp0 + 1 < 3)
        __builtin_memset(a1 + ((temp0 + 1) << 2), 0, (3 - (temp0 + 1)) << 2);

    return result;
}
