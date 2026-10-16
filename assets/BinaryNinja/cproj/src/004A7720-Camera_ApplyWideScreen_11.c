#include "gi_platform.h"
#include "004A7720-Camera_ApplyWideScreen_11.h"
int32_t Camera_ApplyWideScreen_11(int32_t* a1, char* a2)

{
    int32_t srcS = 0;
    char ctxB = *a2;
    char* dstD1 = &a2[1];
    int32_t* j_1 = nullptr;
    int32_t i = 0;
    a2 = dstD1;

    if (ctxB)
    {
        int32_t v_14;
        int32_t objC1 = v_14;

        while (i >= 0)
        {
            int32_t valA2;

            if (ctxB < 0x20 || ctxB > 0x78)
                valA2 = 0;
            else
            {
                int32_t valA1 = ctxB;
                valA1 = g_534650[0x10][valA1];
                valA2 = valA1 & 0xf;
            }

            int32_t valA4 = (*(int32_t*)(uintptr_t)(srcS + (valA2 << 3) + 0x534680)) >> 4;
            int32_t v_34_1 = valA4;
            int32_t v_38;
            int32_t v_2c;
            int32_t v_28;
            int32_t v_24;
            int32_t* v_20;
            int16_t* v_8;
            void* arg_c;

            switch (valA4)
            {
                case 0:
                {
                    goto label_4a78c5;
                }
                case 1:
                {
                    v_14 = 0xffffffff;
                    v_38 = 0;
                    v_2c = 0;
                    v_24 = 0;
                    v_20 = nullptr;
                    v_8 = nullptr;
                    v_28 = 0;
                    break;
                }
                case 2:
                {
                    int32_t valA5 = ctxB;

                    if (valA5 == 0x20)
                        v_8 |= 2;
                    else if (valA5 == 0x23)
                        v_8 |= 0x80;
                    else if (valA5 == 0x2b)
                        v_8 |= 1;
                    else if (valA5 == 0x2d)
                        v_8 |= 4;
                    else if (valA5 == 0x30)
                        v_8 |= 8;
                    break;
                }
                case 3:
                {
                    if (ctxB != 0x2a)
                        v_24 = ctxB + v_24 * 0xa - 0x30;
                    else
                    {
                        int32_t valA12 = Camera_UpdateTransform_12(&arg_c);
                        v_24 = valA12;

                        if (valA12 < 0)
                        {
                            v_8 |= 4;
                            v_24 = -(valA12);
                        }
                    }
                    break;
                }
                case 4:
                {
                    v_14 = 0;
                    break;
                }
                case 5:
                {
                    if (ctxB != 0x2a)
                        v_14 = ctxB + objC1 * 0xa - 0x30;
                    else
                    {
                        int32_t valA16 = Camera_UpdateTransform_12(&arg_c);
                        v_14 = valA16;

                        if (valA16 < 0)
                            v_14 = 0xffffffff;
                    }
                    break;
                }
                case 6:
                {
                    if (ctxB == 0x49)
                    {
                        if (*dstD1 != 0x36 || dstD1[1] != 0x34)
                        {
                            v_34_1 = 0;
    label_4a78c5: ;
                            v_28 = 0;

                            if ((*(int32_t*)(uintptr_t)(&(**&g_544070)[ctxB] + 1)) & 0x80)
                            {
                                Camera_ApplyPostProcess_11(ctxB, a1, &i);
                                ctxB = *dstD1;
                                a2 = &dstD1[1];
                            }

                            Camera_ApplyPostProcess_11(ctxB, a1, &i);
                        }
                        else
                        {
                            *(&v_8 + 1) |= 0x80;
                            a2 = &dstD1[2];
                        }
                    }
                    else if (ctxB == 0x68)
                        v_8 |= 0x20;
                    else if (ctxB == 0x6c)
                        v_8 |= 0x10;
                    else if (ctxB == 0x77)
                        *(&v_8 + 1) |= 8;
                    break;
                }
                case 7:
                {
                    int32_t valA22 = ctxB;
                    char v_1a;
                    char* v_c;
                    int32_t* j_4;

                    if (valA22 > 0x67)
                    {
                        int32_t v_30;
                        int32_t v_10;

                        if (valA22 == 0x69)
                        {
    label_4a7c05: ;
                            v_8 |= 0x40;
    label_4a7c09: ;
                            v_10 = 0xa;
    label_4a7c14: ;
                            int32_t valA55;
                            int32_t tmpD3;

                            if (*(&v_8 + 1) & 0x80)
                                valA55 = Camera_SetFieldOfView_12(&arg_c);
                            else if (!(v_8 & 0x20))
                            {
                                void** v_25c_15 = &arg_c;

                                if (!(v_8 & 0x40))
                                {
                                    valA55 = Camera_UpdateTransform_12(v_25c_15);
                                    tmpD3 = 0;
                                }
                                else
                                    tmpD3 = HIGHD(Camera_UpdateTransform_12(v_25c_15));
                                    valA55 = LOWD(Camera_UpdateTransform_12(v_25c_15));
                            }
                            else
                            {
                                void** v_25c_14 = &arg_c;
                                int32_t valA57;

                                if (!(v_8 & 0x40))
                                    valA57 = Camera_UpdateTransform_12(v_25c_14);
                                else
                                    valA57 = Camera_UpdateTransform_12(v_25c_14);

                                tmpD3 = HIGHD(valA57);
                                valA55 = LOWD(valA57);
                            }

                            int32_t srcS4;
                            int32_t dstD6;

                            if (!(v_8 & 0x40) || tmpD3 > 0 || (tmpD3 >= 0 && valA55 >= 0))
                            {
                                srcS4 = valA55;
                                dstD6 = tmpD3;
                            }
                            else
                            {
                                srcS4 = -(valA55);
                                *(&v_8 + 1) |= 1;
                                dstD6 = -((tmpD3 + 0));
                            }

                            if (!(*(&v_8 + 1) & 0x80))
                                dstD6 = 0;

                            if (v_14 >= 0)
                                v_8 &= 0xfffffff7;
                            else
                                v_14 = 1;

                            if (!(srcS4 | dstD6))
                                v_20 = nullptr;

                            char v_4d;
                            char* v_c_1 = &v_4d;

                            while (true)
                            {
                                int32_t valA62 = v_14;
                                v_14 -= 1;

                                if (valA62 <= 0 && !(srcS4 | dstD6))
                                    break;

                                int32_t valA66;
                                uint32_t tmpD6;
                                tmpD6 = HIGHD(v_10);
                                valA66 = LOWD(v_10);
                                int32_t ctxB2 = __aullrem(srcS4, dstD6, valA66, tmpD6) + 0x30;
                                uint32_t valA68;
                                int32_t tmpD7;
                                valA68 = __aulldiv(srcS4, dstD6, valA66, tmpD6);
                                srcS4 = valA68;
                                dstD6 = tmpD7;

                                if (ctxB2 > 0x39)
                                    ctxB2 += v_30;

                                char* valA69 = v_c_1;
                                v_c_1 -= 1;
                                *valA69 = ctxB2;
                            }

                            int32_t* j_5 = &v_4d - v_c_1;
                            v_c = &v_c_1[1];
                            j_1 = j_5;

                            if (!(*(&v_8 + 1) & 2) || (*v_c == 0x30 && j_5))
                                goto label_4a7d2a;

                            v_c -= 1;
                            j_4 = j_5 + 1;
                            *v_c = 0x30;
                            goto label_4a7d27;
                        }

                        if (valA22 != 0x6e)
                        {
                            int32_t valA47 = valA22 - 0x6f;

                            if (valA22 == 0x6f)
                            {
                                v_10 = 8;

                                if (v_8 & 0x80)
                                    *(&v_8 + 1) |= 2;

                                goto label_4a7c14;
                            }

                            if (valA47 == 1)
                            {
                                v_14 = 8;
    label_4a7b9f: ;
                                v_30 = 7;
    label_4a7baa: ;
                                v_10 = 0x10;

                                if (v_8 & 0x80)
                                {
                                    v_1a = 0x30;
                                    v_20 = 2;
                                    char v_19_1 = v_30 + 0x51;
                                }

                                goto label_4a7c14;
                            }

                            if (valA47 != 4)
                            {
                                if (valA47 == 6)
                                    goto label_4a7c09;

                                if (valA47 != 9)
                                    goto label_4a7d2a;

                                v_30 = 0x27;
                                goto label_4a7baa;
                            }
    label_4a794d: ;
                            int32_t srcS1 = v_14;

                            if (srcS1 == 0xffffffff)
                                srcS1 = 0x7fffffff;

                            int16_t* objC7 = Camera_UpdateTransform_12(&arg_c);
                            v_c = objC7;

                            if (!(v_8 & 0x810))
                            {
                                if (!objC7)
                                {
                                    objC7 = g_544068;
                                    v_c = objC7;
                                }

                                int16_t* valA52 = objC7;

                                while (true)
                                {
                                    int32_t tmpD2 = srcS1;
                                    srcS1 -= 1;

                                    if (!tmpD2)
                                        break;

                                    if (!*valA52)
                                        break;

                                    valA52 += 1;
                                }

                                j_4 = valA52 - objC7;
                            }
                            else
                            {
                                if (!objC7)
                                {
                                    objC7 = g_54406c;
                                    v_c = objC7;
                                }

                                v_28 = 1;
                                int16_t* valA30 = objC7;

                                while (true)
                                {
                                    int32_t tmpD1 = srcS1;
                                    srcS1 -= 1;

                                    if (!tmpD1)
                                        break;

                                    if (!*valA30)
                                        break;

                                    valA30 = &valA30[1];
                                }

                                j_4 = (valA30 - objC7) >> 1;
                            }

                            goto label_4a7d27;
                        }

                        int16_t* valA54 = Camera_UpdateTransform_12(&arg_c);

                        if (!(v_8 & 0x20))
                            *valA54 = i;
                        else
                            *valA54 = i;

                        v_2c = 1;
                    }
                    else
                    {
                        if (valA22 >= 0x65)
                            goto label_4a79ae;

                        char* v_25c_8;
                        char v_24c;

                        if (valA22 <= 0x58)
                        {
                            if (valA22 == 0x58)
                                goto label_4a7b9f;

                            if (valA22 == 0x43)
                            {
                                if (!(v_8 & 0x830))
                                    *(&v_8 + 1) |= 8;

                                goto label_4a79e4;
                            }

                            if (valA22 != 0x45 && valA22 != 0x47)
                            {
                                if (valA22 != 0x53)
                                    goto label_4a7d2a;

                                if (!(v_8 & 0x830))
                                    *(&v_8 + 1) |= 8;

                                goto label_4a794d;
                            }

                            v_38 = 1;
                            ctxB += 0x20;
    label_4a79ae: ;
                            v_8 |= 0x40;
                            char* dstD5 = &v_24c;
                            v_c = &v_24c;

                            if (objC1 < 0)
                                v_14 = 6;
                            else if (!objC1 && ctxB == 0x67)
                                v_14 = 1;

                            void* valA42 = arg_c + 8;
                            arg_c = valA42;
                            int32_t v_4c = *(valA42 - 8);
                            int32_t v_48_1 = *(valA42 - 4);
                            g_544050(&v_4c, &v_24c, ctxB, v_14, v_38);
                            void* srcS3 = v_8 & 0x80;

                            if (srcS3 && !v_14)
                                g_54405c(&v_24c);

                            if (ctxB == 0x67 && !srcS3)
                                g_544054(&v_24c);

                            if (v_24c == 0x2d)
                            {
                                *(&v_8 + 1) |= 1;
                                char v_24b;
                                dstD5 = &v_24b;
                                v_c = &v_24b;
                            }

                            v_25c_8 = dstD5;
                            goto label_4a7b20;
                        }

                        if (valA22 != 0x5a)
                        {
                            if (valA22 != 0x63)
                            {
                                if (valA22 == 0x64)
                                    goto label_4a7c05;

                                goto label_4a7d2a;
                            }
    label_4a79e4: ;
                            int32_t* v_25c_6 = &arg_c;

                            if (!(v_8 & 0x810))
                            {
                                v_24c = Camera_UpdateTransform_12(v_25c_6);
                                j_1 = 1;
                            }
                            else
                            {
                                BOOL j_3 = Camera_UpdateViewCone_26(&v_24c, Camera_ApplyLineFilter_12(v_25c_6));
                                j_1 = j_3;

                                if (j_3 < 0)
                                    v_2c = 1;
                            }

                            v_c = &v_24c;
                            goto label_4a7d2a;
                        }

                        int16_t* valA37 = Camera_UpdateTransform_12(&arg_c);
                        char* objC10;

                        if (valA37)
                            objC10 = *(valA37 + 4);

                        if (!valA37 || !objC10)
                        {
                            char* valA40 = g_544068;
                            v_c = valA40;
                            v_25c_8 = valA40;
    label_4a7b20: ;
                            j_4 = Camera_UpdateViewCone_20(v_25c_8);
    label_4a7d27: ;
                            j_1 = j_4;
                            goto label_4a7d2a;
                        }

                        if (!(*(&v_8 + 1) & 8))
                        {
                            v_28 = 0;
                            v_c = objC10;
                            j_4 = *valA37;
                            goto label_4a7d27;
                        }

                        v_c = objC10;
                        j_1 = *valA37 >> 1;
                        v_28 = 1;
    label_4a7d2a: ;
                        if (!v_2c)
                        {
                            if (v_8 & 0x40)
                            {
                                if (*(&v_8 + 1) & 1)
                                {
                                    v_1a = 0x2d;
                                    v_20 = 1;
                                }
                                else if (v_8 & 1)
                                {
                                    v_1a = 0x2b;
                                    v_20 = 1;
                                }
                                else if (v_8 & 2)
                                {
                                    v_1a = 0x20;
                                    v_20 = 1;
                                }
                            }

                            int32_t* srcS7 = v_24 - v_20 - j_1;

                            if (!(v_8 & 0xc))
                                Camera_UpdateViewCone_11(0x20, srcS7, a1, &i);

                            Camera_ResetMatrix_11(&v_1a, v_20, a1, &i);

                            if (v_8 & 8 && !(v_8 & 4))
                                Camera_UpdateViewCone_11(0x30, srcS7, a1, &i);

                            if (!v_28 || j_1 <= 0)
                                Camera_ResetMatrix_11(v_c, j_1, a1, &i);
                            else
                            {
                                int32_t* j = j_1;
                                int16_t* ctxB3 = v_c;
                                int32_t* j_2 = j - 1;

                                do
                                {
                                    j = *ctxB3;
                                    ctxB3 = &ctxB3[1];
                                    char v_3c;
                                    BOOL valA70 = Camera_UpdateViewCone_26(&v_3c, j);

                                    if (valA70 <= 0)
                                        break;

                                    Camera_ResetMatrix_11(&v_3c, valA70, a1, &i);
                                    j = j_2;
                                    j_2 -= 1;
                                } while (j);
                            }

                            if (v_8 & 4)
                                Camera_UpdateViewCone_11(0x20, srcS7, a1, &i);
                        }
                    }
                    break;
                }
            }

            ctxB = *a2;
            dstD1 = &a2[1];
            a2 = dstD1;

            if (!ctxB)
                break;

            objC1 = v_14;
            srcS = v_34_1;
        }
    }

    return i;
}
