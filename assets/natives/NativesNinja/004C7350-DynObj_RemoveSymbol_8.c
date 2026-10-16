#include "004C7350-DynObj_RemoveSymbol_8.h"
/* 0x004c7350 DynObj_RemoveSymbol_8 full linked: callers=4 callees=4 */
int32_t sub_4c7350(void* a1, int32_t* a2, double* a3, double* a4, double* a5, int32_t a6)

{
    int32_t eax_1 = sub_4c7290(a6, a2[7]);
    int32_t* eax_2 = sub_4c7750(a1, eax_1);
    int32_t ebp_2 = *a3 + *(a1 + 0xde0);
    int32_t ebp_4 = a3[1] + *(a1 + 0xde4);
    void* ebp_6 = a3[2] + *(a1 + 0xde8);
    int32_t ebp_8 = *a4 + *(a1 + 0xde0);
    int32_t ebp_10 = a4[1] + *(a1 + 0xde4);
    int32_t ebp_12 = a4[2] + *(a1 + 0xde8);
    int32_t ecx_5 = *a5 + *(a1 + 0xde0);
    int32_t ebp_14 = a5[1] + *(a1 + 0xde4);
    int32_t edx_15 = a5[2] + *(a1 + 0xde8);
    a2[8] = *a3;
    a2[9] = *(a3 + 4);
    a2[0xa] = a3[1];
    a2[0xb] = *(a3 + 0xc);
    a2[0xc] = a3[2];
    a2[0xd] = *(a3 + 0x14);
    int32_t eax_5 = 0;
    eax_5 = a2[7];
    a2[0x11] = sqrtl(0.0) * 0.5f;
    int16_t eax_8 = *(eax_5 * 0x30 + &g_af5f08);
    a2[0x18] = 0;
    a2[0x17] = eax_8;
    sub_4c6d20(a1, eax_2, a2,
        sub_4c67e0(ebp_8, ebp_10, ebp_12, ecx_5 - 1, ebp_14 - 1, edx_15 - 1), ebp_2, ebp_4, ebp_6);
    int32_t result = 0;
    int16_t* edi_1 = a1 + eax_1 * 0x1fc + 0x118;
    int32_t i_1 = 0xfe;
    int32_t i;

    do
    {
        int32_t edx_20 = 0;
        int16_t ebx_1 = 0;
        edx_20 = a2[7];
        ebx_1 = *(((edx_20 + result) << 2) + &g_a96ae0);
        *edi_1 += ebx_1;
        edi_1 = &edi_1[1];
        result += 0x180;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
