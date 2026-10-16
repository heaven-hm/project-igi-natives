#include "0052F630-Light_SetLightColor_12.h"
/* 0x0052f630 Light_SetLightColor_12 full linked: callers=4 callees=9 */
void* sub_52f630(float* a1, void* a2, double* a3, void* a4, void* a5, int32_t a6)

{
    void* result = a2;
    int32_t edx = *(result + 0x18);
    int32_t* var_614;
    double* var_610;
    int32_t* var_60c;
    int32_t* var_608;
    int32_t* var_604;
    int32_t* var_600;
    void var_2e8;
    double* ebx_1;

    if (edx & 0xa)
    {
        ebx_1 = a3;

        if (!(edx & 2))
            result = a5;
        else
        {
            void* esi_1 = 1;
            var_60c = &ebx_1[9];
            var_614 = ebx_1 + 0x54;
            var_600 = ebx_1 + 0x6c;
            var_604 = ebx_1 + 0x74;
            result = a5;
            var_608 = ebx_1;
            var_610 = &ebx_1[3];

            if (result > 1)
            {
                long double x87_r7_2 = ebx_1[3] - *ebx_1;
                void* ecx_3 = &var_2e8;

                do
                {
                    void* edx_1 = esi_1 + a4;
                    esi_1 += 1;
                    int32_t edx_2 = ebx_1[1];
                    ecx_3 += 0x18;
                    *(ecx_3 - 0x20) = edx_1 * x87_r7_2 / (a4 + result) + *ebx_1;
                    *(ecx_3 - 0x18) = edx_2;
                    *(ecx_3 - 0x14) = *(ebx_1 + 0xc);
                    *(ecx_3 - 0x10) = a1[0x12a4];
                } while (esi_1 < result);
            }
        }

        if (edx & 8)
        {
            var_610 = &ebx_1[6];
            var_614 = &ebx_1[0xc];
            var_608 = &ebx_1[3];
            var_604 = ebx_1 + 0x7c;
            var_60c = ebx_1 + 0x54;
            int32_t edx_8 = 1;
            var_600 = ebx_1 + 0x74;

            if (result > 1)
            {
                long double x87_r7_5 = var_610[1] - *(var_608 + 8);
                void* ecx_8 = &var_2e8;

                do
                {
                    *(ecx_8 - 8) = *var_608;
                    *(ecx_8 - 4) = var_608[1];
                    int32_t edi_6 = a4 + edx_8;
                    edx_8 += 1;
                    ecx_8 += 0x18;
                    *(ecx_8 - 0x18) = edi_6 * x87_r7_5 / (a4 + result) + *(var_608 + 8);
                    *(ecx_8 - 0x10) = a1[0x12a4];
                } while (edx_8 < result);
            }
        }

    label_52f8ce:
        void var_308;
        memcpy(&var_308, var_608, 0x18);
        int32_t var_488 = *var_60c;
        int32_t var_484_1 = var_60c[1];
        int32_t var_480_1 = var_60c[2];
        int32_t ecx_20 = var_600[1];
        int32_t var_588[0x2];
        var_588[0] = *var_600;
        var_588[1] = ecx_20;
        int32_t __saved_edi;
        memcpy(&(&__saved_edi)[result * 6 + 0xca], var_610, 0x18);
        (&__saved_edi)[result * 3 + 0x6a] = *var_614;
        (&__saved_edi)[result * 3 + 0x6b] = var_614[1];
        (&__saved_edi)[result * 3 + 0x6c] = var_614[2];
        int32_t ecx_25 = var_604[1];
        (&var_588)[result][0] = *var_604;
        var_584;
        *(&var_584 + (result << 3)) = ecx_25;
        void var_580;

        if (a6 && result > 1)
        {
            float* var_618_1 = &var_580;
            void var_47c;
            float* edi_14 = &var_47c;
            void var_2e0;
            int32_t* esi_8 = &var_2e0;
            void* var_620_5 = result - 1;
            bool cond:11_1;

            do
            {
                void var_5f8;
                sub_52dae0(a1, &var_5f8, &esi_8[-4]);
                int32_t var_5e0;
                *esi_8 = var_5e0;
                int32_t var_5dc;
                esi_8[1] = var_5dc;
                void var_5c0;
                sub_52e180(a1, edi_14, &var_5c0);
                double var_5f0[0x2];

                if (ebx_1[0x11] == 1)
                    sub_52f3d0(a1, var_618_1, &var_5f0, &var_5c0);
                esi_8 = &esi_8[6];
                edi_14 = &edi_14[3];
                cond:11_1 = var_620_5 != 1;
                var_618_1 = &var_618_1[2];
                var_620_5 -= 1;
            } while (cond:11_1);
            result = a5;
        }

        void* result_1 = 1;

        if (result >= 1)
        {
            int32_t* var_620_6 = &var_580;
            void var_2f0;
            void* eax_19 = &var_2f0;
            void* var_61c_5 = &var_2f0;
            int32_t* var_618_2 = &var_488;

            while (true)
            {
                memcpy(var_608, eax_19 - 0x18, 0x18);
                memcpy(var_610, eax_19, 0x18);
                int32_t* ecx_31;

                if (!a6)
                    ecx_31 = var_60c;
                else
                {
                    ecx_31 = var_60c;
                    *ecx_31 = *var_618_2;
                    ecx_31[1] = var_618_2[1];
                    ecx_31[2] = var_618_2[2];
                    *var_614 = var_618_2[3];
                    var_614[1] = var_618_2[4];
                    var_614[2] = var_618_2[5];
                    *var_600 = var_620_6[-2];
                    var_600[1] = var_620_6[-1];
                    int32_t eax_27 = var_620_6[1];
                    *var_604 = *var_620_6;
                    var_604[1] = eax_27;
                }

                if (a1[0x12b2])
                {
                    void* eax_30 = result_1 & 0x80000001;
                    bool cond:13_1 = !eax_30;

                    if (eax_30 < 0)
                        cond:13_1 = ((eax_30 - 1) | 0xfffffffe) == 0xffffffff;

                    if (cond:13_1)
                    {
                        *ecx_31 = *var_618_2;
                        ecx_31[1] = var_618_2[1];
                        ecx_31[2] = var_618_2[2];
                        *var_614 = *var_618_2;
                        var_614[1] = var_618_2[1];
                        var_614[2] = var_618_2[2];
                        __builtin_memset(&ebx_1[9], 0, 0x24);
                    }
                    else
                    {
                        *ecx_31 = 0;
                        ecx_31[1] = 0;
                        ecx_31[2] = 0;
                        *var_614 = 0;
                        var_614[1] = 0;
                        var_614[2] = 0;
                        ebx_1[9] = 0;
                        *(ebx_1 + 0x4c) = 0;
                        ebx_1[0xa] = 0x3f800000;
                        *(ebx_1 + 0x54) = 0;
                        ebx_1[0xb] = 0;
                        *(ebx_1 + 0x5c) = 0x3f800000;
                        ebx_1[0xc] = 0;
                        *(ebx_1 + 0x64) = 0;
                        ebx_1[0xd] = 0x3f800000;
                    }
                }

                sub_5116d0(ebx_1);
                result = result_1 + 1;
                result_1 = result;
                var_61c_5 += 0x18;
                var_620_6 = &var_620_6[2];
                var_618_2 = &var_618_2[3];

                if (result > a5)
                    break;

                eax_19 = var_61c_5;
            }
        }
    }
    else if (edx & 0x14)
    {
        ebx_1 = a3;

        if (edx & 4)
        {
            var_60c = &ebx_1[9];
            var_614 = ebx_1 + 0x54;
            var_600 = ebx_1 + 0x6c;
            var_604 = ebx_1 + 0x74;
            void* ecx_13 = 1;
            var_608 = ebx_1;
            var_610 = &ebx_1[3];

            if (a5 > 1)
            {
                long double x87_r7_8 = ebx_1[3] - *ebx_1;
                void* eax_5 = &var_2e8;

                do
                {
                    void* edx_10 = ecx_13 + a4;
                    ecx_13 += 1;
                    int32_t edx_11 = ebx_1[1];
                    eax_5 += 0x18;
                    *(eax_5 - 0x20) = edx_10 * x87_r7_8 / (a4 + a5) + *ebx_1;
                    *(eax_5 - 0x18) = edx_11;
                    *(eax_5 - 0x14) = *(ebx_1 + 0xc);
                    *(eax_5 - 0x10) = a1[0x12a4];
                } while (ecx_13 < a5);
            }
        }

        if (edx & 0x10)
        {
            var_610 = &ebx_1[6];
            var_60c = &ebx_1[9];
            var_600 = ebx_1 + 0x6c;
            var_604 = ebx_1 + 0x7c;
            int32_t ecx_16 = 1;
            var_608 = ebx_1;
            var_614 = &ebx_1[0xc];

            if (a5 > 1)
            {
                long double x87_r7_11 = var_610[1] - ebx_1[1];
                void* eax_10 = &var_2e8;

                do
                {
                    *(eax_10 - 8) = *ebx_1;
                    *(eax_10 - 4) = *(ebx_1 + 4);
                    long double x87_r5_16 = ecx_16 + a4;
                    ecx_16 += 1;
                    eax_10 += 0x18;
                    *(eax_10 - 0x18) = x87_r5_16 * x87_r7_11 / (a4 + a5) + ebx_1[1];
                    *(eax_10 - 0x10) = a1[0x12a4];
                } while (ecx_16 < a5);
            }
        }

        result = a5;
        goto label_52f8ce;
    }
    return result;
}
