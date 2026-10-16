#include "004A35B0-BandFilter_Cleanup_4.h"
/* 0x004a35b0 BandFilter_Cleanup_4 full linked: callers=0 callees=3 */
int32_t sub_4a35b0(void* a1)

{
    void* esi = *(a1 + 0xc);
    int32_t var_18 = *(esi + 0x38);
    int32_t var_14 = *(esi + 0x3c);
    int32_t var_10 = *(esi + 0x30);
    int32_t var_c = *(esi + 0x34);
    sub_497680(0xbcaba0, &var_18);
    float ecx_3 = *(esi + 0x30);
    float var_40 = ecx_3;
    sub_4b4910(*(esi + 0x38), *(esi + 0x3c) + *(esi + 0x34) - *(esi + 0x40), ecx_3, *(esi + 0x40),
        *(esi + 0x20), *(esi + 0x24), *(esi + 0x28), 0, 0xffffffff, 0x3f800000);
    int32_t result = sub_4b4910(*(esi + 0x38), *(esi + 0x3c), *(esi + 0x30), *(esi + 0x40),
        *(esi + 0x20), *(esi + 0x24), *(esi + 0x28), 0, 0xffffffff, 0x3f800000);
    return result;
}
