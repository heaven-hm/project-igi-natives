#include "004C7140-DynObj_LinkDynamicCube_8.h"
/* 0x004c7140 DynObj_LinkDynamicCube_8 full linked: callers=76 callees=4 */
int32_t sub_4c7140(void* a1, int32_t* a2, double* a3, float a4, int32_t a5)

{
    int32_t eax_1 = sub_4c7290(a5, a2[7]);
    int32_t* eax_2 = sub_4c7750(a1, eax_1);
    int32_t ebp_1 = *a3 + *(a1 + 0xde0);
    int32_t ecx_2 = a3[1] + *(a1 + 0xde4);
    void* edx_1 = a3[2] + *(a1 + 0xde8);
    int32_t var_14_3 = a4;
    int32_t eax_7 = sub_4c67e0(ebp_1 - var_14_3, ecx_2 - var_14_3, edx_1 - var_14_3,
        var_14_3 + ebp_1, var_14_3 + ecx_2, edx_1 + var_14_3);
    a2[8] = *a3;
    a2[9] = *(a3 + 4);
    a2[0xa] = a3[1];
    a2[0xb] = *(a3 + 0xc);
    a2[0xc] = a3[2];
    a2[0xd] = *(a3 + 0x14);
    int32_t ecx_9 = 0;
    a2[0x11] = a4;
    ecx_9 = a2[7];
    a2[0x17] = *(ecx_9 * 0x30 + &g_af5f08);
    a2[0x18] = 0;
    sub_4c6d20(a1, eax_2, a2, eax_7, ebp_1, ecx_2, edx_1);
    int32_t result = 0;
    int32_t i_1 = 0xfe;
    int16_t* ebx_1 = a1 + eax_1 * 0x1fc + 0x118;
    int32_t i;

    do
    {
        int32_t ecx_14 = 0;
        int16_t edx_16 = 0;
        ecx_14 = a2[7];
        edx_16 = *(((ecx_14 + result) << 2) + &g_a96ae0);
        *ebx_1 += edx_16;
        ebx_1 = &ebx_1[1];
        result += 0x180;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
