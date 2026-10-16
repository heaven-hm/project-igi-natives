#include "004F7630-RainDynCubeObj_Action.h"
/* 0x004f7630 RainDynCubeObj_Action full linked: callers=0 callees=1 */
int32_t sub_4f7630(void* a1)

{
    void* edi = *(a1 + 0xc);
    int32_t result_1 = 7;
    double* esi = edi + 0x70;
    float var_44 = *(edi + 0x2c60) * 0.00787401572f;
    float var_40 = *(edi + 0x2c64) * 0.00787401572f;
    float var_3c = *(edi + 0x2c68) * 0.00787401572f;
    int32_t result;
    bool cond:2_1;

    do
    {
        int32_t var_50_1 = 7;
        bool cond:1_1;

        do
        {
            int32_t var_54_1 = 7;
            bool cond:0_1;

            do
            {
                if (*(esi + 0x14))
                {
                    int32_t var_58_1 = 0;

                    if (*(edi + 0x2ca8) > 0)
                    {
                        double* var_48_1 = esi;
                        float** ebx_1 = edi + 0x2b4c;
                        bool cond:3_1;

                        do
                        {
                            float* eax_3 = *ebx_1;
                            int32_t ecx;
                            int32_t var_6c_1 = ecx;
                            double var_20 = *eax_3 + esi[-1];
                            long double x87_r7_8 = *esi;
                            double var_18_1 = eax_3[1] + x87_r7_8;
                            double var_10_1 = eax_3[2] + esi[1];
                            double var_38 = *eax_3 + esi[-1];
                            double var_30_1 = eax_3[1] + x87_r7_8;
                            double var_28_1 = eax_3[2] + esi[1];
                            var_38 = eax_3[6] + var_38;
                            double var_30_2 = eax_3[7] + var_30_1;
                            long double x87_r7_17 = eax_3[8] + var_28_1;
                            var_38 = var_38 - *(edi + 0x2c54);
                            double var_30_3 = var_30_2 - *(edi + 0x2c58);
                            double var_28_2 = x87_r7_17 - *(edi + 0x2c5c);
                            sub_4e1130(&var_20, &var_38, &var_44, 0f, &var_44, eax_3[9] * esi[2]);
                            ecx = *(edi + 0x2ca8);
                            ebx_1 = &ebx_1[1];
                            cond:3_1 = var_58_1 + 1 < ecx;
                            var_58_1 += 1;
                        } while (cond:3_1);
                    }
                }

                esi = &esi[4];
                cond:0_1 = var_54_1 != 1;
                var_54_1 -= 1;
            } while (cond:0_1);
            cond:1_1 = var_50_1 != 1;
            var_50_1 -= 1;
        } while (cond:1_1);
        result = result_1 - 1;
        cond:2_1 = result_1 != 1;
        result_1 = result;
    } while (cond:2_1);
    return result;
}
