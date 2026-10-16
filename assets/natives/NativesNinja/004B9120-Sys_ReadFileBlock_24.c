#include "004B9120-Sys_ReadFileBlock_24.h"
/* 0x004b9120 Sys_ReadFileBlock_24 full linked: callers=61 callees=52 */
int32_t sub_4b9120(char* a1)

{
    if (a1)
        switch (a1[1])
        {
            case 0:
            {
                switch (*a1 - 1)
                {
                    case 0:
                    {
                        return *(a1 + 8);
                        break;
                    }
                    case 2:
                    {
                        return *(a1 + 8);
                        break;
                    }
                    case 3:
                    case 4:
                    {
                        if (!*(a1 + 8))
                            *(a1 + 8) = sub_4babb0(*(a1 + 0x10));

                        void* eax_10 = *(a1 + 8);

                        if (eax_10)
                        {
                            void* eax_11 = *(eax_10 + 8);
                            void var_18;

                            if (eax_11)
                                return
                                    *(*(eax_11 + 0x10))(&var_18, *(eax_11 + 0x18), *(a1 + 0xc));
                        }

                        void* eax_14 = *(a1 + 0x18);

                        if (!eax_14)
                        {
                            int32_t var_2c_5 = *(a1 + 0x24);
                            int32_t var_30_4 = *(a1 + 0x10);
                        }
                        else
                        {
                            int32_t var_2c_4 = *(a1 + 0x24);
                            int32_t var_30_3 = *(eax_14 + 0x10);
                        }

                        sub_4b7e10("Unknown identifier '%s' in expression, line %d");
                        break;
                    }
                    case 5:
                    {
                        return sub_4b9120(*(a1 + 8));
                        break;
                    }
                }
                break;
            }
            case 1:
            {
                int32_t eax_33 = sub_4b9120(*(a1 + 0x1c));
                return sub_4b9120(*(a1 + 0x18)) + eax_33;
                break;
            }
            case 2:
            {
                int32_t eax_37 = sub_4b9120(*(a1 + 0x1c));
                return sub_4b9120(*(a1 + 0x18)) - eax_37;
                break;
            }
            case 3:
            {
                return sub_4b9120(*(a1 + 0x1c));
                break;
            }
            case 4:
            {
                return -(sub_4b9120(*(a1 + 0x1c)));
                break;
            }
            case 5:
            {
                int32_t eax_41 = sub_4b9120(*(a1 + 0x1c));
                return sub_4b9120(*(a1 + 0x18)) * eax_41;
                break;
            }
            case 6:
            {
                int32_t eax_44 = sub_4b9120(*(a1 + 0x1c));

                if (!eax_44)
                {
                    g_a965a8 = 1;
                    return 0;
                }

                return sub_4b9120(*(a1 + 0x18)) / eax_44;
                break;
            }
            case 8:
            {
                int32_t eax_50 = sub_4b9120(*(a1 + 0x1c));
                return sub_4b9120(*(a1 + 0x18)) | eax_50;
                break;
            }
            case 9:
            {
                int32_t eax_54 = sub_4b9120(*(a1 + 0x1c));
                return sub_4b9120(*(a1 + 0x18)) ^ eax_54;
                break;
            }
            case 0xa:
            {
                int32_t eax_57 = sub_4b9120(*(a1 + 0x1c));
                return sub_4b9120(*(a1 + 0x18)) & eax_57;
                break;
            }
            case 0xb:
            {
                char eax_61 = sub_4b9120(*(a1 + 0x1c));
                return sub_4b9120(*(a1 + 0x18)) << (eax_61 & 0x1f);
                break;
            }
            case 0xc:
            {
                char eax_65 = sub_4b9120(*(a1 + 0x1c));
                return sub_4b9120(*(a1 + 0x18)) >> (eax_65 & 0x1f);
                break;
            }
            case 0xd:
            {
                return ~sub_4b9120(*(a1 + 0x1c));
                break;
            }
            case 0xe:
            {
                int32_t eax_84 = sub_4b9120(*(a1 + 0x1c));
                int32_t ecx_19 = 0;
                ecx_19 = sub_4b9120(*(a1 + 0x18)) == eax_84;
                return ecx_19;
                break;
            }
            case 0xf:
            {
                int32_t eax_88 = sub_4b9120(*(a1 + 0x1c));
                int32_t ecx_20 = 0;
                ecx_20 = sub_4b9120(*(a1 + 0x18)) != eax_88;
                return ecx_20;
                break;
            }
            case 0x10:
            {
                int32_t eax_68 = sub_4b9120(*(a1 + 0x1c));
                int32_t ecx_15 = 0;
                ecx_15 = sub_4b9120(*(a1 + 0x18)) < eax_68;
                return ecx_15;
                break;
            }
            case 0x11:
            {
                int32_t eax_72 = sub_4b9120(*(a1 + 0x1c));
                int32_t ecx_16 = 0;
                ecx_16 = sub_4b9120(*(a1 + 0x18)) > eax_72;
                return ecx_16;
                break;
            }
            case 0x12:
            {
                int32_t eax_76 = sub_4b9120(*(a1 + 0x1c));
                int32_t ecx_17 = 0;
                ecx_17 = sub_4b9120(*(a1 + 0x18)) <= eax_76;
                return ecx_17;
                break;
            }
            case 0x13:
            {
                int32_t eax_80 = sub_4b9120(*(a1 + 0x1c));
                int32_t ecx_18 = 0;
                ecx_18 = sub_4b9120(*(a1 + 0x18)) >= eax_80;
                return ecx_18;
                break;
            }
            case 0x14:
            {
                int32_t eax_29 = sub_4b9120(*(a1 + 0x1c));
                int32_t eax_30 = -(eax_29);
                return eax_30 - eax_30 + 1;
                break;
            }
            case 0x18:
            {
                sub_4b9120(*(a1 + 0x18));
                return sub_4b9120(*(a1 + 0x1c));
                break;
            }
            case 0x19:
            {
                char* eax_98 = *(a1 + 0x18);

                if (!eax_98)
                {
                label_4b95b4:
                    int32_t var_2c_39 = *(a1 + 0x24);
                    Error_Show("Internal script error. Invalid assignment, line %d");

                    while (true)
                        /* nop */
                }
                else
                {
                    char ecx_22 = *eax_98;

                    if (ecx_22 != 4)
                    {
                        if (ecx_22 != 5)
                            goto label_4b95b4;

                        if (ecx_22 != 4 && !*(eax_98 + 8))
                            *(*(a1 + 0x18) + 8) = sub_4babb0(*(eax_98 + 0x10));

                        goto label_4b953a;
                    }

                label_4b953a:
                    void* ecx_25 = *(a1 + 0x18);
                    void* eax_101 = *(ecx_25 + 8);

                    if (eax_101)
                    {
                        int32_t* eax_102 = *(eax_101 + 8);

                        if (eax_102)
                        {
                            int32_t ecx_26 = *eax_102;

                            if (!ecx_26)
                            {
                                long double x87_r2;
                                sub_4b9040(x87_r2, *(a1 + 0x1c), eax_102);
                                return sub_4b9120(*(a1 + 0x1c));
                            }

                            if (ecx_26 != 2)
                            {
                                int32_t var_2c_37 = *(a1 + 0x24);
                                sub_4b7e10("Syntax error in assignment, line %d");
                                return 0;
                            }

                            int32_t var_2c_36 = *(a1 + 0x24);
                            sub_4b7e10("Expression: Cannot assign to constant, line %d");
                            return 0;
                        }
                    }

                    int32_t var_2c_38 = *(a1 + 0x24);
                    int32_t var_30_20 = *(ecx_25 + 0x10);
                }

                sub_4b7e10("Unknown identifier '%s' in expression, line %d");
                break;
            }
            case 0x1b:
            {
                if (!sub_4b9120(*(a1 + 0x18)))
                {
                    int32_t eax_94 = sub_4b9120(*(a1 + 0x1c));

                    if (!eax_94)
                        return eax_94;
                }

                return 1;
                break;
            }
            case 0x1c:
            {
                if (sub_4b9120(*(a1 + 0x18)) && sub_4b9120(*(a1 + 0x1c)))
                    return 1;
                break;
            }
            case 0x1d:
            {
                if (!sub_4b9120(*(a1 + 8)))
                    return sub_4b9120(*(a1 + 0x1c));

                return sub_4b9120(*(a1 + 0x18));
                break;
            }
        }

    return 0;
}
