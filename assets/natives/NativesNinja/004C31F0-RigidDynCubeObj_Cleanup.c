#include "004C31F0-RigidDynCubeObj_Cleanup.h"
/* 0x004c31f0 RigidDynCubeObj_Cleanup full linked: callers=0 callees=3 */
void* sub_4c31f0()

{
    float* ebp;
    float* var_4 = ebp;
    sub_4a54a0(0x27144);
    void* result_1;
    void* result_2 = result_1;
    result_1 = 1;
    void* result = *(result_2 + 0x6c);

    if (result)
    {
        uint32_t eax_1 = sub_4e5360();
        int32_t ecx_1 = 0;
        ecx_1 = *(result_2 + 0x1c);
        int32_t eax_5 = *(((eax_1 * 0x180 + ecx_1) << 2) + &g_a96ae0);

        if (eax_5)
            eax_5(result_2, &result_1);

        result = result_1;

        if (result)
        {
            int32_t* eax_6 = *(result_2 + 0x20);
            int32_t edx_1 = *(result_2 + 0x28);
            int32_t arg_c = *(result_2 + 0x24);
            int32_t arg_14 = *(result_2 + 0x2c);
            __return_addr = 2;
            int32_t* ecx_5 =
                *(*(*(*(*(result_2 + 0x6c) + (*(result_2 + 0xa4) << 2)) + 0xc) + 0xc) + 0x2c) + 4;
            int32_t* var_8_1 = ecx_5;
            bool cond:0_1;

            do
            {
                float* edx_4 = *ecx_5;

                if (edx_4 > 0)
                {
                    int32_t* ecx_6 = ecx_5[4];
                    void arg_40;
                    void* eax_10 = &arg_40;
                    var_4 = edx_4;
                    bool cond:1_1;

                    do
                    {
                        int32_t* edx_5 = ecx_6;
                        ecx_6 = &ecx_6[4];
                        eax_10 += 8;
                        long double x87_r7_2 = *edx_5 * *(result_2 + 0x98);
                        long double x87_r6_2 = edx_5[1] * *(result_2 + 0x9c);
                        long double x87_r5_2 = edx_5[2] * *(result_2 + 0xa0);
                        cond:1_1 = var_4 != 1;
                        var_4 -= 1;
                        *(eax_10 - 0xc) = x87_r5_2 * *(result_2 + 0x78)
                            + x87_r7_2 * *(result_2 + 0x70) + x87_r6_2 * *(result_2 + 0x74);
                        *(eax_10 - 8) = x87_r5_2 * *(result_2 + 0x84)
                            + x87_r7_2 * *(result_2 + 0x7c) + x87_r6_2 * *(result_2 + 0x80);
                    } while (cond:1_1);
                    ecx_5 = var_8_1;
                }

                int32_t i = 0;

                if (ecx_5[-1] > 0)
                {
                    do
                    {
                        int32_t eax_12 = ecx_5[3];
                        int32_t ecx_7 = 0;
                        ecx_7 = *(eax_12 + (i << 3));
                        int32_t edx_9 = 0;
                        edx_9 = *(eax_12 + (i << 3) + 2);
                        long double x87_r7_8 = eax_6[1] * 0.5f / eax_6[3];
                        int32_t edx_11 = 0;
                        edx_11 = *(eax_12 + (i << 3) + 4);
                        double* eax_14 = eax_6[2];
                        int32_t __saved_edi;
                        sub_4e5610(*eax_6,
                            ((&__saved_edi)[ecx_7 * 2 + 0x14] + eax_6 - *eax_14 + eax_6[3])
                                * x87_r7_8,
                            ((&__saved_edi)[ecx_7 * 2 + 0x15] + edx_1 - eax_14[1] + eax_6[3])
                            * x87_r7_8,
                            ((&__saved_edi)[edx_9 * 2 + 0x14] + eax_6 - *eax_14 + eax_6[3])
                                * x87_r7_8,
                            ((&__saved_edi)[edx_9 * 2 + 0x15] + edx_1 - eax_14[1] + eax_6[3])
                            * x87_r7_8,
                            ((&__saved_edi)[edx_11 * 2 + 0x14] + eax_6 - *eax_14 + eax_6[3])
                                * x87_r7_8,
                            ((&__saved_edi)[edx_11 * 2 + 0x15] + edx_1 - eax_14[1] + eax_6[3])
                            * x87_r7_8);
                        ecx_5 = var_8_1;
                        i += 1;
                    } while (i < ecx_5[-1]);
                }

                ecx_5 = &ecx_5[8];
                result = __return_addr - 1;
                cond:0_1 = __return_addr != 1;
                var_8_1 = ecx_5;
                __return_addr = result;
            } while (cond:0_1);
        }
    }

    return result;
}
