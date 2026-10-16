#include "004ADBF9-Camera_ApplyHandiCam_29.h"
/* 0x004adbf9 Camera_ApplyHandiCam_29 full linked: callers=3 callees=7 */
int32_t sub_4adbf9(int16_t* a1, char** a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)

{
    int32_t ebx;
    int32_t var_64 = ebx;
    char* i_20 = a3;
    void var_60;
    char* var_10 = &var_60;
    int32_t eax = 0;
    int32_t edx = 1;
    int16_t var_2c = 0;
    int32_t var_1c = 1;
    int32_t var_8 = 0;
    int32_t var_14 = 0;
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    int32_t var_30 = 0;
    int32_t var_34 = 0;
    int32_t var_20 = 0;
    int32_t var_c = 0;
    int32_t result = 0;
    a3 = i_20;

    while (true)
    {
        int32_t i_14;
        i_14 = *i_20;

        if (i_14 != 0x20 && i_14 != 9 && i_14 != 0xa && i_14 != 0xd)
        {
            while (true)
            {
                char i = *i_20;
                i_20 = &i_20[1];
                int32_t var_70_1;

                switch (eax)
                {
                    case 0:
                    {
                        if (i >= 0x31 && i <= 0x39)
                        {
                        label_4adc6d:
                            var_70_1 = 3;
                        label_4ade91:
                            eax = var_70_1;
                            i_20 -= 1;
                            continue;
                        }
                        else if (i != g_544280)
                        {
                            int32_t i_1 = i;

                            if (i_1 == 0x2b)
                            {
                                var_2c = 0;
                                eax = 2;
                                continue;
                            }
                            else if (i_1 == 0x2d)
                            {
                                var_2c = -0x8000;
                                eax = 2;
                                continue;
                            }
                            else
                            {
                                if (i_1 != 0x30)
                                {
                                    i_20 -= 1;
                                    break;
                                }

                                eax = 1;
                                continue;
                            }
                        }
                        else
                        {
                        label_4adc7c:
                            eax = 5;
                            continue;
                        }
                        break;
                    }
                    case 1:
                    {
                        var_14 = 1;

                        if (i >= 0x31 && i <= 0x39)
                            goto label_4adc6d;

                        if (i == g_544280)
                        {
                            eax = 4;
                            continue;
                        }
                        else if (i == 0x2b || i == 0x2d)
                        {
                        label_4add01:
                            i_20 -= 1;
                            eax = 0xb;
                            continue;
                        }
                        else if (i == 0x30)
                        {
                            eax = 1;
                            continue;
                        }
                        else
                        {
                        label_4adcda:

                            if (i <= 0x43 || (i > 0x45 && (i <= 0x63 || i > 0x65)))
                            {
                                i_20 -= 1;
                                break;
                            }

                            eax = 6;
                            continue;
                        }
                        break;
                    }
                    case 2:
                    {
                        if (i >= 0x31 && i <= 0x39)
                            goto label_4adc6d;

                        if (i == g_544280)
                            goto label_4adc7c;

                        if (i != 0x30)
                        {
                            i_20 = a3;
                            break;
                        }

                        eax = 1;
                        continue;
                    }
                    case 3:
                    {
                        var_14 = 1;

                        while (true)
                        {
                            BOOL eax_5;

                            if (g_54427c <= 1)
                            {
                                i_14 = g_544070;
                                uint32_t i_3 = i;
                                i_3 = *(i_14 + (i_3 << 1));
                                eax_5 = i_3 & 4;
                            }
                            else
                            {
                                uint32_t i_2 = i;
                                uint32_t i_15 = i_2;
                                eax_5 = sub_4a7f2a(i_2, 1, i_14, 4);
                                i_14 = 4;
                                edx = 1;
                            }

                            if (!eax_5)
                                break;

                            if (var_8 >= 0x19)
                                var_c += 1;
                            else
                            {
                                char* eax_6 = var_10;
                                var_8 += 1;
                                var_10 = &var_10[1];
                                *eax_6 = i - 0x30;
                            }

                            i = *i_20;
                            i_20 = &i_20[1];
                        }

                        if (i == g_544280)
                        {
                            eax = 4;
                            continue;
                        }

                    label_4addee:

                        if (i == 0x2b || i == 0x2d)
                            goto label_4add01;

                        goto label_4adcda;
                    }
                    case 4:
                    {
                        var_14 = 1;
                        var_28 = 1;

                        if (!var_8)
                        {
                            while (i == 0x30)
                            {
                                var_c -= 1;
                                i = *i_20;
                                i_20 = &i_20[1];
                            }
                        }

                        while (true)
                        {
                            BOOL eax_7;

                            if (g_54427c <= 1)
                            {
                                i_14 = g_544070;
                                uint32_t i_5 = i;
                                i_5 = *(i_14 + (i_5 << 1));
                                eax_7 = i_5 & 4;
                            }
                            else
                            {
                                uint32_t i_4 = i;
                                uint32_t i_16 = i_4;
                                eax_7 = sub_4a7f2a(i_4, 1, i_14, 4);
                                i_14 = 4;
                                edx = 1;
                            }

                            if (!eax_7)
                                break;

                            if (var_8 < 0x19)
                            {
                                char* eax_8 = var_10;
                                var_8 += 1;
                                var_10 = &var_10[1];
                                var_c -= 1;
                                *eax_8 = i - 0x30;
                            }

                            i = *i_20;
                            i_20 = &i_20[1];
                        }

                        goto label_4addee;
                    }
                    case 5:
                    {
                        var_28 = 1;
                        BOOL eax_9;

                        if (g_54427c <= 1)
                        {
                            i_14 = g_544070;
                            uint32_t i_7 = i;
                            i_7 = *(i_14 + (i_7 << 1));
                            eax_9 = i_7 & 4;
                        }
                        else
                        {
                            uint32_t i_6 = i;
                            uint32_t i_17 = i_6;
                            eax_9 = sub_4a7f2a(i_6, 1, i_14, 4);
                            i_14 = 4;
                            edx = 1;
                        }

                        if (!eax_9)
                        {
                            i_20 = a3;
                            break;
                        }

                        eax = 4;
                        i_20 -= 1;
                        continue;
                    }
                    case 6:
                    {
                        i_14 = &i_20[0xfffffffe];
                        a3 = i_14;

                        if (i >= 0x31 && i <= 0x39)
                        {
                        label_4ade8f:
                            var_70_1 = 9;
                            goto label_4ade91;
                        }

                        int32_t i_8 = i;

                        if (i_8 == 0x2b)
                            goto label_4adec7;

                        if (i_8 == 0x2d)
                            goto label_4adebb;

                        if (i_8 == 0x30)
                            goto label_4ade60;

                        i_20 = i_14;
                        break;
                        break;
                    }
                    case 7:
                    {
                        if (i >= 0x31 && i <= 0x39)
                            goto label_4ade8f;

                        if (i != 0x30)
                        {
                            i_20 = a3;
                            break;
                        }

                    label_4ade60:
                        eax = 8;
                        continue;
                    }
                    case 8:
                    {
                        var_24 = 1;

                        while (i == 0x30)
                        {
                            i = *i_20;
                            i_20 = &i_20[1];
                        }

                        if (i >= 0x31 && i <= 0x39)
                            goto label_4ade8f;

                        i_20 -= 1;
                        break;
                        break;
                    }
                    case 9:
                    {
                        var_24 = 1;
                        int32_t esi_1 = 0;

                        while (true)
                        {
                            BOOL eax_17;

                            if (g_54427c <= 1)
                            {
                                i_14 = g_544070;
                                uint32_t i_11 = i;
                                i_11 = *(i_14 + (i_11 << 1));
                                eax_17 = i_11 & 4;
                            }
                            else
                            {
                                uint32_t i_10 = i;
                                uint32_t i_18 = i_10;
                                eax_17 = sub_4a7f2a(i_10, edx, i_14, 4);
                                i_14 = 4;
                            }

                            if (!eax_17)
                                break;

                            i_14 = i;
                            esi_1 = i_14 + esi_1 * 0xa - 0x30;

                            if (esi_1 > 0x1450)
                            {
                                esi_1 = 0x1451;
                                break;
                            }

                            i = *i_20;
                            i_20 = &i_20[1];
                        }

                        var_20 = esi_1;

                        while (true)
                        {
                            BOOL eax_19;

                            if (g_54427c <= 1)
                            {
                                i_14 = g_544070;
                                uint32_t i_13 = i;
                                i_13 = *(i_14 + (i_13 << 1));
                                eax_19 = i_13 & 4;
                            }
                            else
                            {
                                uint32_t i_12 = i;
                                uint32_t i_19 = i_12;
                                eax_19 = sub_4a7f2a(i_12, edx, i_14, 4);
                                i_14 = 4;
                            }

                            if (!eax_19)
                                break;

                            i = *i_20;
                            i_20 = &i_20[1];
                        }

                        i_20 -= 1;
                        break;
                        break;
                    }
                    case 0xb:
                    {
                        if (!a7)
                        {
                            i_20 -= 1;
                            eax = 0xa;
                        }
                        else
                        {
                            int32_t i_9 = i;
                            i_14 = &i_20[0xffffffff];
                            a3 = i_14;

                            if (i_9 == 0x2b)
                            {
                            label_4adec7:
                                eax = 7;
                                continue;
                            }
                            else
                            {
                                if (i_9 != 0x2d)
                                {
                                    i_20 = i_14;
                                    break;
                                }

                            label_4adebb:
                                var_1c = 0xffffffff;
                                eax = 7;
                                continue;
                            }
                        }
                        break;
                    }
                }

                if (eax == 0xa)
                    break;
            }

            *a2 = i_20;
            int16_t eax_25;
            int16_t edx_1;
            int32_t ebx_1;
            int32_t esi_2;

            if (!var_14)
            {
                edx_1 = 0;
                eax_25 = 0;
                esi_2 = 0;
                ebx_1 = 0;
                result = 4;
            }
            else
            {
                char* eax_22;

                if (var_8 <= 0x18)
                    eax_22 = var_10;
                else
                {
                    char var_49;

                    if (var_49 >= 5)
                        char var_49_1 = var_49 + 1;

                    var_8 = 0x18;
                    eax_22 = var_10 - 1;
                    var_c += 1;
                }

                if (var_8 <= 0)
                {
                    edx_1 = 0;
                    eax_25 = 0;
                    esi_2 = 0;
                    ebx_1 = 0;
                }
                else
                {
                    while (true)
                    {
                        eax_22 -= 1;

                        if (*eax_22)
                            break;

                        var_8 -= 1;
                        var_c += 1;
                    }

                    int32_t var_44;
                    sub_4adb32(&var_60, var_8, &var_44);
                    int32_t eax_23 = var_20;

                    if (var_1c < 0)
                        eax_23 = -(eax_23);

                    int32_t eax_24 = eax_23 + var_c;

                    if (!var_24)
                        eax_24 += a5;

                    if (!var_28)
                        eax_24 -= a6;

                    if (eax_24 <= 0x1450)
                    {
                        if (eax_24 < 0xffffebb0)
                        {
                            var_34 = 1;
                            goto label_4adff8;
                        }

                        sub_4ae5f3(&var_44, eax_24, a4);
                        edx_1 = var_44;
                        ebx_1 = *(&var_44 + 2);
                        int32_t var_3e;
                        esi_2 = var_3e;
                        int16_t var_3a;
                        eax_25 = var_3a;
                    }
                    else
                    {
                        var_30 = 1;
                    label_4adff8:
                        ebx_1 = a3;
                        esi_2 = a3;
                        eax_25 = a3;
                        edx_1 = a3;
                    }
                }

                if (var_30)
                {
                    ebx_1 = 0;
                    eax_25 = 0x7fff;
                    esi_2 = 0x80000000;
                    edx_1 = 0;
                    result = 2;
                }
                else if (var_34)
                {
                    edx_1 = 0;
                    eax_25 = 0;
                    esi_2 = 0;
                    ebx_1 = 0;
                    result = 1;
                }
            }

            *(a1 + 6) = esi_2;
            *(a1 + 2) = ebx_1;
            a1[5] = eax_25 | var_2c;
            *a1 = edx_1;
            return result;
        }

        i_20 = &i_20[1];
    }
}
