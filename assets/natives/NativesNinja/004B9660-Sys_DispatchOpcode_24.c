#include "004B9660-Sys_DispatchOpcode_24.h"
/* 0x004b9660 Sys_DispatchOpcode_24 full linked: callers=35 callees=41 */
void sub_4b9660(long double a1 @ st0, long double a2 @ st1, int32_t a3)

{
    if (!a3)
        return;

    int32_t eax = *(a3 + 1);

    if (eax > 0x1d)
        return;

    int32_t ecx_1 = 0;
    ecx_1 = lookup_table_4b9ba4[eax];
    long double entry_x87_r2;
    long double x87_r3;
    long double x87_r4;
    long double entry_x87_r5;

    switch (ecx_1)
    {
        case 0:
        {
            switch (*a3 - 1)
            {
                case 0:
                {
                    *(a3 + 8);
                    break;
                }
                case 2:
                {
                    *(a3 + 8);
                    break;
                }
                case 3:
                case 4:
                {
                    if (!*(a3 + 8))
                        *(a3 + 8) = sub_4babb0(*(a3 + 0x10));

                    void* eax_5 = *(a3 + 8);

                    if (eax_5)
                    {
                        void* eax_6 = *(eax_5 + 8);

                        if (eax_6)
                        {
                            void var_18;
                            *((*(eax_6 + 0x10))(&var_18, *(eax_6 + 0x18), *(a3 + 0xc)) + 8);
                            return;
                        }
                    }

                    void* eax_8 = *(a3 + 0x18);

                    if (!eax_8)
                    {
                        int32_t var_2c_5 = *(a3 + 0x24);
                        int32_t var_30_4 = *(a3 + 0x10);
                    }
                    else
                    {
                        int32_t var_2c_4 = *(a3 + 0x24);
                        int32_t var_30_3 = *(eax_8 + 0x10);
                    }

                    sub_4b7e10("Unknown identifier '%s' in expression, line %d");
                    break;
                }
                case 5:
                {
                    sub_4b9660(a1, a2, *(a3 + 8));
                    break;
                }
            }
            break;
        }
        case 1:
        {
            sub_4b9660(a1, a2, *(a3 + 0x1c));
            double var_20_1 = entry_x87_r2;
            sub_4b9660(x87_r3, x87_r4, *(a3 + 0x18));
            break;
        }
        case 2:
        {
            sub_4b9660(a1, a2, *(a3 + 0x18));
            double var_20_2 = entry_x87_r2;
            sub_4b9660(x87_r3, x87_r4, *(a3 + 0x1c));
            break;
        }
        case 3:
        {
            sub_4b9660(a1, a2, *(a3 + 0x1c));
            break;
        }
        case 4:
        {
            sub_4b9660(a1, a2, *(a3 + 0x1c));
            break;
        }
        case 5:
        {
            sub_4b9660(a1, a2, *(a3 + 0x1c));
            double var_20_3 = entry_x87_r2;
            sub_4b9660(x87_r3, x87_r4, *(a3 + 0x18));
            break;
        }
        case 6:
        {
            sub_4b9660(a1, a2, *(a3 + 0x1c));
            double var_20_4 = entry_x87_r2;
            long double temp1 = 0.0;
            entry_x87_r2 - temp1;

            if (*(&((entry_x87_r2 < temp1 ? 1 : 0) << 8
                | (FCMP_UO(entry_x87_r2, temp1) ? 1 : 0) << 0xa
                | (entry_x87_r2 == temp1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40)
            {
                g_a965a8 = 1;
                return;
            }

            sub_4b9660(x87_r3, x87_r4, *(a3 + 0x18));
            break;
        }
        case 7:
        {
            sub_4b9660(a1, a2, *(a3 + 0x18));
            sub_4b9660(x87_r3, x87_r4, *(a3 + 0x1c));
            long double temp6 = entry_x87_r2;
            entry_x87_r5 - temp6;
            a3 = 1;

            if (!(*(&((entry_x87_r5 < temp6 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, temp6) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == temp6 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                a3 = 0;
            break;
        }
        case 8:
        {
            sub_4b9660(a1, a2, *(a3 + 0x18));
            sub_4b9660(x87_r3, x87_r4, *(a3 + 0x1c));
            long double temp7 = entry_x87_r2;
            entry_x87_r5 - temp7;
            a3 = 1;

            if (*(&((entry_x87_r5 < temp7 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, temp7) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == temp7 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                a3 = 0;
            break;
        }
        case 9:
        {
            sub_4b9660(a1, a2, *(a3 + 0x18));
            sub_4b9660(x87_r3, x87_r4, *(a3 + 0x1c));
            long double temp2 = entry_x87_r2;
            entry_x87_r5 - temp2;
            a3 = 1;

            if (*(&((entry_x87_r5 < temp2 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, temp2) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == temp2 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                a3 = 0;
            break;
        }
        case 0xa:
        {
            sub_4b9660(a1, a2, *(a3 + 0x18));
            sub_4b9660(x87_r3, x87_r4, *(a3 + 0x1c));
            long double temp3 = entry_x87_r2;
            entry_x87_r5 - temp3;
            a3 = 1;

            if (!(*(&((entry_x87_r5 < temp3 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, temp3) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == temp3 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                a3 = 0;
            break;
        }
        case 0xb:
        {
            sub_4b9660(a1, a2, *(a3 + 0x18));
            sub_4b9660(x87_r3, x87_r4, *(a3 + 0x1c));
            long double temp4 = entry_x87_r2;
            entry_x87_r5 - temp4;
            a3 = 1;

            if (*(&((entry_x87_r5 < temp4 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, temp4) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == temp4 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                a3 = 0;
            break;
        }
        case 0xc:
        {
            sub_4b9660(a1, a2, *(a3 + 0x18));
            sub_4b9660(x87_r3, x87_r4, *(a3 + 0x1c));
            long double temp5 = entry_x87_r2;
            entry_x87_r5 - temp5;
            a3 = 1;

            if (!(*(&((entry_x87_r5 < temp5 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, temp5) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == temp5 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                a3 = 0;
            break;
        }
        case 0xd:
        {
            sub_4b9660(a1, a2, *(a3 + 0x1c));
            long double temp0 = 0.0;
            entry_x87_r2 - temp0;
            a3 = 1;

            if (!(*(&((entry_x87_r2 < temp0 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r2, temp0) ? 1 : 0) << 0xa
                    | (entry_x87_r2 == temp0 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
                a3 = 0;
            break;
        }
        case 0xe:
        {
            sub_4b9120(*(a3 + 0x18));
            a3 = sub_4b9120(*(a3 + 0x1c));
            break;
        }
        case 0xf:
        {
            eax = *(a3 + 0x18);

            if (eax)
            {
                char ecx_16 = *eax;

                if (ecx_16 != 4)
                {
                    if (ecx_16 != 5)
                    {
                        int32_t var_2c_28 = *(a3 + 0x24);
                        Error_Show("Internal script error. Invalid assignment, line %d");

                        while (true)
                            /* nop */
                    }
                    else if (ecx_16 != 4 && !*(eax + 8))
                        *(*(a3 + 0x18) + 8) = sub_4babb0(*(eax + 0x10));
                }

                void* ecx_18 = *(a3 + 0x18);
                void* eax_56 = *(ecx_18 + 8);

                if (eax_56)
                {
                    int32_t* eax_57 = *(eax_56 + 8);

                    if (eax_57)
                    {
                        int32_t ecx_19 = *eax_57;

                        if (!ecx_19)
                        {
                            sub_4b9040(entry_x87_r2, *(a3 + 0x1c), eax_57);
                            sub_4b9660(x87_r3, x87_r4, *(a3 + 0x1c));
                            return;
                        }

                        if (ecx_19 != 2)
                        {
                            int32_t var_2c_32 = *(a3 + 0x24);
                            sub_4b7e10("Syntax error in assignment, line %d");
                            return;
                        }

                        int32_t var_2c_31 = *(a3 + 0x24);
                        sub_4b7e10("Expression: Cannot assign to constant, line %d");
                        return;
                    }
                }

                int32_t var_2c_33 = *(a3 + 0x24);
                int32_t var_30_15 = *(ecx_18 + 0x10);
                sub_4b7e10("Unknown identifier '%s' in expression, line %d");
            }
            break;
        }
        case 0x10:
        {
            sub_4b9660(a1, a2, *(a3 + 0x18));
            long double temp9 = 0.0;
            entry_x87_r2 - temp9;
            long double temp11_1;

            if (*(&((entry_x87_r2 < temp9 ? 1 : 0) << 8
                | (FCMP_UO(entry_x87_r2, temp9) ? 1 : 0) << 0xa
                | (entry_x87_r2 == temp9 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40)
            {
                sub_4b9660(x87_r3, x87_r4, *(a3 + 0x1c));
                temp11_1 = 0.0;
                entry_x87_r5 - temp11_1;
                a3 = 0;
            }

            if (!(*(&((entry_x87_r2 < temp9 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r2, temp9) ? 1 : 0) << 0xa
                    | (entry_x87_r2 == temp9 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40) || !(*(&(
                    (entry_x87_r5 < temp11_1 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, temp11_1) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == temp11_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                a3 = 1;

🚫🚫            /* unimplemented  {fild st0, dword [esp+0x2c]} */
            break;
        }
        case 0x11:
        {
            sub_4b9660(a1, a2, *(a3 + 0x18));
            long double temp8 = 0.0;
            entry_x87_r2 - temp8;
            long double temp10_1;

            if (!(*(&((entry_x87_r2 < temp8 ? 1 : 0) << 8
                | (FCMP_UO(entry_x87_r2, temp8) ? 1 : 0) << 0xa
                | (entry_x87_r2 == temp8 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40))
            {
                sub_4b9660(x87_r3, x87_r4, *(a3 + 0x1c));
                temp10_1 = 0.0;
                entry_x87_r5 - temp10_1;
                a3 = 1;
            }

            if (*(&((entry_x87_r2 < temp8 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r2, temp8) ? 1 : 0) << 0xa
                    | (entry_x87_r2 == temp8 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x40 || *(&(
                    (entry_x87_r5 < temp10_1 ? 1 : 0) << 8
                    | (FCMP_UO(entry_x87_r5, temp10_1) ? 1 : 0) << 0xa
                    | (entry_x87_r5 == temp10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
                a3 = 0;

🚫🚫            /* unimplemented  {fild st0, dword [esp+0x2c]} */
            break;
        }
        case 0x12:
        {
            sub_4b9660(a1, a2, *(a3 + 8));

            if (!entry_x87_r2)
            {
                sub_4b9660(x87_r3, x87_r4, *(a3 + 0x1c));
                return;
            }

            sub_4b9660(x87_r3, x87_r4, *(a3 + 0x18));
            break;
        }
    }
}
