#include "0052D9F0-Light_CalculateAttenuation_11.h"
/* 0x0052d9f0 Light_CalculateAttenuation_11 full linked: callers=2 callees=0 */
uint32_t sub_52d9f0(int32_t a1)

{
    int32_t esi = a1;
    int32_t var_18 = 0;
    int32_t eax = *(esi + 0x4ab0);
    int32_t i = 1;
    void* ecx = esi + 0x48c0;
    int64_t var_8 = eax * 0.703000009f;
    int32_t eax_1 = var_8;
    int32_t edx_3;
    int32_t edi_1;

    do
    {
        a1 = i;
        int32_t j_1 = 5;
        int32_t j;

        do
        {
            edi_1 = *(esi + 0x4aa8);
            int32_t var_c_1 = 0;
            long double x87_r5_2 = a1 * 0.5f;
            *(&var_8 + 4) = 0;
            ecx += 0x10;
            edx_3 = 0;
            var_8 = COMBINE(edx_3, edi_1) % eax;
            j = j_1;
            j_1 -= 1;
            a1 += i;
            long double st0_1;
            bool c1_1;
            bool c2_1;
            st0_1 = __fsin(var_8 / eax * 6.2831853071795862 + x87_r5_2);
            *(ecx - 0x18) = st0_1 * *(esi + 0x4a88);
            long double st0_2;
            bool c1_2;
            bool c2_2;
            st0_2 =
                __fsin((COMBINE(0, edi_1 + 0xbd) % eax_1) / eax_1 * 6.2831853071795862 + x87_r5_2);
            *(ecx - 0x10) = st0_2 * *(esi + 0x4a88);
        } while (j != 1);
        i += 1;
    } while (i <= 5);

    return COMBINE(edx_3, edi_1) / eax;
}
