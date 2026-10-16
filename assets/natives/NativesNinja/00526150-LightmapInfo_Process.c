#include "00526150-LightmapInfo_Process.h"
/* 0x00526150 LightmapInfo_Process full linked: callers=0 callees=0 */
int32_t sub_526150(void* a1, int32_t* a2)

{
    int32_t* edi = a2;
    void* ebx = a1;
    int32_t* i = nullptr;
    int32_t* esi = *(edi[1] + 0xc8) + *edi * 0xc + 4;
    a2 = nullptr;
    int32_t result;

    do
    {
        float var_24;
        float var_20;
        float var_1c;

        if (!i)
        {
            var_24 = *(ebx + 0x30);
            var_20 = *(ebx + 0x34);
            var_1c = *(ebx + 0x38);
        }
        else if (i == 1)
        {
            var_24 = *(ebx + 0x3c);
            var_20 = *(ebx + 0x40);
            var_1c = *(ebx + 0x44);
        }

        int32_t edx_6 = 0;
        long double x87_r7_2 = *(*(edi[1] + 0x88) + 8) * 0.000244140625f;
        result = esi[2];
        long double x87_r7_3 = x87_r7_2 + x87_r7_2;
        int32_t result_1 = result;
        long double x87_r7_4 = x87_r7_3 * x87_r7_3;
        var_24 = x87_r7_4 * var_24;
        var_20 = x87_r7_4 * var_20;
        var_1c = x87_r7_4 * var_1c;

        if (result > 0)
        {
            do
            {
                int32_t eax_11 = *esi;
                float var_30_1 = var_24;
                long double x87_r7_7 = var_24 * *(eax_11 + (edx_6 << 2));
                float var_2c_2 = var_20 * *(eax_11 + (edx_6 << 2));
                long double x87_r6_9 = var_1c * *(eax_11 + (edx_6 << 2));
                int32_t ecx_4 = *(esi[1] + (edx_6 << 2));
                edx_6 += 1;
                float* eax_14 = *(edi[2] + (ecx_4 << 2));
                float* ecx_5 = *(edi[3] + (ecx_4 << 2));
                float var_30_2 = x87_r7_7 + x87_r7_7;
                long double x87_r7_9 = var_2c_2;
                float var_18_1 = var_30_2;
                float var_c_1 = var_30_2;
                float var_2c_3 = x87_r7_9 + x87_r7_9;
                long double x87_r7_11 = x87_r6_9;
                float var_28_3 = x87_r7_11 + x87_r7_11;
                long double x87_r7_14 = var_30_2 * 0.5f;
                *eax_14 = x87_r7_14 + *eax_14;
                eax_14[1] = var_2c_3 * 0.5f + eax_14[1];
                eax_14[2] = var_28_3 * 0.5f + eax_14[2];
                result = result_1;
                *ecx_5 = x87_r7_14 + *ecx_5;
                ecx_5[1] = var_2c_3 * 0.5f + ecx_5[1];
                ecx_5[2] = var_28_3 * 0.5f + ecx_5[2];
            } while (edx_6 < result);

            ebx = a1;
            i = a2;
        }

        esi = &esi[3];
        i += 1;
        a2 = i;
    } while (i < 1);

    return result;
}
