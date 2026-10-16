#include "004AD1B0-Camera_UpdateTransform_27.h"
/* 0x004ad1b0 Camera_UpdateTransform_27 full linked: callers=1 callees=0 */
🌐  uint32_t __stdcall __aullrem(int32_t a1, uint32_t a2, int32_t a3, uint32_t a4) __pure

{
    uint32_t result;

    if (a4)
    {
        uint32_t i = a4;
        int32_t ebx_1 = a3;
        uint32_t edx_4 = a2;
        int32_t eax_4 = a1;

        do
        {
            ebx_1 = RRCD(ebx_1, 1, i & 1);
            uint32_t temp4_1 = edx_4;
            edx_4 u>>= 1;
            eax_4 = RRCD(eax_4, 1, temp4_1 & 1);
            i u>>= 1;
        } while (i);

        uint32_t temp0_3 = COMBINE(edx_4, eax_4) / ebx_1;
        int32_t eax_6 = temp0_3 * a4;
        int32_t eax_8;
        int32_t edx_5;
        edx_5 = HIGHD(temp0_3 * a3);
        eax_8 = LOWD(temp0_3 * a3);
        int32_t edx_6 = edx_5 + eax_6;

        if (edx_5 + eax_6 < edx_5 || edx_6 > a2)
            eax_8 -= a3;
        else if (edx_6 >= a2 && eax_8 > a1)
            eax_8 -= a3;

        result = -((eax_8 - a1));
    }
    else
        result = COMBINE(COMBINE(0, a2) % a3, a1) % a3;

    return result;
}
