#include "004B8CE0-Sys_SyntaxErrorInStringE.h"
/* 0x004b8ce0 Sys_SyntaxErrorInStringE full linked: callers=8 callees=18 */
char* sub_4b8ce0(char* a1, int16_t* a2, char* a3)

{
    if (!a1)
    {
        *a2 = g_5474d8;
        return 0;
    }

    int32_t eax_2 = a1[1];
    char* var_82c_9;

    if (eax_2 > 0x19)
    {
    label_4b8fc0:
        int32_t __saved_ebp_13 = *(a1 + 0x24);
        var_82c_9 = "Syntax error in string expression, line %d";
    label_4b8fc6:
        sub_4b7e10(var_82c_9);
        *a2 = g_5474d8;
        return 0;
    }

    int32_t edx_1 = 0;
    edx_1 = lookup_table_4b9000[eax_2];
    void var_800;

    switch (edx_1)
    {
        case 0:
        {
            int32_t eax_6 = *a1 - 1;

            if (eax_6 > 5)
            {
                *a2 = g_5474d8;
                return 0;
            }

            char* var_82c_3;
            void* __saved_ebp_3;
            char* eax_9;
            char* edi_1;

            switch (eax_6)
            {
                case 0:
                case 2:
                {
                    int32_t __saved_ebp_2 = *(a1 + 0x24);
                    sub_4b7e10("Numeric member in string expression. Line %d.");
                    *a2 = g_5474d8;
                    return 0;
                    break;
                }
                case 1:
                {
                    edi_1 = a3;
                    eax_9 = *(a1 + 8);
                    __saved_ebp_3 = &edi_1[0xffffffff];
                label_4b8e57:
                    var_82c_3 = eax_9;
                label_4b8e58:
                    char* esi_1 = a2;
                    sub_4a5500(esi_1, var_82c_3, __saved_ebp_3);
                    *(esi_1 + edi_1 - 1) = 0;
                    return esi_1;
                    break;
                }
                case 3:
                case 4:
                {
                    if (!*(a1 + 8))
                        *(a1 + 8) = sub_4babb0(*(a1 + 0x10));

                    void* eax_12 = *(a1 + 8);
                    void* eax_13;

                    if (eax_12)
                        eax_13 = *(eax_12 + 8);

                    if (eax_12 && eax_13)
                    {
                        edi_1 = a3;
                        __saved_ebp_3 = &edi_1[0xffffffff];
                        void var_818;
                        var_82c_3 = *((*(eax_13 + 0x10))(&var_818, *(eax_13 + 0x18), *(a1 + 0xc),
                            __saved_ebp_3) + 0x10);
                        goto label_4b8e58;
                    }

                    void* eax_15 = *(a1 + 0x18);

                    if (!eax_15)
                    {
                        int32_t __saved_ebp_6 = *(a1 + 0x24);
                        int32_t var_82c_5 = *(a1 + 0x10);
                        sub_4b7e10("Unknown identifier '%s' in expression, line %d");
                    }
                    else
                    {
                        int32_t __saved_ebp_5 = *(a1 + 0x24);
                        int32_t var_82c_4 = *(eax_15 + 0x10);
                        sub_4b7e10("Unknown identifier '%s' in expression, line %d");
                    }
                    break;
                }
                case 5:
                {
                    edi_1 = a3;
                    __saved_ebp_3 = &edi_1[0xffffffff];
                    eax_9 = sub_4b8ce0(*(a1 + 8), &var_800, 0x800);
                    goto label_4b8e57;
                }
            }

            *a2 = g_5474d8;
            return 0;
            break;
        }
        case 1:
        {
            sub_4a5500(a2, sub_4b8ce0(*(a1 + 0x18), &var_800, 0x800), &a3[0xffffffff]);
            sub_5169b0(a2, sub_4b8ce0(*(a1 + 0x1c), &var_800, 0x800), &a3[0xffffffff]);
            *(a2 + a3 - 1) = 0;
            return a2;
            break;
        }
        case 2:
        {
            sub_4b8ce0(*(a1 + 0x18), a2, a3);
            return sub_4b8ce0(*(a1 + 0x1c), a2, a3);
            break;
        }
        case 3:
        {
            char* eax_16 = *(a1 + 0x18);

            if (!eax_16)
            {
                *a2 = g_5474d8;
                return 0;
            }

            char ecx_11 = *eax_16;

            if (ecx_11 != 4)
            {
                if (ecx_11 != 5)
                {
                    int32_t __saved_ebp_7 = *(a1 + 0x24);
                    Error_Show("Internal script error. Invalid assignment, line %d");

                    while (true)
                        /* nop */
                }
                else if (ecx_11 != 4 && !*(eax_16 + 8))
                    *(*(a1 + 0x18) + 8) = sub_4babb0(*(eax_16 + 0x10));
            }

            void* ecx_15 = *(a1 + 0x18);
            void* eax_26 = *(ecx_15 + 8);
            int32_t* eax_27;

            if (eax_26)
                eax_27 = *(eax_26 + 8);

            if (!eax_26 || !eax_27)
            {
                int32_t __saved_ebp_12 = *(a1 + 0x24);
                int32_t var_82c_10 = *(ecx_15 + 0x10);
                sub_4b7e10("Unknown identifier '%s' in expression, line %d");
                *a2 = g_5474d8;
                return 0;
            }

            int32_t ecx_16 = *eax_27;

            if (!ecx_16)
            {
                long double x87_r2;
                sub_4b9040(x87_r2, *(a1 + 0x1c), eax_27);
                return sub_4b8ce0(*(a1 + 0x1c), a2, a3);
            }

            if (ecx_16 != 2)
            {
                int32_t __saved_ebp_11 = *(a1 + 0x24);
                var_82c_9 = "Syntax error in assignment, line %d";
            }
            else
            {
                int32_t __saved_ebp_10 = *(a1 + 0x24);
                var_82c_9 = "Expression: Cannot assign to constant, line %d";
            }

            goto label_4b8fc6;
        }
        case 4:
        {
            goto label_4b8fc0;
        }
    }
}
