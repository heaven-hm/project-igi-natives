#include "004ACC4D-Camera_ApplyLineFilter_26.h"
/* 0x004acc4d Camera_ApplyLineFilter_26 full linked: callers=1 callees=0 */
int32_t* sub_4acc4d(int32_t* a1, int32_t* a2)

{
    int32_t ecx;
    int32_t var_8 = ecx;
    int32_t eax;
    eax = *(a2 + 6);
    int32_t ecx_3 = eax >> 4 & 0x7ff;
    int32_t edx_1 = *a2;
    uint32_t ebx = ecx_3;
    int32_t eax_3 = a2[1] & 0xfffff;
    int32_t var_8_1 = 0x80000000;
    int32_t edi_1;

    if (ebx)
    {
        edi_1 = ebx == 0x7ff ? 0x7fff : ecx_3 + 0x3c00;

        goto label_4accc6;
    }

    int32_t* result;

    if (eax_3 || edx_1)
    {
        edi_1 = ecx_3 + 0x3c01;
        var_8_1 = 0;
    label_4accc6:
        result = a1;
        int32_t ecx_7 = edx_1 >> 0x15 | eax_3 << 0xb | var_8_1;
        result[1] = ecx_7;
        *result = edx_1 << 0xb;

        while (!(0x80000000 & ecx_7))
        {
            int32_t edx_3 = *result;
            int32_t ebx_3 = edx_3 >> 0x1f | (ecx_7 * 2);
            *result = edx_3 * 2;
            result[1] = ebx_3;
            edi_1 += 0xffff;
            ecx_7 = ebx_3;
        }

        result[2] = (eax & 0x8000) | edi_1;
    }
    else
    {
        result = a1;
        result[1] = 0;
        *result = 0;
        result[2] = 0;
    }

    return result;
}
