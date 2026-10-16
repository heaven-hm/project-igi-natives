#include "004A7720-Camera_ApplyWideScreen_11.h"
/* 0x004a7720 Camera_ApplyWideScreen_11 full linked: callers=2 callees=25 */
int32_t sub_4a7720(int32_t* a1, char* a2)

{
    int32_t esi = 0;
    char ebx = *a2;
    char* edi_1 = &a2[1];
    int32_t* j_1 = nullptr;
    int32_t i = 0;
    a2 = edi_1;

    if (ebx)
    {
        int32_t var_14;
        int32_t ecx_1 = var_14;

        while (i >= 0)
        {
            int32_t eax_2;

            if (ebx < 0x20 || ebx > 0x78)
                eax_2 = 0;
            else
            {
                int32_t eax_1 = ebx;
                eax_1 = g_534650[0x10][eax_1];
                eax_2 = eax_1 & 0xf;
            }

            int32_t eax_4 = *(esi + (eax_2 << 3) + 0x534680) >> 4;
            int32_t var_34_1 = eax_4;
            int32_t var_38;
            int32_t var_2c;
            int32_t var_28;
            int32_t var_24;
            int32_t* var_20;
            int16_t* var_8;
            void* arg_c;

            switch (eax_4)
            {
                case 0:
                {
                    goto label_4a78c5;
                }
                case 1:
                {
                    var_14 = 0xffffffff;
                    var_38 = 0;
                    var_2c = 0;
                    var_24 = 0;
                    var_20 = nullptr;
                    var_8 = nullptr;
                    var_28 = 0;
                    break;
                }
                case 2:
                {
                    int32_t eax_5 = ebx;

                    if (eax_5 == 0x20)
                        var_8 |= 2;
                    else if (eax_5 == 0x23)
                        var_8 |= 0x80;
                    else if (eax_5 == 0x2b)
                        var_8 |= 1;
                    else if (eax_5 == 0x2d)
                        var_8 |= 4;
                    else if (eax_5 == 0x30)
                        var_8 |= 8;
                    break;
                }
                case 3:
                {
                    if (ebx != 0x2a)
                        var_24 = ebx + var_24 * 0xa - 0x30;
                    else
                    {
                        int32_t eax_12 = sub_4a7eff(&arg_c);
                        var_24 = eax_12;

                        if (eax_12 < 0)
                        {
                            var_8 |= 4;
                            var_24 = -(eax_12);
                        }
                    }
                    break;
                }
                case 4:
                {
                    var_14 = 0;
                    break;
                }
                case 5:
                {
                    if (ebx != 0x2a)
                        var_14 = ebx + ecx_1 * 0xa - 0x30;
                    else
                    {
                        int32_t eax_16 = sub_4a7eff(&arg_c);
                        var_14 = eax_16;

                        if (eax_16 < 0)
                            var_14 = 0xffffffff;
                    }
                    break;
                }
                case 6:
                {
                    if (ebx == 0x49)
                    {
                        if (*edi_1 != 0x36 || edi_1[1] != 0x34)
                        {
                            var_34_1 = 0;
                        label_4a78c5:
                            var_28 = 0;

                            if (*(&(**&g_544070)[ebx] + 1) & 0x80)
                            {
                                sub_4a7e61(ebx, a1, &i);
                                ebx = *edi_1;
                                a2 = &edi_1[1];
                            }

                            sub_4a7e61(ebx, a1, &i);
                        }
                        else
                        {
                            *(&var_8 + 1) |= 0x80;
                            a2 = &edi_1[2];
                        }
                    }
                    else if (ebx == 0x68)
                        var_8 |= 0x20;
                    else if (ebx == 0x6c)
                        var_8 |= 0x10;
                    else if (ebx == 0x77)
                        *(&var_8 + 1) |= 8;
                    break;
                }
                case 7:
                {
                    int32_t eax_22 = ebx;
                    char var_1a;
                    char* var_c;
                    int32_t* j_4;

                    if (eax_22 > 0x67)
                    {
                        int32_t var_30;
                        int32_t var_10;

                        if (eax_22 == 0x69)
                        {
                        label_4a7c05:
                            var_8 |= 0x40;
                        label_4a7c09:
                            var_10 = 0xa;
                        label_4a7c14:
                            int32_t eax_55;
                            int32_t edx_3;

                            if (*(&var_8 + 1) & 0x80)
                                eax_55 = sub_4a7f0c(&arg_c);
                            else if (!(var_8 & 0x20))
                            {
                                void** var_25c_15 = &arg_c;

                                if (!(var_8 & 0x40))
                                {
                                    eax_55 = sub_4a7eff(var_25c_15);
                                    edx_3 = 0;
                                }
                                else
                                    edx_3 = HIGHD(sub_4a7eff(var_25c_15));
                                    eax_55 = LOWD(sub_4a7eff(var_25c_15));
                            }
                            else
                            {
                                void** var_25c_14 = &arg_c;
                                int32_t eax_57;

                                if (!(var_8 & 0x40))
                                    eax_57 = sub_4a7eff(var_25c_14);
                                else
                                    eax_57 = sub_4a7eff(var_25c_14);

                                edx_3 = HIGHD(eax_57);
                                eax_55 = LOWD(eax_57);
                            }

                            int32_t esi_4;
                            int32_t edi_6;

                            if (!(var_8 & 0x40) || edx_3 > 0 || (edx_3 >= 0 && eax_55 >= 0))
                            {
                                esi_4 = eax_55;
                                edi_6 = edx_3;
                            }
                            else
                            {
                                esi_4 = -(eax_55);
                                *(&var_8 + 1) |= 1;
                                edi_6 = -((edx_3 + 0));
                            }

                            if (!(*(&var_8 + 1) & 0x80))
                                edi_6 = 0;

                            if (var_14 >= 0)
                                var_8 &= 0xfffffff7;
                            else
                                var_14 = 1;

                            if (!(esi_4 | edi_6))
                                var_20 = nullptr;

                            void var_4d;
                            char* var_c_1 = &var_4d;

                            while (true)
                            {
                                int32_t eax_62 = var_14;
                                var_14 -= 1;

                                if (eax_62 <= 0 && !(esi_4 | edi_6))
                                    break;

                                int32_t eax_66;
                                uint32_t edx_6;
                                edx_6 = HIGHD(var_10);
                                eax_66 = LOWD(var_10);
                                int32_t ebx_2 = __aullrem(esi_4, edi_6, eax_66, edx_6) + 0x30;
                                uint32_t eax_68;
                                int32_t edx_7;
                                eax_68 = __aulldiv(esi_4, edi_6, eax_66, edx_6);
                                esi_4 = eax_68;
                                edi_6 = edx_7;

                                if (ebx_2 > 0x39)
                                    ebx_2 += var_30;

                                char* eax_69 = var_c_1;
                                var_c_1 -= 1;
                                *eax_69 = ebx_2;
                            }

                            int32_t* j_5 = &var_4d - var_c_1;
                            var_c = &var_c_1[1];
                            j_1 = j_5;

                            if (!(*(&var_8 + 1) & 2) || (*var_c == 0x30 && j_5))
                                goto label_4a7d2a;

                            var_c -= 1;
                            j_4 = j_5 + 1;
                            *var_c = 0x30;
                            goto label_4a7d27;
                        }

                        if (eax_22 != 0x6e)
                        {
                            int32_t eax_47 = eax_22 - 0x6f;

                            if (eax_22 == 0x6f)
                            {
                                var_10 = 8;

                                if (var_8 & 0x80)
                                    *(&var_8 + 1) |= 2;

                                goto label_4a7c14;
                            }

                            if (eax_47 == 1)
                            {
                                var_14 = 8;
                            label_4a7b9f:
                                var_30 = 7;
                            label_4a7baa:
                                var_10 = 0x10;

                                if (var_8 & 0x80)
                                {
                                    var_1a = 0x30;
                                    var_20 = 2;
                                    char var_19_1 = var_30 + 0x51;
                                }

                                goto label_4a7c14;
                            }

                            if (eax_47 != 4)
                            {
                                if (eax_47 == 6)
                                    goto label_4a7c09;

                                if (eax_47 != 9)
                                    goto label_4a7d2a;

                                var_30 = 0x27;
                                goto label_4a7baa;
                            }

                        label_4a794d:
                            int32_t esi_1 = var_14;

                            if (esi_1 == 0xffffffff)
                                esi_1 = 0x7fffffff;

                            int16_t* ecx_7 = sub_4a7eff(&arg_c);
                            var_c = ecx_7;

                            if (!(var_8 & 0x810))
                            {
                                if (!ecx_7)
                                {
                                    ecx_7 = g_544068;
                                    var_c = ecx_7;
                                }

                                int16_t* eax_52 = ecx_7;

                                while (true)
                                {
                                    int32_t edx_2 = esi_1;
                                    esi_1 -= 1;

                                    if (!edx_2)
                                        break;

                                    if (!*eax_52)
                                        break;

                                    eax_52 += 1;
                                }

                                j_4 = eax_52 - ecx_7;
                            }
                            else
                            {
                                if (!ecx_7)
                                {
                                    ecx_7 = g_54406c;
                                    var_c = ecx_7;
                                }

                                var_28 = 1;
                                int16_t* eax_30 = ecx_7;

                                while (true)
                                {
                                    int32_t edx_1 = esi_1;
                                    esi_1 -= 1;

                                    if (!edx_1)
                                        break;

                                    if (!*eax_30)
                                        break;

                                    eax_30 = &eax_30[1];
                                }

                                j_4 = (eax_30 - ecx_7) >> 1;
                            }

                            goto label_4a7d27;
                        }

                        int16_t* eax_54 = sub_4a7eff(&arg_c);

                        if (!(var_8 & 0x20))
                            *eax_54 = i;
                        else
                            *eax_54 = i;

                        var_2c = 1;
                    }
                    else
                    {
                        if (eax_22 >= 0x65)
                            goto label_4a79ae;

                        char* var_25c_8;
                        char var_24c;

                        if (eax_22 <= 0x58)
                        {
                            if (eax_22 == 0x58)
                                goto label_4a7b9f;

                            if (eax_22 == 0x43)
                            {
                                if (!(var_8 & 0x830))
                                    *(&var_8 + 1) |= 8;

                                goto label_4a79e4;
                            }

                            if (eax_22 != 0x45 && eax_22 != 0x47)
                            {
                                if (eax_22 != 0x53)
                                    goto label_4a7d2a;

                                if (!(var_8 & 0x830))
                                    *(&var_8 + 1) |= 8;

                                goto label_4a794d;
                            }

                            var_38 = 1;
                            ebx += 0x20;
                        label_4a79ae:
                            var_8 |= 0x40;
                            char* edi_5 = &var_24c;
                            var_c = &var_24c;

                            if (ecx_1 < 0)
                                var_14 = 6;
                            else if (!ecx_1 && ebx == 0x67)
                                var_14 = 1;

                            void* eax_42 = arg_c + 8;
                            arg_c = eax_42;
                            int32_t var_4c = *(eax_42 - 8);
                            int32_t var_48_1 = *(eax_42 - 4);
                            g_544050(&var_4c, &var_24c, ebx, var_14, var_38);
                            void* esi_3 = var_8 & 0x80;

                            if (esi_3 && !var_14)
                                g_54405c(&var_24c);

                            if (ebx == 0x67 && !esi_3)
                                g_544054(&var_24c);

                            if (var_24c == 0x2d)
                            {
                                *(&var_8 + 1) |= 1;
                                void var_24b;
                                edi_5 = &var_24b;
                                var_c = &var_24b;
                            }

                            var_25c_8 = edi_5;
                            goto label_4a7b20;
                        }

                        if (eax_22 != 0x5a)
                        {
                            if (eax_22 != 0x63)
                            {
                                if (eax_22 == 0x64)
                                    goto label_4a7c05;

                                goto label_4a7d2a;
                            }

                        label_4a79e4:
                            int32_t* var_25c_6 = &arg_c;

                            if (!(var_8 & 0x810))
                            {
                                var_24c = sub_4a7eff(var_25c_6);
                                j_1 = 1;
                            }
                            else
                            {
                                BOOL j_3 = sub_4ad0d4(&var_24c, sub_4a7f1c(var_25c_6));
                                j_1 = j_3;

                                if (j_3 < 0)
                                    var_2c = 1;
                            }

                            var_c = &var_24c;
                            goto label_4a7d2a;
                        }

                        int16_t* eax_37 = sub_4a7eff(&arg_c);
                        char* ecx_10;

                        if (eax_37)
                            ecx_10 = *(eax_37 + 4);

                        if (!eax_37 || !ecx_10)
                        {
                            char* eax_40 = g_544068;
                            var_c = eax_40;
                            var_25c_8 = eax_40;
                        label_4a7b20:
                            j_4 = sub_4aa730(var_25c_8);
                        label_4a7d27:
                            j_1 = j_4;
                            goto label_4a7d2a;
                        }

                        if (!(*(&var_8 + 1) & 8))
                        {
                            var_28 = 0;
                            var_c = ecx_10;
                            j_4 = *eax_37;
                            goto label_4a7d27;
                        }

                        var_c = ecx_10;
                        j_1 = *eax_37 >> 1;
                        var_28 = 1;
                    label_4a7d2a:

                        if (!var_2c)
                        {
                            if (var_8 & 0x40)
                            {
                                if (*(&var_8 + 1) & 1)
                                {
                                    var_1a = 0x2d;
                                    var_20 = 1;
                                }
                                else if (var_8 & 1)
                                {
                                    var_1a = 0x2b;
                                    var_20 = 1;
                                }
                                else if (var_8 & 2)
                                {
                                    var_1a = 0x20;
                                    var_20 = 1;
                                }
                            }

                            int32_t* esi_7 = var_24 - var_20 - j_1;

                            if (!(var_8 & 0xc))
                                sub_4a7e96(0x20, esi_7, a1, &i);

                            sub_4a7ec7(&var_1a, var_20, a1, &i);

                            if (var_8 & 8 && !(var_8 & 4))
                                sub_4a7e96(0x30, esi_7, a1, &i);

                            if (!var_28 || j_1 <= 0)
                                sub_4a7ec7(var_c, j_1, a1, &i);
                            else
                            {
                                int32_t* j = j_1;
                                int16_t* ebx_3 = var_c;
                                int32_t* j_2 = j - 1;

                                do
                                {
                                    j = *ebx_3;
                                    ebx_3 = &ebx_3[1];
                                    void var_3c;
                                    BOOL eax_70 = sub_4ad0d4(&var_3c, j);

                                    if (eax_70 <= 0)
                                        break;

                                    sub_4a7ec7(&var_3c, eax_70, a1, &i);
                                    j = j_2;
                                    j_2 -= 1;
                                } while (j);
                            }

                            if (var_8 & 4)
                                sub_4a7e96(0x20, esi_7, a1, &i);
                        }
                    }
                    break;
                }
            }

            ebx = *a2;
            edi_1 = &a2[1];
            a2 = edi_1;

            if (!ebx)
                break;

            ecx_1 = var_14;
            esi = var_34_1;
        }
    }

    return i;
}
