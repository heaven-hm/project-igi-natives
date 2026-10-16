#include "004ADB32-Camera_ApplyBandFilter_29.h"
/* 0x004adb32 Camera_ApplyBandFilter_29 full linked: callers=1 callees=6 */
int32_t sub_4adb32(char* a1, int32_t a2, int32_t a3)

{
    int32_t result = a2;
    int32_t* ebx = a3;
    int32_t var_8 = 0x404e;
    *ebx = 0;
    ebx[1] = 0;
    ebx[2] = 0;

    if (result > 0)
    {
        a3 = result;
        int32_t i;

        do
        {
            int32_t var_14 = *ebx;
            int32_t var_10;
            int32_t* edi_1 = &var_10;
            int32_t* esi_2 = &ebx[1];
            *edi_1 = *esi_2;
            edi_1[1] = esi_2[1];
            sub_4adad7(ebx);
            sub_4adad7(ebx);
            sub_4ada79(ebx, &var_14);
            sub_4adad7(ebx);
            var_10 = 0;
            int32_t var_c_1 = 0;
            var_14 = *a1;
            result = sub_4ada79(ebx, &var_14);
            a1 = &a1[1];
            i = a3;
            a3 -= 1;
        } while (i != 1);
    }

    while (!ebx[2])
    {
        int32_t ecx_1 = ebx[1];
        ebx[2] = ecx_1 >> 0x10;
        int32_t eax_4 = *ebx;
        result = eax_4 << 0x10;
        var_8 += 0xfff0;
        ebx[1] = eax_4 >> 0x10 | ecx_1 << 0x10;
        *ebx = result;
    }

    while (!(ebx[2] & 0x8000))
    {
        result = sub_4adad7(ebx);
        var_8 += 0xffff;
    }

    result = var_8;
    *(ebx + 0xa) = result;
    return result;
}
