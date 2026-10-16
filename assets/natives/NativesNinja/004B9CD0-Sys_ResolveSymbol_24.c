#include "004B9CD0-Sys_ResolveSymbol_24.h"
/* 0x004b9cd0 Sys_ResolveSymbol_24 full linked: callers=7 callees=50 */
int32_t sub_4b9cd0(int32_t* a1, char** a2, int32_t a3, int32_t a4)

{
    char* i_1 = nullptr;
    int32_t* esi = a1;
    char* i_2 = nullptr;
    char* i_6 = nullptr;
    int32_t var_4 = 0;
    int32_t var_8 = 0;
    char* i_4 = nullptr;
    int32_t edx_19;

    while (true)
    {
        if (var_8)
        {
            edx_19 = var_4;
            break;
        }

        int32_t* ecx_2 = esi[6];
        int32_t edx_1 = esi[5];
        a1 = ecx_2;

        if (a4 && ecx_2 == 0x18)
        {
            edx_1 = 0;
        label_4b9d2a:

            switch (jump_table_4ba31c[edx_1])
            {
                case 0x4b9d31:
                {
                    if (!i_1)
                    {
                        int32_t var_24_20 = sub_4c0240(esi);
                        int32_t var_28_26 = sub_4c0230(esi);
                        sub_4b7e10("Syntax error in line %d: '%s'. Expected operand.");
                        i_1 = i_2;
                        edx_19 = 1;
                        break;
                    }

                    if (ecx_2 != 0x1d)
                    {
                        if (!g_a43e80)
                        {
                            int32_t var_24_18 = sub_4c0240(esi);
                            int32_t var_28_24 = sub_4c0230(esi);
                            sub_4b7e10("Syntax error in line %d: '%s'");
                            i_1 = i_2;
                            edx_19 = 1;
                            break;
                        }

                        goto label_4b9e54;
                    }

                    g_a43e80 = 1;

                    while (*(i_1 + 0x20))
                    {
                        char* i_5 = *(i_1 + 0x20);

                        if (sub_4ba3d0(0x1d) < i_5[2])
                        {
                            i_1 = i_2;
                            break;
                        }

                        i_1 = i_5;
                        i_2 = i_1;
                    }

                    char* i_3 = sub_4ba880(7, i_1, *(*esi + 0xc), nullptr);
                    char* i_8 = i_2;
                    void* eax_1 = *(i_8 + 0x20);

                    if (eax_1)
                    {
                        if (*(eax_1 + 0x18) == i_8)
                            *(eax_1 + 0x18) = i_3;
                        else if (*(eax_1 + 0x1c) != i_8)
                            *(eax_1 + 8) = i_3;
                        else
                            *(eax_1 + 0x1c) = i_3;
                    }

                    *(i_3 + 0x20) = *(i_2 + 0x20);

                    if (!sub_4bfc70(esi, &esi[2]))
                    {
                    label_4ba156:
                        int32_t var_24_16 = sub_4c0240(esi);
                        int32_t var_28_22 = sub_4c0230(esi);
                        sub_4b7e10("Unexpected end of file in line %d: '%s'");
                    }
                    else if (sub_4b9cd0(esi, &i_3[0x18], a3 + 1, 0))
                    {
                        if (esi[6] != 0x1e)
                        {
                            int32_t var_24_14 = sub_4c0240(esi);
                            int32_t var_28_20 = sub_4c0230(esi);
                            sub_4b7e10("Expected ':' in line %d: '%s'");
                        }
                        else
                        {
                            if (!sub_4bfc70(esi, &esi[2]))
                                goto label_4ba156;

                            if (sub_4b9cd0(esi, &i_3[0x1c], a3 + 1, 0))
                            {
                                i_4 = i_6;
                                i_1 = i_3;
                                i_2 = i_1;
                                var_8 = 1;
                                g_a43e80 = 0;
                                continue;
                            }
                        }
                    }

                    i_1 = i_2;
                    i_4 = i_6;
                    edx_19 = 1;
                    break;
                    break;
                }
                case 0x4b9e54:
                {
                label_4b9e54:
                    var_8 = 1;
                    continue;
                    continue;
                }
                case 0x4b9e5d:
                {
                    if (!i_1)
                    {
                        i_1 = sub_4ba880(2, esi[7], *(*esi + 0xc), nullptr);
                        i_2 = i_1;
                    }
                    else
                    {
                        if (*i_1 != 2)
                            goto label_4ba1ed;

                        i_1 = sub_4ba880(2, esi[7], *(*esi + 0xc), i_1);
                        i_2 = i_1;
                    }
                    break;
                }
                case 0x4b9ea7:
                {
                    if (i_1)
                    {
                    label_4ba1ed:
                        int32_t var_24_22 = sub_4c0240(esi);
                        int32_t var_28_28 = sub_4c0230(esi);
                        sub_4b7e10("Syntax error in line %d: '%s'.");
                        i_1 = i_2;
                        edx_19 = 1;
                        break;
                        break;
                    }

                    i_1 = sub_4ba880(3, &esi[8], *(*esi + 0xc), i_1);
                    i_2 = i_1;
                    break;
                }
                case 0x4b9ecd:
                {
                    if (i_1)
                        goto label_4ba1ed;

                    i_1 = sub_4ba880(1, &esi[0xa], *(*esi + 0xc), i_1);
                    i_2 = i_1;
                    break;
                }
                case 0x4b9ef2:
                {
                    if (i_1)
                        goto label_4ba1ed;

                    i_1 = sub_4ba880(5, esi[7], *(*esi + 0xc), i_1);
                    i_2 = i_1;
                    break;
                }
                case 0x4b9f18:
                {
                    if (ecx_2 != 0x15)
                    {
                        if (!i_1 || i_4)
                        {
                            if (ecx_2 == 1 || ecx_2 == 2)
                            {
                                void* edx_12 = nullptr;
                                edx_12 = ecx_2 != 1;
                                a1 = edx_12 + 3;
                            }
                            else if (edx_1 == 1)
                            {
                                int32_t var_24_28 = sub_4c0240(esi);
                                int32_t var_28_35 = sub_4c0230(esi);
                                sub_4b7e10("Syntax error in line %d, '%s'. Binary operator requires lvalue.");
                            label_4ba295:
                                i_1 = i_2;
                                edx_19 = 1;
                                break;
                                break;
                                break;
                            }
                        }

                        char* i_7 = sub_4ba880(8, &a1, *(*esi + 0xc), nullptr);
                        i_1 = i_2;

                        if (i_1)
                        {
                            i_4 = *(i_1 + 0x20);
                            i_6 = i_4;
                        }

                        if (i_4)
                        {
                            int32_t eax_21 = sub_4ba380(i_7[1]);
                            int32_t ebx_2 = -(eax_21);
                            int32_t ebx_4 = -((ebx_2 - ebx_2));
                            int32_t eax_22 = sub_4ba3d0(i_6[1]);

                            if (sub_4ba3d0(i_7[1]) + ebx_4 > eax_22)
                            {
                                int32_t eax_26;
                                int32_t eax_28;

                                do
                                {
                                    char* i_9 = *(i_6 + 0x20);

                                    if (!i_9)
                                    {
                                        *(i_7 + 0x18) = i_6;
                                        i_1 = nullptr;
                                        *(i_6 + 0x20) = i_7;
                                        i_2 = nullptr;
                                        goto label_4ba0f6;
                                    }

                                    i_6 = i_9;
                                    eax_26 = sub_4ba3d0(i_9[1]);
                                    eax_28 = sub_4ba3d0(i_7[1]) + ebx_4;
                                } while (eax_28 > eax_26);
                            }

                            if (i_6)
                            {
                                if (*(i_6 + 0x1c))
                                {
                                    if (!sub_4ba340(i_6[1]))
                                        *(i_7 + 0x18) = *(i_6 + 0x1c);
                                    else
                                        *(i_7 + 0x1c) = *(i_6 + 0x1c);

                                    *(*(i_6 + 0x1c) + 0x20) = i_7;
                                }

                                *(i_6 + 0x1c) = i_7;
                                *(i_7 + 0x20) = i_6;
                            }

                            i_1 = nullptr;
                            i_2 = nullptr;
                        }
                        else if (i_1)
                        {
                            if (!sub_4ba340(i_7[1]))
                                *(i_7 + 0x18) = i_2;
                            else
                                *(i_7 + 0x1c) = i_2;

                            i_1 = nullptr;
                            *(i_2 + 0x20) = i_7;
                            i_2 = nullptr;
                        }

                    label_4ba0f6:
                        i_4 = i_7;
                        i_6 = i_4;
                    }
                    else if (!i_1)
                    {
                        if (!sub_4bfc70(esi, &esi[2]))
                        {
                            int32_t var_24_26 = sub_4c0240(esi);
                            int32_t var_28_33 = sub_4c0230(esi);
                            sub_4b7e10("Unexpected end of file in line %d: '%s'");
                            i_1 = i_2;
                            edx_19 = 1;
                            break;
                            break;
                        }

                        if (!sub_4b9cd0(esi, &i_2, a3 + 1, 0))
                            goto label_4ba295;

                        if (esi[6] != 0x16)
                        {
                            sub_4b9be0(i_2);
                            i_2 = nullptr;
                            int32_t var_24_24 = sub_4c0240(esi);
                            int32_t var_28_31 = sub_4c0230(esi);
                            sub_4b7e10("Expected ')' in line %d: '%s'");
                            i_1 = i_2;
                            edx_19 = 1;
                            break;
                        }

                        i_1 = sub_4ba880(6, i_2, *(*esi + 0xc), nullptr);
                        i_2 = i_1;
                    }
                    else
                    {
                        if (*i_1 != 5)
                            goto label_4ba1ed;

                        int32_t* eax_13 = sub_4ba4c0(esi, nullptr);
                        *(i_2 + 0xc) = eax_13;

                        if (!eax_13)
                            goto label_4ba295;

                        i_1 = i_2;
                    }
                    break;
                }
            }
        }
        else if (edx_1 <= 7)
            goto label_4b9d2a;

        if (i_1 && i_4)
        {
            *(i_4 + 0x1c) = i_1;
            *(i_2 + 0x20) = i_4;
            i_4 = nullptr;
            i_6 = nullptr;
        }

        if (!sub_4bfc70(esi, &esi[2]))
            var_8 = 1;

        i_1 = i_2;
    }

    if (i_4)
        i_1 = i_4;

    if (i_1)
    {
        for (char* i = *(i_1 + 0x20); i; i = *(i_1 + 0x20))
            i_1 = i;

        if (i_1)
        {
            if (!edx_19)
            {
                *a2 = i_1;
                return 1;
            }

            sub_4b9be0(i_1);
        }
    }

    while (esi[6] != 0x17)
    {
        if (!sub_4bfc70(esi, &esi[2]))
            break;
    }

    *a2 = nullptr;
    g_a43e80 = 0;
    return 0;
}
