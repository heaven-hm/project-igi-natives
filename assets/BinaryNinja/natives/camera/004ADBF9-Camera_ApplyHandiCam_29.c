// Original IGI.EXE function: Camera_ApplyHandiCam_29 (VA 0x004ADBF9; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_29.h"
int32_t Camera_ApplyHandiCam_29(int16_t* a1, char** a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)

{
    int32_t ctxB;
    int32_t v_64 = ctxB;
    char* i_20 = a3;
    void v_60;
    char* v_10 = &v_60;
    int32_t valA = 0;
    int32_t tmpD = 1;
    int16_t v_2c = 0;
    int32_t v_1c = 1;
    int32_t v_8 = 0;
    int32_t v_14 = 0;
    int32_t v_28 = 0;
    int32_t v_24 = 0;
    int32_t v_30 = 0;
    int32_t v_34 = 0;
    int32_t v_20 = 0;
    int32_t v_c = 0;
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
                int32_t v_70_1;

                switch (valA)
                {
                    case 0:
                    {
                        if (i >= 0x31 && i <= 0x39)
                        {
                        label_4adc6d:
                            v_70_1 = 3;
                        label_4ade91:
                            valA = v_70_1;
                            i_20 -= 1;
                            continue;
                        }
                        else if (i != g_544280)
                        {
                            int32_t i_1 = i;

                            if (i_1 == 0x2b)
                            {
                                v_2c = 0;
                                valA = 2;
                                continue;
                            }
                            else if (i_1 == 0x2d)
                            {
                                v_2c = -0x8000;
                                valA = 2;
                                continue;
                            }
                            else
                            {
                                if (i_1 != 0x30)
                                {
                                    i_20 -= 1;
                                    break;
                                }

                                valA = 1;
                                continue;
                            }
                        }
                        else
                        {
                        label_4adc7c:
                            valA = 5;
                            continue;
                        }
                        break;
                    }
                    case 1:
                    {
                        v_14 = 1;

                        if (i >= 0x31 && i <= 0x39)
                            goto label_4adc6d;

                        if (i == g_544280)
                        {
                            valA = 4;
                            continue;
                        }
                        else if (i == 0x2b || i == 0x2d)
                        {
                        label_4add01:
                            i_20 -= 1;
                            valA = 0xb;
                            continue;
                        }
                        else if (i == 0x30)
                        {
                            valA = 1;
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

                            valA = 6;
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

                        valA = 1;
                        continue;
                    }
                    case 3:
                    {
                        v_14 = 1;

                        while (true)
                        {
                            BOOL valA5;

                            if (g_54427c <= 1)
                            {
                                i_14 = g_544070;
                                uint32_t i_3 = i;
                                i_3 = *(i_14 + (i_3 << 1));
                                valA5 = i_3 & 4;
                            }
                            else
                            {
                                uint32_t i_2 = i;
                                uint32_t i_15 = i_2;
                                valA5 = Camera_ApplyBandFilter_12(i_2, 1, i_14, 4);
                                i_14 = 4;
                                tmpD = 1;
                            }

                            if (!valA5)
                                break;

                            if (v_8 >= 0x19)
                                v_c += 1;
                            else
                            {
                                char* valA6 = v_10;
                                v_8 += 1;
                                v_10 = &v_10[1];
                                *valA6 = i - 0x30;
                            }

                            i = *i_20;
                            i_20 = &i_20[1];
                        }

                        if (i == g_544280)
                        {
                            valA = 4;
                            continue;
                        }

                    label_4addee:

                        if (i == 0x2b || i == 0x2d)
                            goto label_4add01;

                        goto label_4adcda;
                    }
                    case 4:
                    {
                        v_14 = 1;
                        v_28 = 1;

                        if (!v_8)
                        {
                            while (i == 0x30)
                            {
                                v_c -= 1;
                                i = *i_20;
                                i_20 = &i_20[1];
                            }
                        }

                        while (true)
                        {
                            BOOL valA7;

                            if (g_54427c <= 1)
                            {
                                i_14 = g_544070;
                                uint32_t i_5 = i;
                                i_5 = *(i_14 + (i_5 << 1));
                                valA7 = i_5 & 4;
                            }
                            else
                            {
                                uint32_t i_4 = i;
                                uint32_t i_16 = i_4;
                                valA7 = Camera_ApplyBandFilter_12(i_4, 1, i_14, 4);
                                i_14 = 4;
                                tmpD = 1;
                            }

                            if (!valA7)
                                break;

                            if (v_8 < 0x19)
                            {
                                char* valA8 = v_10;
                                v_8 += 1;
                                v_10 = &v_10[1];
                                v_c -= 1;
                                *valA8 = i - 0x30;
                            }

                            i = *i_20;
                            i_20 = &i_20[1];
                        }

                        goto label_4addee;
                    }
                    case 5:
                    {
                        v_28 = 1;
                        BOOL valA9;

                        if (g_54427c <= 1)
                        {
                            i_14 = g_544070;
                            uint32_t i_7 = i;
                            i_7 = *(i_14 + (i_7 << 1));
                            valA9 = i_7 & 4;
                        }
                        else
                        {
                            uint32_t i_6 = i;
                            uint32_t i_17 = i_6;
                            valA9 = Camera_ApplyBandFilter_12(i_6, 1, i_14, 4);
                            i_14 = 4;
                            tmpD = 1;
                        }

                        if (!valA9)
                        {
                            i_20 = a3;
                            break;
                        }

                        valA = 4;
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
                            v_70_1 = 9;
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
                        valA = 8;
                        continue;
                    }
                    case 8:
                    {
                        v_24 = 1;

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
                        v_24 = 1;
                        int32_t srcS1 = 0;

                        while (true)
                        {
                            BOOL valA17;

                            if (g_54427c <= 1)
                            {
                                i_14 = g_544070;
                                uint32_t i_11 = i;
                                i_11 = *(i_14 + (i_11 << 1));
                                valA17 = i_11 & 4;
                            }
                            else
                            {
                                uint32_t i_10 = i;
                                uint32_t i_18 = i_10;
                                valA17 = Camera_ApplyBandFilter_12(i_10, tmpD, i_14, 4);
                                i_14 = 4;
                            }

                            if (!valA17)
                                break;

                            i_14 = i;
                            srcS1 = i_14 + srcS1 * 0xa - 0x30;

                            if (srcS1 > 0x1450)
                            {
                                srcS1 = 0x1451;
                                break;
                            }

                            i = *i_20;
                            i_20 = &i_20[1];
                        }

                        v_20 = srcS1;

                        while (true)
                        {
                            BOOL valA19;

                            if (g_54427c <= 1)
                            {
                                i_14 = g_544070;
                                uint32_t i_13 = i;
                                i_13 = *(i_14 + (i_13 << 1));
                                valA19 = i_13 & 4;
                            }
                            else
                            {
                                uint32_t i_12 = i;
                                uint32_t i_19 = i_12;
                                valA19 = Camera_ApplyBandFilter_12(i_12, tmpD, i_14, 4);
                                i_14 = 4;
                            }

                            if (!valA19)
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
                            valA = 0xa;
                        }
                        else
                        {
                            int32_t i_9 = i;
                            i_14 = &i_20[0xffffffff];
                            a3 = i_14;

                            if (i_9 == 0x2b)
                            {
                            label_4adec7:
                                valA = 7;
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
                                v_1c = 0xffffffff;
                                valA = 7;
                                continue;
                            }
                        }
                        break;
                    }
                }

                if (valA == 0xa)
                    break;
            }

            *a2 = i_20;
            int16_t valA25;
            int16_t tmpD1;
            int32_t ctxB1;
            int32_t srcS2;

            if (!v_14)
            {
                tmpD1 = 0;
                valA25 = 0;
                srcS2 = 0;
                ctxB1 = 0;
                result = 4;
            }
            else
            {
                char* valA22;

                if (v_8 <= 0x18)
                    valA22 = v_10;
                else
                {
                    char v_49;

                    if (v_49 >= 5)
                        char v_49_1 = v_49 + 1;

                    v_8 = 0x18;
                    valA22 = v_10 - 1;
                    v_c += 1;
                }

                if (v_8 <= 0)
                {
                    tmpD1 = 0;
                    valA25 = 0;
                    srcS2 = 0;
                    ctxB1 = 0;
                }
                else
                {
                    while (true)
                    {
                        valA22 -= 1;

                        if (*valA22)
                            break;

                        v_8 -= 1;
                        v_c += 1;
                    }

                    int32_t v_44;
                    Camera_ApplyBandFilter_29(&v_60, v_8, &v_44);
                    int32_t valA23 = v_20;

                    if (v_1c < 0)
                        valA23 = -(valA23);

                    int32_t valA24 = valA23 + v_c;

                    if (!v_24)
                        valA24 += a5;

                    if (!v_28)
                        valA24 -= a6;

                    if (valA24 <= 0x1450)
                    {
                        if (valA24 < 0xffffebb0)
                        {
                            v_34 = 1;
                            goto label_4adff8;
                        }

                        Camera_UpdateViewCone_29(&v_44, valA24, a4);
                        tmpD1 = v_44;
                        ctxB1 = *(&v_44 + 2);
                        int32_t v_3e;
                        srcS2 = v_3e;
                        int16_t v_3a;
                        valA25 = v_3a;
                    }
                    else
                    {
                        v_30 = 1;
                    label_4adff8:
                        ctxB1 = a3;
                        srcS2 = a3;
                        valA25 = a3;
                        tmpD1 = a3;
                    }
                }

                if (v_30)
                {
                    ctxB1 = 0;
                    valA25 = 0x7fff;
                    srcS2 = 0x80000000;
                    tmpD1 = 0;
                    result = 2;
                }
                else if (v_34)
                {
                    tmpD1 = 0;
                    valA25 = 0;
                    srcS2 = 0;
                    ctxB1 = 0;
                    result = 1;
                }
            }

            *(a1 + 6) = srcS2;
            *(a1 + 2) = ctxB1;
            a1[5] = valA25 | v_2c;
            *a1 = tmpD1;
            return result;
        }

        i_20 = &i_20[1];
    }
}
