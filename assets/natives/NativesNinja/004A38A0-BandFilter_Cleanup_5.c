#include "004A38A0-BandFilter_Cleanup_5.h"
/* 0x004a38a0 BandFilter_Cleanup_5 full linked: callers=0 callees=2 */
int32_t sub_4a38a0(int32_t a1)

{
    int32_t esi = a1;
    int32_t ecx = *(esi + 0x54);
    long double x87_r7_1 = -(*(esi + 0x24));
    a1 = -4f / ecx;
    long double temp0 = a1;
    x87_r7_1 - temp0;

    if (*(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        x87_r7_1 = a1;

    int32_t eax_1 = *(esi + 0x50);
    *(esi + 0x24) = x87_r7_1 + *(esi + 0x24);

    if (eax_1 >= ecx)
        *(esi + 0x50) = 0;
    else
        *(esi + 0x50) = eax_1 + 1;

    int32_t eax_3 = *(esi + 0x58);

    if (eax_3 < *(esi + 0x5c))
    {
        *(esi + 0x58) = eax_3 + 1;
        return eax_3 + 1;
    }

    *(esi + 0x58) = sub_4b4770(0x935bf0) * *(esi + 0x5c) * 0.699999988f;
    int32_t result;
    long double st0_1;
    st0_1 = sub_4b4770(0x935bf0);
    *(esi + 0x24) = st0_1 * *(esi + 0x28);
    return result;
}
