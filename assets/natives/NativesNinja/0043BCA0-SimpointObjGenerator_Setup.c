#include "0043BCA0-SimpointObjGenerator_Setup.h"
/* 0x0043bca0 SimpointObjGenerator_Setup full linked: callers=0 callees=3 */
int32_t SimpointObjGenerator_Setup(void* a1)

{
    if (!*(a1 + 0x138))
        *(a1 + 0x138) = sub_503c00(*(a1 + 0x124) * 0x1e, a1 + 0x104, a1 + 0x114,
            *(a1 + 0x12c), *(a1 + 0x130), 0x4232674f, *(a1 + 0x134), a1 + 0x148, 0);

    if (*(a1 + 0xf0) <= 0)
    {
        float var_c = *(a1 + 0x13c);
        float eax_9 = *(a1 + 0x140);
        float ecx_4 = *(a1 + 0x144);
        var_c = var_c * 4096f;
        float var_8_2 = eax_9 * 4096f;
        float var_4_2 = ecx_4 * 4096f;
        int32_t eax_11 = sub_503bf0();
        sub_503cc0(*(a1 + 0x138), eax_11, a1 + 0x20, a1 + 0x70, &var_c);
        *(a1 + 0xf0) = *(a1 + 0x128) * 0x1e;
    }

    int32_t result = *(a1 + 0xf0) - 1;
    *(a1 + 0xf0) = result;
    return result;
}
