#include "0052DD90-Light_ComputeDirectionalLight_12.h"
/* 0x0052dd90 Light_ComputeDirectionalLight_12 full linked: callers=0 callees=10 */
int32_t sub_52dd90(void* a1)

{
    float ebx = *(a1 + 0xc);
    __builtin_memset(&g_a84584, 0, 0x50);
    int32_t var_c = 0;
    int32_t var_8 = 0;
    int32_t var_4 = 0x3f800000;
    g_a8457c = 0;
    g_a84580 = 0;
    sub_52e180(ebx, ebx + 0x4a6c, &var_c);
    long double x87_r7 = *(ebx + 0x4a94);
    memcpy(ebx + 0x4870, &g_bcab08, 0x18);
    long double x87_r7_1 = *(ebx + 0x4880) - x87_r7;
    long double temp3 = 0.0;
    x87_r7_1 - temp3;
    *(ebx + 0x4a48) = g_bcaaf8;
    *(ebx + 0x4a4c) = g_bcaafc;
    *(ebx + 0x4a50) = g_bcab00;

    if (*(&((x87_r7_1 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp3) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        x87_r7_1 = 0.0;

    int32_t ecx_2 = *(ebx + 0x4aac);
    int32_t eax_3 = *(ebx + 0x4aa8);
    *(ebx + 0x4a78) = x87_r7_1;
    int32_t var_10 = 0;
    int32_t var_10_1 = 0;
    *(ebx + 0x4a8c) = (COMBINE(0, eax_3) % ecx_2) * *(ebx + 0x4a84) / ecx_2;
    sub_52d9f0(ebx);
    sub_4da180(ebx + 0x4acc, ebx + 0x4ad0);
    void* esi = *(ebx + 0x4ab4);
    int32_t var_10_2 = 0;
    long double x87_r7_6 = *(ebx + 0x4a9c);
    void* var_14_3 = esi;
    int32_t var_10_3 = 0;
    long double x87_r6 = var_14_3;
    long double x87_r5_1 = *(ebx + 0x4870) - *(ebx + 0x4840);
    *(ebx + 0x4abc) = 0;
    var_14_3 = x87_r5_1 / x87_r7_6 * x87_r6;
    void* edi_1 = var_14_3;
    void* var_1c = edi_1;
    var_14_3 = (*(ebx + 0x4878) - *(ebx + 0x4848)) / x87_r7_6 * x87_r6;
    void* ecx_4 = var_14_3;
    a1 = ecx_4;

    if (esi - 1 < edi_1)
    {
        var_1c = esi - 1;
        edi_1 = esi - 1;
    }

    if (esi - 1 < ecx_4)
    {
        a1 = esi - 1;
        ecx_4 = esi - 1;
    }

    int32_t var_10_4 = 0;
    int32_t edx_6 = (ecx_4 + (edi_1 << 3)) * 0x30;
    int32_t var_14_4 = *(edx_6 + ebx + 0x60);
    long double x87_r7_8 = var_14_4;
    var_14_4 = (*(ebx + 0x4870) - *(edx_6 + ebx + 0x40)) / x87_r7_8 * -2.0;
    int32_t edx_10 = 0xffffffff - (var_14_4 << 1);
    var_14_4 = (*(ebx + 0x4878) - *(edx_6 + ebx + 0x48)) / x87_r7_8 * -2.0;
    int32_t eax_11 = 0;
    eax_11 = edx_10 >= 0;
    int32_t edx_11 = 0;
    void* eax_14 = ((eax_11 - 1) & edx_10) + edi_1;
    edx_11 = 0xffffffff - (var_14_4 << 1) >= 0;
    void* edx_14 = ((edx_11 - 1) & (0xffffffff - (var_14_4 << 1))) + ecx_4;
    int32_t edx_15 = 0;
    edx_15 = eax_14 <= 0;
    int32_t eax_15 = 0;
    eax_15 = edx_14 <= 0;
    void* eax_18 = ((eax_15 - 1) & edx_14) + (((edx_15 - 1) & eax_14) << 3);
    *(ebx + 0x10) = *(eax_18 * 0x30 + ebx + 0x40);
    *(ebx + 0x14) = *(eax_18 * 0x30 + ebx + 0x44);
    *(ebx + 0x18) = *(eax_18 * 0x30 + ebx + 0x48);
    int32_t edi_6 = 0;
    int32_t var_20 = 0;
    *(ebx + 0x1c) = *(eax_18 * 0x30 + ebx + 0x4c);

    if (esi > 0)
    {
        int32_t* var_14_5 = ebx + 0x54;

        do
        {
            int32_t var_24_1 = 0;

            if (esi > 0)
            {
                int32_t* esi_1 = var_14_5;
                bool cond:9_1;

                do
                {
                    esi_1[5] = 1;

                    if (edi_6 != var_1c || var_24_1 != ecx_4)
                    {
                        void* eax_26 = var_1c + edx_10;
                        double* var_38_3;

                        if (edi_6 == eax_26)
                        {
                            if (var_24_1 == ecx_4)
                            {
                                int32_t eax_27 = *esi_1;

                                if (edx_10 <= 0)
                                    eax_27 |= 0x10;
                                else
                                    eax_27 |= 8;

                                *esi_1 = eax_27;

                                if (0xffffffff - (var_14_4 << 1) <= 0)
                                    eax_27 |= 4;
                                else
                                    eax_27 |= 2;

                                *esi_1 = eax_27;
                                esi_1[6] = ebx + 0x10;
                                var_38_3 = &esi_1[-5];
                                goto label_52e077;
                            }

                            edi_6 = var_20;
                        }

                        if (edi_6 != var_1c)
                            goto label_52e0db;

                        if (var_24_1 != ecx_4 + 0xffffffff - (var_14_4 << 1))
                        {
                            edi_6 = var_20;
                        label_52e0db:

                            if (edi_6 != eax_26 || var_24_1 != ecx_4 + 0xffffffff - (var_14_4 << 1))
                                esi_1[5] = 0;
                            else
                            {
                                int32_t eax_37 = *esi_1;

                                if (edx_10 <= 0)
                                    eax_37 |= 0x10;
                                else
                                    eax_37 |= 8;

                                *esi_1 = eax_37;

                                if (0xffffffff - (var_14_4 << 1) <= 0)
                                    eax_37 |= 2;
                                else
                                    eax_37 |= 4;

                                *esi_1 = eax_37;
                                esi_1[6] = ebx + 0x10;
                                sub_52ffa0(ebx, &esi_1[-5]);
                                ecx_4 = a1;
                            }
                        }
                        else
                        {
                            int32_t eax_30 = *esi_1;

                            if (edx_10 <= 0)
                                eax_30 |= 8;
                            else
                                eax_30 |= 0x10;

                            *esi_1 = eax_30;

                            if (0xffffffff - (var_14_4 << 1) <= 0)
                            {
                                eax_30 |= 2;
                                *esi_1 = eax_30;
                                esi_1[6] = ebx + 0x10;
                                var_38_3 = &esi_1[-5];
                            }
                            else
                            {
                                eax_30 |= 4;
                                *esi_1 = eax_30;
                                esi_1[6] = ebx + 0x10;
                                var_38_3 = &esi_1[-5];
                            }

                        label_52e077:
                            sub_52ffa0(ebx, var_38_3);
                            ecx_4 = a1;
                            edi_6 = var_20;
                        }
                    }
                    else
                    {
                        int32_t eax_24 = *esi_1;

                        if (edx_10 <= 0)
                            eax_24 |= 8;
                        else
                            eax_24 |= 0x10;

                        *esi_1 = eax_24;

                        if (0xffffffff - (var_14_4 << 1) <= 0)
                            eax_24 |= 4;
                        else
                            eax_24 |= 2;

                        *esi_1 = eax_24;
                        esi_1[6] = ebx + 0x10;
                        sub_52ffa0(ebx, &esi_1[-5]);
                        ecx_4 = a1;
                    }

                    esi_1 = &esi_1[0xc];
                    cond:9_1 = var_24_1 + 1 < *(ebx + 0x4ab4);
                    var_24_1 += 1;
                } while (cond:9_1);
            }

            esi = *(ebx + 0x4ab4);
            edi_6 += 1;
            var_20 = edi_6;
            var_14_5 = &var_14_5[0x60];
        } while (edi_6 < esi);
    }

    return sub_52e2d0(0xffffffff - (var_14_4 << 1), ebx);
}
