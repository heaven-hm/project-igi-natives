#include "004AD140-Camera_ResetMatrix_26.h"
/* 0x004ad140 Camera_ResetMatrix_26 full linked: callers=1 callees=0 */
🌐  uint32_t __stdcall __aulldiv(int32_t a1, uint32_t a2, int32_t a3, uint32_t a4) __pure

{
    if (!a4)
        return COMBINE(COMBINE(0, a2) % a3, a1) / a3;

    uint32_t i = a4;
    int32_t ebx_1 = a3;
    uint32_t edx_3 = a2;
    int32_t eax_6 = a1;

    do
    {
        ebx_1 = RRCD(ebx_1, 1, i & 1);
        uint32_t temp4_1 = edx_3;
        edx_3 u>>= 1;
        eax_6 = RRCD(eax_6, 1, temp4_1 & 1);
        i u>>= 1;
    } while (i);

    uint32_t result = COMBINE(edx_3, eax_6) / ebx_1;
    int32_t eax_8 = result * a4;
    int32_t eax_10;
    int32_t edx_4;
    edx_4 = HIGHD(a3 * result);
    eax_10 = LOWD(a3 * result);
    int32_t edx_5 = edx_4 + eax_8;

    if (edx_4 + eax_8 >= edx_4 && edx_5 <= a2 && (edx_5 < a2 || eax_10 <= a1))
        return result;

    return result - 1;
}
