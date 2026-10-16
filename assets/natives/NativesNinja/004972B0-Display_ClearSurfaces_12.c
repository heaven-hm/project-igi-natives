#include "004972B0-Display_ClearSurfaces_12.h"
/* 0x004972b0 Display_ClearSurfaces_12 full linked: callers=1 callees=1 */
int32_t sub_4972b0(int32_t a1)

{
    int32_t esi = a1;
    int32_t temp0 = *(*(esi + 0xc) + 0x1c) / g_limit_b;
    int32_t* eax_4 = *(esi + 0x10);
    (*(*eax_4 + 0x10))(eax_4, &a1, 0);
    void* ecx_1 = *(esi + 0xc);
    int32_t eax_7;
    int32_t edx_2;
    edx_2 = HIGHD(*(ecx_1 + 0x18) * *(ecx_1 + 0x16));
    eax_7 = LOWD(*(ecx_1 + 0x18) * *(ecx_1 + 0x16));
    int32_t temp0_1 = a1 / ((eax_7 + (edx_2 & 7)) >> 3);
    int32_t result = *(esi + 0x3c);
    *(esi + 0x20) = temp0_1;

    if (result == 1 && g_c28c5c > *(esi + 0x2c))
    {
        *(esi + 0x3c) = 2;
        result = 0;
        return result;
    }

    if (result && result != 1)
    {
    label_49732b:
        result = 0;
        return result;
    }

    int32_t ebx_2 = *(esi + 0x28);
    int32_t edx_11;

    if (temp0_1 <= ebx_2)
        edx_11 = ebx_2 - temp0_1;
    else
    {
        int32_t eax_14;
        int32_t edx_7;
        edx_7 = HIGHD(0x10624dd3 * *(ecx_1 + 0x1c) * 0xfa0);
        eax_14 = LOWD(0x10624dd3 * *(ecx_1 + 0x1c) * 0xfa0);
        int32_t edx_8 = edx_7 >> 6;
        edx_11 = edx_8 + (edx_8 >> 0x1f) - temp0_1 + ebx_2;
    }

    result = (*(esi + 0x34) - edx_11) / temp0;

    for (int32_t i = result; i > 0; i -= 1)
    {
        sub_496ab0(esi, temp0);
        result = *(esi + 0x3c);

        if (result == 0xffffffff)
            goto label_49732b;
    }

    result = 1;
    return result;
}
