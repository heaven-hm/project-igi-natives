#include "004B0270-Sys_AllocateMemory.h"
/* 0x004b0270 Sys_AllocateMemory full linked: callers=3 callees=15 */
int32_t sub_4b0270(int32_t* a1, int32_t* a2, int32_t a3, int32_t* a4, int32_t a5, int32_t a6)

{
    int32_t edi = a3;
    int32_t i = 0xffffffff;
    g_9422e0 = 0;
    g_9422e4 = 0;
    void* edx = nullptr;
    int32_t esi = 0;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    void* var_24;
    __builtin_memset(&var_24, 0, 0x18);
    void* var_8 = nullptr;

    if (a2)
        *a2 = 0;

    if (a1)
        *a1 = 0xffffffff;

    int32_t* edi_1 = a4;
    int32_t var_1c;

    while (true)
    {
        int32_t var_20;

        if (var_20 < 0x200)
        {
            if (esi != 0xffffffff)
                goto label_4b034a;

            int32_t var_18;
            int32_t var_4;

            if (sub_4b0720(0x93dae0, &var_20, &var_4, &var_24, &var_1c, &var_18))
            {
                int32_t var_38_2 = var_20;
                void* var_3c_2 = var_24;
                int32_t eax_4 = sub_4b07a0(edi_1, var_4, 0);
                int32_t var_10_1 = var_1c;
                edx = var_24;
                esi = eax_4;
                int32_t var_14_1 = 0;
            label_4b034a:
                int32_t* ecx_3 = &edi_1[esi * 5];
                a4 = ecx_3;
                int32_t eax_6 = ecx_3[2];

                if (eax_6 == 0x100)
                    break;

                if (eax_6 != 0x800)
                {
                    int32_t var_40_2;

                    if (eax_6 != 0x2000)
                    {
                        if (eax_6 == 0x4000)
                        {
                            if (edx < ~i - 1)
                            {
                            label_4b0506:
                                int32_t var_38_12 = var_20;
                                goto label_4b0507;
                            }

                            int32_t var_38_6 = var_20;
                            void* var_3c_5 = edx;
                            var_40_2 = 1;
                            goto label_4b050b;
                        }

                        if (*(&eax_6 + 1) & 0x80)
                        {
                            var_14_1 = 0;
                            *((ecx_3[1] << 2) + &g_93d2e0) = 0;

                            if (ecx_3[2] & 0x20000)
                            {
                                sub_4b0690(0x93dae0, &var_20, esi, edx, var_1c, var_18);
                                edx = var_24;
                            }

                            int32_t var_38_8 = var_20;
                            void* var_3c_7 = edx;
                            int32_t eax_17 = sub_4b07a0(edi_1, esi, 1);
                            edx = var_24;
                            esi = eax_17;
                            var_18 += 1;
                            continue;
                        }
                        else if (eax_6 & 0x10000)
                        {
                            int32_t eax_20 = *ecx_3;
                            int32_t ebp_1 = ecx_3[1];

                            if (eax_20 >= 0)
                                *((eax_20 << 2) + &g_93d2e0) += var_14_1;

                            int32_t var_40_4;

                            if (var_14_1)
                            {
                            label_4b0489:
                                int32_t var_38_10 = var_20;
                                void* var_3c_9 = edx;
                                var_40_4 = 1;
                            }
                            else
                            {
                                int32_t eax_21 = *((ebp_1 << 2) + &g_93d2e0);
                                var_14_1 = eax_21;

                                if (eax_21)
                                    goto label_4b0489;

                                int32_t var_38_9 = var_20;
                                void* var_3c_8 = edx;
                                var_40_4 = 0;
                            }

                            int32_t eax_23 = sub_4b07a0(edi_1, esi, var_40_4);
                            edx = var_24;
                            esi = eax_23;
                            var_18 -= 1;
                            continue;
                        }
                        else if (eax_6 != 0x400)
                        {
                            if (edx < ~i - 1)
                            {
                                int32_t ebp_5 = *(edx + a3);
                                int32_t ebx_1;

                                if (*(&eax_6 + 1) & 0x10)
                                {
                                    int32_t eax_33 = sub_4b0670(ebp_5, a5, eax_6 & 0xff);
                                    edx = var_24;
                                    ecx_3 = a4;
                                    ebx_1 = eax_33;
                                }
                                else if (!a6)
                                {
                                    ebx_1 = 0;
                                    ebx_1 = (eax_6 & 0xff) == ebp_5;
                                }
                                else
                                {
                                    int32_t var_38_14 = eax_6 & 0xff;
                                    uint32_t eax_35;
                                    int32_t ecx_13;
                                    eax_35 = sub_4ad73d(ecx_3);
                                    int32_t var_3c_13 = ebp_5;
                                    uint32_t eax_36 = sub_4ad73d(ecx_13);
                                    edx = var_24;
                                    int32_t ecx_14 = 0;
                                    ecx_14 = eax_35 == eax_36;
                                    ebx_1 = ecx_14;
                                    ecx_3 = a4;
                                }

                                if (*(&ecx_3[2] + 1) & 2 && ebx_1)
                                {
                                    sub_4b0690(0x93dae0, &var_20, esi, edx, var_1c, var_18);
                                    edx = var_24;
                                    ecx_3 = a4;
                                }

                                if (ecx_3[2] & 0x40000 && ebx_1)
                                {
                                    sub_4b0690(0x93dae0, &var_20, esi, edx, var_1c, var_18);
                                    edx = var_24;
                                }

                                int32_t var_38_17 = var_20;
                                void* var_3c_16 = edx;
                                esi = sub_4b07a0(edi_1, esi, ebx_1);

                                if (!ebx_1)
                                {
                                    edx = var_24;
                                    continue;
                                }
                                else
                                {
                                    edx = var_24 + 1;
                                    var_14_1 += 1;
                                    var_24 = edx;
                                    continue;
                                }
                            }

                            goto label_4b0506;
                        }
                    }
                    else
                    {
                        if (edx)
                        {
                            int32_t var_38_4 = var_20;
                        label_4b0507:
                            void* var_3c_11 = edx;
                            var_40_2 = 0;
                            goto label_4b050b;
                        }

                        int32_t var_38_5 = var_20;
                        int32_t var_3c_4 = 0;
                        var_40_2 = 1;
                    label_4b050b:
                        int32_t eax_31 = sub_4b07a0(edi_1, esi, var_40_2);
                        edx = var_24;
                        esi = eax_31;
                        continue;
                    }
                    int32_t eax_26 = var_1c;
                    *((eax_26 << 3) + &g_93aa88) = edx;
                    *((eax_26 << 3) + &g_93aa8c) = 0;
                    int32_t var_38_11 = var_20;
                    void* var_3c_10 = edx;
                    esi = sub_4b07a0(edi_1, esi, 1);
                    bool cond:4_1 = var_1c + 1 >= 0xa;
                    var_10_1 += 1;
                    var_1c += 1;

                    if (!cond:4_1)
                    {
                        edx = var_24;
                        continue;
                    }
                }
                else
                {
                    int32_t var_38_3 = var_20;
                    void* var_3c_3 = edx;
                    esi = sub_4b07a0(edi_1, esi, 1);
                    bool cond:2_1 = var_10_1 - 1 < 0;
                    var_10_1 -= 1;

                    if (!cond:2_1)
                    {
                        int32_t eax_10 = var_1c;
                        edx = var_24;
                        *((eax_10 << 3) + &g_93aa84) = edx - *((eax_10 << 3) + &g_93aa80) + 1;
                        continue;
                    }
                }
            }
        }

        return 0;
    }

    if (edx >= 0)
        var_8 = edx;

    if (a2)
        *a2 = var_1c;

    int32_t edx_5 = var_1c;
    g_9422e0 = &g_93aa88;
    g_9422e4 = edx_5;

    if (a1)
        *a1 = var_8;

    return 1;
}
