#include "004BC2F0-Sys_UnknownExpressionTyp.h"
/* 0x004bc2f0 Sys_UnknownExpressionTyp full linked: callers=10 callees=61 */
void sub_4bc2f0(int32_t* a1, char* a2)

{
    char* edi = a2;

    if (!edi)
        return;

    while (true)
    {
        int32_t eax_2 = *edi - 1;
        void var_40;

        if (eax_2 > 7)
        {
            Error_Show("Unknown expression type");

            while (true)
                /* nop */
        }
        else
            switch (eax_2)
            {
                case 0:
                {
                    sub_4bbf40(2, a1);
                    sub_4bc880(a1, *(edi + 8));
                    sub_4bbf60(a1);
                    return;
                    break;
                }
                case 1:
                {
                    sub_4bbf40(7, a1);
                    sub_4bc790(a1, *(edi + 8));
                    sub_4bbf60(a1);
                    return;
                    break;
                }
                case 2:
                {
                    sub_4bbf40(5, a1);
                    sub_4bc8d0(a1, *(edi + 8), *(edi + 0xc));
                    sub_4bbf60(a1);
                    return;
                    break;
                }
                case 3:
                case 4:
                {
                    int32_t* esi_4 = a1;
                    sub_4bbf40(0xb, esi_4);
                    sub_4bc2c0(esi_4, *(edi + 0x10));
                    sub_4bbf60(esi_4);
                    int32_t* edi_1 = *(edi + 0xc);

                    if (!edi_1)
                        break;

                    int32_t ebp = *edi_1;
                    sub_4bbf40(0x18, esi_4);
                    sub_4bc2c0(esi_4, &g_547a4c);
                    int32_t ebx = 0;
                    a1 = nullptr;

                    if (ebp > 0)
                    {
                        do
                        {
                            if (a1 >= 5)
                            {
                                a1 = nullptr;
                                sub_4bbf60(esi_4);
                                sub_4bc770(esi_4);
                            }

                            sub_4bc2a0(&var_40, 0x547a48, *(edi_1[2] + (ebx << 2)));
                            sub_4bc2c0(esi_4, &var_40);

                            if (ebx < ebp - 1)
                                sub_4bc2c0(esi_4, &g_547a44);

                            ebx += 1;
                            a1 += 1;
                        } while (ebx < ebp);
                    }

                    sub_4bc2c0(esi_4, &g_547a40);
                    sub_4bbf60(esi_4);
                    sub_4bc2a0(&var_40, 0x547a3c, edi_1);
                    sub_4bbf40(0x14, esi_4);
                    sub_4bc2c0(esi_4, &var_40);
                    sub_4bbf60(esi_4);
                    int32_t ebx_1 = 0;

                    if (ebp > 0)
                    {
                        do
                        {
                            sub_4bc2a0(&var_40, 0x547a48, *(edi_1[2] + (ebx_1 << 2)));
                            sub_4bc2c0(esi_4, &var_40);
                            sub_4bc2c0(esi_4, 0x5479e8);
                            sub_4bbf60(esi_4);
                            sub_4bc2f0(esi_4, *(edi_1[2] + (ebx_1 << 2)));
                            sub_4bbf40(0, esi_4);
                            sub_4bbf60(esi_4);
                            ebx_1 += 1;
                        } while (ebx_1 < ebp);
                    }

                    sub_4bc2a0(&var_40, 0x547a3c, edi_1);
                    sub_4bc2c0(esi_4, &var_40);
                    sub_4bc2c0(esi_4, 0x5479e8);
                    sub_4bbf60(esi_4);
                    return;
                    break;
                }
                case 5:
                {
                    edi = *(edi + 8);

                    if (!edi)
                        return;

                    continue;
                }
                case 6:
                {
                    sub_4bc2f0(a1, *(edi + 8));
                    sub_4bbf40(0x15, a1);
                    sub_4bc2a0(&var_40, 0x547a38, *(edi + 0x1c));
                    sub_4bc2c0(a1, &var_40);
                    sub_4bbf60(a1);
                    sub_4bc2f0(a1, *(edi + 0x18));
                    sub_4bbf40(0x14, a1);
                    sub_4bc2a0(&var_40, 0x547a34, edi);
                    sub_4bc2c0(a1, &var_40);
                    sub_4bc2a0(&var_40, 0x547a38, *(edi + 0x1c));
                    sub_4bc2c0(a1, &var_40);
                    sub_4bbf60(a1);
                    sub_4bc2f0(a1, *(edi + 0x1c));
                    sub_4bc2a0(&var_40, 0x547a34, edi);
                    sub_4bc2c0(a1, &var_40);
                    sub_4bc2c0(a1, 0x5479e8);
                    sub_4bbf60(a1);
                    return;
                    break;
                }
                case 7:
                {
                    char* eax_14 = *(edi + 0x18);

                    if (eax_14)
                        sub_4bc2f0(a1, eax_14);

                    if (edi[1] == 0x18)
                    {
                        sub_4bbf40(0x12, a1);
                        sub_4bbf60(a1);
                    }

                    char* eax_15 = *(edi + 0x1c);

                    if (eax_15)
                        sub_4bc2f0(a1, eax_15);

                    switch (edi[1] - 1)
                    {
                        case 0:
                        {
                            sub_4bbf40(0x19, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 1:
                        {
                            sub_4bbf40(0x1a, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 2:
                        {
                            sub_4bbf40(0x2b, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 3:
                        {
                            sub_4bbf40(0x2c, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 4:
                        {
                            sub_4bbf40(0x1b, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 5:
                        {
                            sub_4bbf40(0x1c, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 7:
                        {
                            sub_4bbf40(0x20, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 8:
                        {
                            sub_4bbf40(0x21, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 9:
                        {
                            sub_4bbf40(0x1f, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 0xa:
                        {
                            sub_4bbf40(0x1d, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 0xb:
                        {
                            sub_4bbf40(0x1e, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 0xc:
                        {
                            sub_4bbf40(0x2d, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 0xd:
                        {
                            sub_4bbf40(0x24, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 0xe:
                        {
                            sub_4bbf40(0x25, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 0xf:
                        {
                            sub_4bbf40(0x26, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 0x10:
                        {
                            sub_4bbf40(0x28, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 0x11:
                        {
                            sub_4bbf40(0x27, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 0x12:
                        {
                            sub_4bbf40(0x29, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 0x13:
                        {
                            sub_4bbf40(0x2e, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 0x17:
                        {
                            sub_4bbf60(a1);
                            break;
                        }
                        case 0x18:
                        {
                            sub_4bbf40(0x2a, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 0x1a:
                        {
                            sub_4bbf40(0x23, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        case 0x1b:
                        {
                            sub_4bbf40(0x22, a1);
                            sub_4bbf60(a1);
                            break;
                        }
                        default:
                        {
                            Error_Show("Unknown operator in expression.");

                            while (true)
                                /* nop */
                        }
                    }

                    break;
                    break;
                }
            }
    }
}
