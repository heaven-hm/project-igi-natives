#include "004FD4E0-Script_ParseEnumInt32_30.h"
/* 0x004fd4e0 Script_ParseEnumInt32_30 full linked: callers=1 callees=0 */
float sub_4fd4e0(void* a1, float a2) __location("eax")

{
    long double x87_r7 = 0f;
    long double x87_r6 = 0f;
    float edx = g_b818a8;
    float var_8 = x87_r6;
    long double x87_r5 = 0f;
    float ecx = g_b818a4;
    int32_t i_1 = g_b041e8;
    float var_4 = x87_r5;

    if (i_1 > 0)
    {
        int32_t* ecx_1 = g_b041e4;
        int32_t edi_1 = g_b041e0;
        int32_t i;

        do
        {
            int32_t eax_1 = *ecx_1;
            ecx_1 = &ecx_1[1];
            int32_t eax_2 = eax_1 * g_b041f0;
            x87_r7 = x87_r7 + *(eax_2 + edi_1 + 0xc);
            x87_r6 = x87_r6 + *(eax_2 + edi_1 + 0x10);
            x87_r5 = x87_r5 + *(eax_2 + edi_1 + 0x14);
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        var_4 = x87_r5;
        var_8 = x87_r6;
    }

    long double x87_r7_2 = x87_r7 + g_b818a0;
    *a2 = x87_r7_2;
    long double x87_r6_4 = ecx + var_8;
    *(a2 + 4) = x87_r6_4;
    long double x87_r6_6 = edx + var_4;
    *(a2 + 8) = x87_r6_6;
    *a2 = x87_r7_2 * *(a1 + 0xdc) * 255f;
    *(a2 + 4) = x87_r6_4 * *(a1 + 0xdc) * 255f;
    *(a2 + 8) = x87_r6_6 * *(a1 + 0xdc) * 255f;
    return a2;
}
