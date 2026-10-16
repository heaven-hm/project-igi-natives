#include "00437150-Vehicle_InitHeli_6.h"
/* 0x00437150 Vehicle_InitHeli_6 full linked: callers=1 callees=15 */
int32_t Vehicle_InitHeli_6(void* a1)

{
    int32_t result_1;
    int32_t var_448[0x8];
    int32_t var_428[0x8];
    sub_4f8140(&var_428, &var_448, &result_1);
    int32_t* i = QTask_DeleteTask_2(a1, sub_4e8c50());
    int32_t ebx = 0;

    for (; i; i = QTask_TriggerEvent_2(i, sub_4e8c50()))
    {
        if (i != *(a1 + 0x38))
        {
            long double x87_r7_2 = i[0x32] - 0.0199999996f;
            long double temp0_1 = 0f;
            x87_r7_2 - temp0_1;

            if (*(&((x87_r7_2 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                x87_r7_2 = 0f;

            i[0x32] = x87_r7_2;
        }
    }

    int32_t result = result_1;
    int32_t edx = 0;
    int32_t var_450 = 0;

    if (result > 0)
    {
        while (true)
        {
            int32_t esi_1 = var_448[edx];

            if (esi_1)
            {
                int32_t var_45c_1 = 0;
                void var_388;
                __builtin_memset(&var_388, 0, 0x80);
                void var_408;
                __builtin_memset(&var_408, 0, 0x80);
                void var_300;
                int32_t* eax_4 = &var_300;
                int32_t i_3 = 0x20;
                int32_t i_1;

                do
                {
                    eax_4[-2] = 0;
                    eax_4[-1] = 0;
                    *eax_4 = 0;
                    eax_4[1] = 0;
                    eax_4[2] = 0;
                    eax_4[3] = 0;
                    eax_4 = &eax_4[6];
                    i_1 = i_3;
                    i_3 -= 1;
                } while (i_1 != 1);

                if (esi_1 > 0)
                {
                    void var_308;
                    void* var_458_1 = &var_308;
                    int32_t* edx_2 = var_428[edx] + 0x4c;
                    int32_t var_454_1 = esi_1;
                    bool cond:2_1;

                    do
                    {
                        if (edx_2[3])
                        {
                            int32_t i_2 = *edx_2;

                            if (i_2)
                            {
                                int32_t eax_6 = 0;

                                if (ebx > 0)
                                {
                                    int32_t* ecx_1 = &var_388;

                                    while (*ecx_1 != i_2)
                                    {
                                        eax_6 += 1;
                                        ecx_1 = &ecx_1[1];

                                        if (eax_6 >= var_45c_1)
                                            break;
                                    }
                                }

                                if (eax_6 != var_45c_1)
                                {
                                    int32_t eax_8 = eax_6 * 0x18;
                                    int32_t __saved_edi;
                                    *(&__saved_edi + eax_8 + 0x160) =
                                        *(edx_2 - 0x44) + *(&var_308 + eax_8);
                                    *(&__saved_edi + eax_8 + 0x168) =
                                        *(edx_2 - 0x3c) + *(&__saved_edi + eax_8 + 0x168);
                                    *(&__saved_edi + eax_8 + 0x170) =
                                        *(edx_2 - 0x34) + *(&__saved_edi + eax_8 + 0x170);
                                    *(&__saved_edi + eax_8 + 0x160) =
                                        *(&__saved_edi + eax_8 + 0x160) * 0.5;
                                    *(&__saved_edi + eax_8 + 0x168) =
                                        *(&__saved_edi + eax_8 + 0x168) * 0.5;
                                    *(&__saved_edi + eax_8 + 0x170) =
                                        *(&__saved_edi + eax_8 + 0x170) * 0.5;
                                    *(&var_408 + ebx) += 1;
                                }
                                else
                                {
                                    *(&var_388 + ebx) = i_2;
                                    memcpy(var_458_1, &edx_2[-0x11], 0x18);
                                    *(&var_408 + ebx) += 1;
                                    var_45c_1 += 1;
                                    var_458_1 += 0x18;
                                    ebx += 4;
                                }
                            }
                        }

                        edx_2 = &edx_2[0x1c];
                        cond:2_1 = var_454_1 != 1;
                        var_454_1 -= 1;
                    } while (cond:2_1);

                    if (var_45c_1 > 0)
                    {
                        void* var_458_2 = &var_308;
                        int32_t* var_45c_2 = &var_388;
                        int32_t var_454_2 = var_45c_1;

                        while (true)
                        {
                            void* ebx_1 = *var_45c_2;
                            struct status_msg* edi_3 = QTask_DeleteTask_2(a1, sub_4e8c50());
                            long double x87_r7_17;

                            if (!edi_3)
                            {
                            label_4373cd:
                                edi_3 = sub_4e6b00(a1, *var_45c_2 + 0x134);

                                if (edi_3)
                                {
                                    sub_4e6c30(edi_3, var_458_2);
                                    x87_r7_17 = edi_3->sprite[0x14] + 0.120000005f;
                                    edi_3->sprite[0x14] = x87_r7_17;
                                    long double x87_r6_1 = 0f;
                                    x87_r6_1 - x87_r7_17;

                                    if (*(&((x87_r6_1 < x87_r7_17 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_1, x87_r7_17) ? 1 : 0) << 0xa
                                        | (x87_r6_1 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                                    {
                                        long double x87_r6_4 = 1f;
                                        x87_r6_4 - x87_r7_17;

                                        if (!(*(&((x87_r6_4 < x87_r7_17 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r6_4, x87_r7_17) ? 1 : 0) << 0xa
                                                | (x87_r6_4 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1))
                                            edi_3->sprite[0x14] = x87_r7_17;
                                        else
                                            edi_3->sprite[0x14] = 1f;
                                    }
                                    else
                                        edi_3->sprite[0x14] = 0f;
                                }
                            }
                            else
                            {
                                while (true)
                                {
                                    char* esi_7 = &edi_3->sprite[0x4b];
                                    char* eax_16 = ebx_1 + 0x134;
                                    int32_t eax_18;

                                    while (true)
                                    {
                                        char edx_3 = *eax_16;
                                        char temp4_1 = ADJ(esi_7)->sprite[0x4b];
                                        bool c_1 = edx_3 < temp4_1;

                                        if (edx_3 == temp4_1)
                                        {
                                            if (!edx_3)
                                            {
                                                eax_18 = 0;
                                                break;
                                            }

                                            edx_3 = eax_16[1];
                                            char temp7_1 = ADJ(esi_7)->sprite[0x4c];
                                            c_1 = edx_3 < temp7_1;

                                            if (edx_3 == temp7_1)
                                            {
                                                eax_16 = &eax_16[2];
                                                esi_7 = &esi_7[2];

                                                if (edx_3)
                                                    continue;

                                                eax_18 = 0;
                                                break;
                                            }
                                        }

                                        eax_18 = eax_16 - eax_16 + 1;
                                        break;
                                    }

                                    if (!eax_18)
                                        break;

                                    edi_3 = QTask_TriggerEvent_2(edi_3, sub_4e8c50());

                                    if (!edi_3)
                                        goto label_4373cd;
                                }

                                sub_4e6c30(edi_3, var_458_2);
                                x87_r7_17 = edi_3->sprite[0x14] + 0.120000005f;
                                edi_3->sprite[0x14] = x87_r7_17;
                                long double x87_r6_2 = 0f;
                                x87_r6_2 - x87_r7_17;

                                if (*(&((x87_r6_2 < x87_r7_17 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_2, x87_r7_17) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                                {
                                    long double x87_r6_3 = 1f;
                                    x87_r6_3 - x87_r7_17;

                                    if (!(*(&((x87_r6_3 < x87_r7_17 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_3, x87_r7_17) ? 1 : 0) << 0xa
                                            | (x87_r6_3 == x87_r7_17 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                        edi_3->sprite[0x14] = x87_r7_17;
                                    else
                                        edi_3->sprite[0x14] = 1f;
                                }
                                else
                                    edi_3->sprite[0x14] = 0f;
                            }
                            bool cond:3_1 = var_454_2 != 1;
                            var_45c_2 = &var_45c_2[1];
                            var_458_2 += 0x18;
                            var_454_2 -= 1;

                            if (!cond:3_1)
                                break;
                        }
                    }

                    edx = var_450;
                    ebx = 0;
                }
            }

            result = result_1;
            edx += 1;
            var_450 = edx;

            if (edx >= result)
                break;
        }
    }

    return result;
}
