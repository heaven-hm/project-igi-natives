#include "004E3FC0-SplineObjSegment_Action.h"
/* 0x004e3fc0 SplineObjSegment_Action full linked: callers=0 callees=3 */
void* sub_4e3fc0(float a1, int32_t* a2)

{
    float edi = a1;
    void* result_2 = 1;
    void* result = *(edi + 0x6c);

    if (result)
    {
        uint32_t eax_1 = sub_4e5360();
        int32_t ecx_1 = 0;
        ecx_1 = *(edi + 0x1c);
        int32_t eax_5 = *(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_5)
            eax_5(edi, &result_2);

        result = result_2;

        if (result)
        {
            int32_t eax_6 = *(edi + 0x20);
            int32_t edx_1 = *(edi + 0x28);
            int32_t var_14_1 = *(edi + 0x24);
            int32_t var_c_1 = *(edi + 0x2c);
            void* result_1 = nullptr;
            int32_t* var_40_1 = *(*(*(*(*(edi + 0x6c) + (*(edi + 0xa4) << 2)) + 0xc) + 0xc) + 0x2c);

            while (true)
            {
                int32_t var_58_2 = 0;
                int32_t var_5c_1 = 1;
                void* eax_11 = sub_49a050(edi, *(edi + 0xa4), result_1, nullptr);
                int32_t i = 0;

                if (*var_40_1 > 0)
                {
                    do
                    {
                        int32_t ecx_6 = var_40_1[4];
                        int32_t eax_13 = 0;
                        eax_13 = *(ecx_6 + (i << 3));
                        long double x87_r7_3 = a2[1] * 0.5f / a2[3];
                        void* ecx_7 = ecx_6 + (i << 3);
                        int32_t eax_14 = 0;
                        eax_14 = *(ecx_7 + 2);
                        float* edx_6 = eax_11 + eax_13 * 0xc;
                        float* eax_16 = eax_11 + eax_14 * 0xc;
                        int32_t eax_17 = 0;
                        eax_17 = *(ecx_7 + 4);
                        double* eax_18 = a2[2];
                        float* ecx_9 = eax_11 + eax_17 * 0xc;
                        sub_4e5610(*a2, (*edx_6 + eax_6 - *eax_18 + a2[3]) * x87_r7_3,
                            (edx_6[1] + edx_1 - eax_18[1] + a2[3]) * x87_r7_3,
                            (*eax_16 + eax_6 - *eax_18 + a2[3]) * x87_r7_3,
                            (eax_16[1] + edx_1 - eax_18[1] + a2[3]) * x87_r7_3,
                            (*ecx_9 + eax_6 - *eax_18 + a2[3]) * x87_r7_3,
                            (ecx_9[1] + edx_1 - eax_18[1] + a2[3]) * x87_r7_3);
                        i += 1;
                    } while (i < *var_40_1);
                }

                result = result_1 + 1;
                result_1 = result;
                var_40_1 = &var_40_1[8];

                if (result >= 2)
                    break;

                edi = a1;
            }
        }
    }

    return result;
}
