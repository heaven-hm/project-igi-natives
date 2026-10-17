// IGI native provenance: Qvm_Invoke5 - 0x004BDC40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BDC40-Qvm_Invoke5.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Qvm_Invoke5.h"

❓  int32_t __stdcall Qvm_Invoke5(int32_t* arg1)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x1024);
    int32_t base_val;
    int32_t var_4 = base_val;
    Sys_ExecuteBytecode_29(arg1);
    int32_t arg_4;
    float arg_8;
    float arg_c;
    int32_t result_val = Sys_CheckHeap_29(arg1, &return_address, &arg_4, &arg_c, &arg_8);
    int32_t eax_1;

    if (!result_val)
    {
        void* arg_18 = nullptr;
        char* arg_10;
        int32_t arg_1c;

        if (!Sys_FreeMemory_28(arg1, &arg_10, &arg_1c, 3))
        {
            if (!arg1[8])
            {
                int32_t eax_126 = arg1[5];
                arg1[8] = 6;
                arg1[4] = eax_126;
                Sys_DispatchOpcode_29(arg1);
            }

            goto label_4be2c1;
        }

        char* arg_14;
        int32_t arg_20;

        if (!Sys_FreeMemory_28(arg1, &arg_14, &arg_20, 3))
        {
            if (!arg1[8])
            {
                int32_t edx_23 = arg1[5];
                arg1[8] = 6;
                arg1[4] = edx_23;
                Sys_DispatchOpcode_29(arg1);
            }

            goto label_4be2c1;
        }

        eax_1 = arg1[5];
        int32_t edx_14 = 0;
        edx_14 = (*arg1)[eax_1];

        if (edx_14 - 0x19 > 0x10)
        {
            arg1[4] = eax_1;
            int32_t eax_123 = arg1[5] + 1;
            arg1[8] = 3;
            arg1[5] = eax_123;
            return eax_123;
        }

        int32_t edx_15 = 0;
        edx_15 = *(edx_14 + (&jump_table_4be5e0[1] + 3));

        switch (edx_15)
        {
            case 0:
            {
                int32_t eax_86 = arg_1c + arg_20;
                void* edx_16;
                void arg_24;

                if (eax_86 <= 0x1000)
                    edx_16 = &arg_24;
                else
                {
                    void* eax_87 = Mem_Alloc(eax_86, 4);
                    arg_18 = eax_87;
                    edx_16 = eax_87;
                }
                char* edi_4 = arg_14;
                int32_t i = 0xffffffff;

                while (i)
                {
                    bool cond:3_1 = 0 != *edi_4;
                    edi_4 = &edi_4[1];
                    i -= 1;

                    if (!cond:3_1)
                        break;
                }

                int32_t ecx_20 = ~i;
                int32_t esi_9;
                int32_t edi_7;
                edi_7 = __builtin_memcpy(edx_16, edi_4 - ecx_20, ecx_20 & 0xfffffffc);
                __builtin_memcpy(edi_7, esi_9, ecx_20 & 3);
                char* edi_8 = arg_10;
                int32_t i_1 = 0xffffffff;

                while (i_1)
                {
                    bool cond:4_1 = 0 != *edi_8;
                    edi_8 = &edi_8[1];
                    i_1 -= 1;

                    if (!cond:4_1)
                        break;
                }

                int32_t ecx_24 = ~i_1;
                void* edi_10 = edx_16;
                int32_t i_2 = 0xffffffff;

                while (i_2)
                {
                    bool cond:5_1 = 0 != *edi_10;
                    edi_10 += 1;
                    i_2 -= 1;

                    if (!cond:5_1)
                        break;
                }

                int32_t esi_11;
                int32_t edi_12;
                edi_12 = __builtin_memcpy(edi_10 - 1, edi_8 - ecx_24, ecx_24 & 0xfffffffc);
                __builtin_memcpy(edi_12, esi_11, ecx_24 & 3);
                Sys_ReadFileBlock_28(arg1, edx_16, 3);

                if (arg_18)
                    Sys_ExecuteBytecode_2(arg_18);

                goto label_4be2c1;
            }
            case 1:
            {
                goto label_4be4e0;
            }
            case 2:
            {
                char* esi_12 = arg_10;
                char* eax_92 = arg_14;
                int32_t eax_94;

                while (true)
                {
                    char edx_17 = *eax_92;
                    char ebx_30 = *esi_12;
                    bool c_1 = edx_17 < ebx_30;

                    if (edx_17 == ebx_30)
                    {
                        if (!edx_17)
                        {
                            eax_94 = 0;
                            break;
                        }

                        edx_17 = eax_92[1];
                        ebx_30 = esi_12[1];
                        c_1 = edx_17 < ebx_30;

                        if (edx_17 == ebx_30)
                        {
                            eax_92 = &eax_92[2];
                            esi_12 = &esi_12[2];

                            if (edx_17)
                                continue;

                            eax_94 = 0;
                            break;
                        }
                    }

                    eax_94 = eax_92 - eax_92 + 1;
                    break;
                }

                int32_t ecx_30 = 0;
                ecx_30 = !eax_94;
                Sys_PushStack_29(arg1, ecx_30);
                int32_t eax_96 = arg1[5] + 1;
                arg1[5] = eax_96;
                return eax_96;
                break;
            }
            case 3:
            {
                char* esi_13 = arg_10;
                char* eax_97 = arg_14;
                int32_t eax_99;

                while (true)
                {
                    char edx_18 = *eax_97;
                    char ebx_32 = *esi_13;
                    bool c_3 = edx_18 < ebx_32;

                    if (edx_18 == ebx_32)
                    {
                        if (!edx_18)
                        {
                            eax_99 = 0;
                            break;
                        }

                        edx_18 = eax_97[1];
                        ebx_32 = esi_13[1];
                        c_3 = edx_18 < ebx_32;

                        if (edx_18 == ebx_32)
                        {
                            eax_97 = &eax_97[2];
                            esi_13 = &esi_13[2];

                            if (edx_18)
                                continue;

                            eax_99 = 0;
                            break;
                        }
                    }

                    eax_99 = eax_97 - eax_97 + 1;
                    break;
                }

                int32_t ecx_32 = 0;
                ecx_32 = eax_99;
                Sys_PushStack_29(arg1, ecx_32);
                int32_t eax_101 = arg1[5] + 1;
                arg1[5] = eax_101;
                return eax_101;
                break;
            }
            case 4:
            {
                char* esi_14 = arg_10;
                char* eax_102 = arg_14;
                int32_t eax_104;

                while (true)
                {
                    char edx_19 = *eax_102;
                    char ebx_34 = *esi_14;
                    bool c_5 = edx_19 < ebx_34;

                    if (edx_19 == ebx_34)
                    {
                        if (!edx_19)
                        {
                            eax_104 = 0;
                            break;
                        }

                        edx_19 = eax_102[1];
                        ebx_34 = esi_14[1];
                        c_5 = edx_19 < ebx_34;

                        if (edx_19 == ebx_34)
                        {
                            eax_102 = &eax_102[2];
                            esi_14 = &esi_14[2];

                            if (edx_19)
                                continue;

                            eax_104 = 0;
                            break;
                        }
                    }

                    eax_104 = eax_102 - eax_102 + 1;
                    break;
                }

                int32_t ecx_34 = 0;
                ecx_34 = eax_104 < 0;
                Sys_PushStack_29(arg1, ecx_34);
                int32_t eax_106 = arg1[5] + 1;
                arg1[5] = eax_106;
                return eax_106;
                break;
            }
            case 5:
            {
                char* esi_15 = arg_10;
                char* eax_107 = arg_14;
                int32_t eax_109;

                while (true)
                {
                    char edx_20 = *eax_107;
                    char ebx_36 = *esi_15;
                    bool c_7 = edx_20 < ebx_36;

                    if (edx_20 == ebx_36)
                    {
                        if (!edx_20)
                        {
                            eax_109 = 0;
                            break;
                        }

                        edx_20 = eax_107[1];
                        ebx_36 = esi_15[1];
                        c_7 = edx_20 < ebx_36;

                        if (edx_20 == ebx_36)
                        {
                            eax_107 = &eax_107[2];
                            esi_15 = &esi_15[2];

                            if (edx_20)
                                continue;

                            eax_109 = 0;
                            break;
                        }
                    }

                    eax_109 = eax_107 - eax_107 + 1;
                    break;
                }

                int32_t ecx_36 = 0;
                ecx_36 = eax_109 <= 0;
                Sys_PushStack_29(arg1, ecx_36);
                int32_t eax_111 = arg1[5] + 1;
                arg1[5] = eax_111;
                return eax_111;
                break;
            }
            case 6:
            {
                char* esi_16 = arg_10;
                char* eax_112 = arg_14;
                int32_t eax_114;

                while (true)
                {
                    char edx_21 = *eax_112;
                    char ebx_38 = *esi_16;
                    bool c_9 = edx_21 < ebx_38;

                    if (edx_21 == ebx_38)
                    {
                        if (!edx_21)
                        {
                            eax_114 = 0;
                            break;
                        }

                        edx_21 = eax_112[1];
                        ebx_38 = esi_16[1];
                        c_9 = edx_21 < ebx_38;

                        if (edx_21 == ebx_38)
                        {
                            eax_112 = &eax_112[2];
                            esi_16 = &esi_16[2];

                            if (edx_21)
                                continue;

                            eax_114 = 0;
                            break;
                        }
                    }

                    eax_114 = eax_112 - eax_112 + 1;
                    break;
                }

                int32_t ecx_38 = 0;
                ecx_38 = eax_114 > 0;
                Sys_PushStack_29(arg1, ecx_38);
                int32_t eax_116 = arg1[5] + 1;
                arg1[5] = eax_116;
                return eax_116;
                break;
            }
            case 7:
            {
                char* esi_17 = arg_10;
                char* eax_117 = arg_14;
                int32_t eax_119;

                while (true)
                {
                    char edx_22 = *eax_117;
                    char ebx_40 = *esi_17;
                    bool c_11 = edx_22 < ebx_40;

                    if (edx_22 == ebx_40)
                    {
                        if (!edx_22)
                        {
                            eax_119 = 0;
                            break;
                        }

                        edx_22 = eax_117[1];
                        ebx_40 = esi_17[1];
                        c_11 = edx_22 < ebx_40;

                        if (edx_22 == ebx_40)
                        {
                            eax_117 = &eax_117[2];
                            esi_17 = &esi_17[2];

                            if (edx_22)
                                continue;

                            eax_119 = 0;
                            break;
                        }
                    }

                    eax_119 = eax_117 - eax_117 + 1;
                    break;
                }

                int32_t ecx_40 = 0;
                ecx_40 = eax_119 >= 0;
                Sys_PushStack_29(arg1, ecx_40);
                int32_t eax_121 = arg1[5] + 1;
                arg1[5] = eax_121;
                return eax_121;
                break;
            }
        }
    }
    else
    {
        char* ecx_1 = *arg1;
        eax_1 = arg1[5];

        if (result_val != 1)
        {
            int32_t edx_13 = 0;
            edx_13 = ecx_1[eax_1];

            if (edx_13 - 0x19 > 0x10)
            {
                arg1[8] = 3;
                arg1[4] = eax_1;
                Sys_DispatchOpcode_29(arg1);
            label_4be2c1:
                int32_t eax_91 = arg1[5] + 1;
                arg1[5] = eax_91;
                return eax_91;
            }

            bool cond:1_1;
            bool cond:2_1;

            switch (edx_13)
            {
                case 0x19:
                {
                    int32_t var_14_21 = edx_13 - 0x19;
                    Sys_PopStack_29(arg1, arg_c + arg_8);
                    int32_t eax_60 = arg1[5] + 1;
                    arg1[5] = eax_60;
                    return eax_60;
                    break;
                }
                case 0x1a:
                {
                    int32_t var_14_23 = edx_13 - 0x19;
                    Sys_PopStack_29(arg1, arg_8 - arg_c);
                    int32_t eax_62 = arg1[5] + 1;
                    arg1[5] = eax_62;
                    return eax_62;
                    break;
                }
                case 0x1b:
                {
                    int32_t var_14_17 = edx_13 - 0x19;
                    Sys_PopStack_29(arg1, arg_c * arg_8);
                    int32_t eax_56 = arg1[5] + 1;
                    arg1[5] = eax_56;
                    return eax_56;
                    break;
                }
                case 0x1c:
                {
                    int32_t var_14_19 = edx_13 - 0x19;
                    Sys_PopStack_29(arg1, arg_8 / arg_c);
                    int32_t eax_58 = arg1[5] + 1;
                    arg1[5] = eax_58;
                    return eax_58;
                    break;
                }
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                {
                label_4be4e0:
                    arg1[8] = 6;
                    arg1[4] = eax_1;
                    Sys_DispatchOpcode_29(arg1);
                    goto label_4be2c1;
                }
                case 0x22:
                {
                    long double x87_r7_9 = arg_8;
                    long double temp2_1 = 0f;
                    x87_r7_9 - temp2_1;

                    if (!(*(&((x87_r7_9 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_9, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_9 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                        long double x87_r7_10 = arg_c;
                        long double temp10_1 = 0f;
                        x87_r7_10 - temp10_1;

                        if (!(*(&((x87_r7_10 < temp10_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_10, temp10_1) ? 1 : 0) << 0xa
                            | (x87_r7_10 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        {
                            Sys_PushStack_29(arg1, 1);
                            int32_t eax_65 = arg1[5] + 1;
                            arg1[5] = eax_65;
                            return eax_65;
                        }
                    }

                    goto label_4be080;
                }
                case 0x23:
                {
                    long double x87_r7_11 = arg_8;
                    long double temp3_1 = 0f;
                    x87_r7_11 - temp3_1;

                    if (*(&((x87_r7_11 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_11, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r7_11 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    {
                        long double x87_r7_12 = arg_c;
                        long double temp11_1 = 0f;
                        x87_r7_12 - temp11_1;

                        if (*(&((x87_r7_12 < temp11_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_12, temp11_1) ? 1 : 0) << 0xa
                            | (x87_r7_12 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        {
                            Sys_PushStack_29(arg1, 0);
                            int32_t eax_70 = arg1[5] + 1;
                            arg1[5] = eax_70;
                            return eax_70;
                        }
                    }

                label_4be0e1:
                    Sys_PushStack_29(arg1, 1);
                    int32_t eax_72 = arg1[5] + 1;
                    arg1[5] = eax_72;
                    return eax_72;
                    break;
                }
                case 0x24:
                {
                    long double x87_r7_13 = arg_8;
                    long double temp4_1 = arg_c;
                    x87_r7_13 - temp4_1;

                    if (!(*(&((x87_r7_13 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_13, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_13 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4be080:
                        Sys_PushStack_29(arg1, 0);
                        int32_t eax_67 = arg1[5] + 1;
                        arg1[5] = eax_67;
                        return eax_67;
                    }

                label_4bde1c:
                    Sys_PushStack_29(arg1, 1);
                    int32_t eax_34 = arg1[5] + 1;
                    arg1[5] = eax_34;
                    return eax_34;
                    break;
                }
                case 0x25:
                {
                    long double x87_r7_14 = arg_8;
                    long double temp5_1 = arg_c;
                    x87_r7_14 - temp5_1;
                    cond:1_1 = *(&((x87_r7_14 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_14, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_14 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x40;
                label_4be156:

                    if (cond:1_1)
                        goto label_4be080;

                    goto label_4bde1c;
                }
                case 0x26:
                {
                    long double x87_r7_15 = arg_8;
                    long double temp6_1 = arg_c;
                    x87_r7_15 - temp6_1;
                    cond:2_1 = !(*(&((x87_r7_15 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_15, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_15 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1);
                label_4be13e:

                    if (cond:2_1)
                        goto label_4be080;

                    goto label_4bde1c;
                }
                case 0x27:
                {
                    long double x87_r7_16 = arg_8;
                    long double temp7_1 = arg_c;
                    x87_r7_16 - temp7_1;
                    cond:2_1 = !(*(&((x87_r7_16 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_16, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_16 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41);
                    goto label_4be13e;
                }
                case 0x28:
                {
                    long double x87_r7_17 = arg_8;
                    long double temp8_1 = arg_c;
                    x87_r7_17 - temp8_1;
                    cond:1_1 = *(&((x87_r7_17 < temp8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_17, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41;
                    goto label_4be156;
                }
                case 0x29:
                {
                    long double x87_r7_18 = arg_8;
                    long double temp9 = arg_c;
                    x87_r7_18 - temp9;

                    if (*(&((x87_r7_18 < temp9 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_18, temp9) ? 1 : 0) << 0xa
                        | (x87_r7_18 == temp9 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        Sys_PushStack_29(arg1, 0);
                        int32_t eax_82 = arg1[5] + 1;
                        arg1[5] = eax_82;
                        return eax_82;
                    }

                    Sys_PushStack_29(arg1, 1);
                    int32_t eax_80 = arg1[5] + 1;
                    arg1[5] = eax_80;
                    return eax_80;
                    break;
                }
            }
        }
        else
        {
            int32_t edx_1 = 0;
            edx_1 = ecx_1[eax_1];

            if (edx_1 - 0x19 > 0x10)
            {
                arg1[8] = 3;
                arg1[4] = eax_1;
                Sys_DispatchOpcode_29(arg1);
                goto label_4be2c1;
            }

            switch (edx_1)
            {
                case 0x19:
                {
                    Sys_PushStack_29(arg1, return_address + arg_4);
                    int32_t eax_12 = arg1[5] + 1;
                    arg1[5] = eax_12;
                    return eax_12;
                    break;
                }
                case 0x1a:
                {
                    Sys_PushStack_29(arg1, arg_4 - return_address);
                    int32_t eax_16 = arg1[5] + 1;
                    arg1[5] = eax_16;
                    return eax_16;
                    break;
                }
                case 0x1b:
                {
                    Sys_PushStack_29(arg1, return_address * arg_4);
                    int32_t eax_5 = arg1[5] + 1;
                    arg1[5] = eax_5;
                    return eax_5;
                    break;
                }
                case 0x1c:
                {
                    Sys_PushStack_29(arg1, arg_4 / return_address);
                    int32_t eax_10 = arg1[5] + 1;
                    arg1[5] = eax_10;
                    return eax_10;
                    break;
                }
                case 0x1d:
                {
                    Sys_PushStack_29(arg1, arg_4 << (return_address & 0x1f));
                    int32_t eax_18 = arg1[5] + 1;
                    arg1[5] = eax_18;
                    return eax_18;
                    break;
                }
                case 0x1e:
                {
                    Sys_PushStack_29(arg1, arg_4 >> (return_address & 0x1f));
                    int32_t eax_22 = arg1[5] + 1;
                    arg1[5] = eax_22;
                    return eax_22;
                    break;
                }
                case 0x1f:
                {
                    Sys_PushStack_29(arg1, return_address & arg_4);
                    int32_t eax_24 = arg1[5] + 1;
                    arg1[5] = eax_24;
                    return eax_24;
                    break;
                }
                case 0x20:
                {
                    Sys_PushStack_29(arg1, return_address | arg_4);
                    int32_t eax_26 = arg1[5] + 1;
                    arg1[5] = eax_26;
                    return eax_26;
                    break;
                }
                case 0x21:
                {
                    Sys_PushStack_29(arg1, return_address ^ arg_4);
                    int32_t eax_30 = arg1[5] + 1;
                    arg1[5] = eax_30;
                    return eax_30;
                    break;
                }
                case 0x22:
                {
                    if (!arg_4 || !return_address)
                        goto label_4be080;

                    goto label_4bde1c;
                }
                case 0x23:
                {
                    if (arg_4 || return_address)
                        goto label_4be0e1;

                    Sys_PushStack_29(arg1, 0);
                    int32_t eax_38 = arg1[5] + 1;
                    arg1[5] = eax_38;
                    return eax_38;
                    break;
                }
                case 0x24:
                {
                    int32_t ecx_10 = 0;
                    ecx_10 = arg_4 == return_address;
                    Sys_PushStack_29(arg1, ecx_10);
                    int32_t eax_40 = arg1[5] + 1;
                    arg1[5] = eax_40;
                    return eax_40;
                    break;
                }
                case 0x25:
                {
                    int32_t eax_41 = 0;
                    eax_41 = arg_4 != return_address;
                    Sys_PushStack_29(arg1, eax_41);
                    int32_t eax_43 = arg1[5] + 1;
                    arg1[5] = eax_43;
                    return eax_43;
                    break;
                }
                case 0x26:
                {
                    int32_t edx_10 = 0;
                    edx_10 = arg_4 < return_address;
                    Sys_PushStack_29(arg1, edx_10);
                    int32_t eax_46 = arg1[5] + 1;
                    arg1[5] = eax_46;
                    return eax_46;
                    break;
                }
                case 0x27:
                {
                    int32_t ecx_12 = 0;
                    ecx_12 = arg_4 <= return_address;
                    Sys_PushStack_29(arg1, ecx_12);
                    int32_t eax_48 = arg1[5] + 1;
                    arg1[5] = eax_48;
                    return eax_48;
                    break;
                }
                case 0x28:
                {
                    int32_t eax_49 = 0;
                    eax_49 = arg_4 > return_address;
                    Sys_PushStack_29(arg1, eax_49);
                    int32_t eax_51 = arg1[5] + 1;
                    arg1[5] = eax_51;
                    return eax_51;
                    break;
                }
                case 0x29:
                {
                    int32_t edx_12 = 0;
                    edx_12 = arg_4 >= return_address;
                    Sys_PushStack_29(arg1, edx_12);
                    int32_t eax_54 = arg1[5] + 1;
                    arg1[5] = eax_54;
                    return eax_54;
                    break;
                }
            }
        }
    }
}
