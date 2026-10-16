#include "Camera_UpdateViewCone_33.h"
int32_t Camera_UpdateViewCone_33(int32_t* a1, int32_t* a2, char* a3)

{
    void v_a00;

    if (Camera_UpdateTransform_34(&v_a00, a3))
    {
        int32_t srcS1 = 0;
        int32_t v_b28;
        int32_t* v_b44_1 = &v_b28;
        v_b28 = 0;
        int32_t v_b30_1 = 0;
        int32_t v_b20_1 = 0;
        int32_t v_b04_1 = 0;
        int32_t v_b14_1 = 0xffffffff;
        Camera_ResetMatrix_33(a2, v_b44_1);
        void* dstD1 = &v_a00;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD1;
            dstD1 += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t ctxB1 = 0;
        int32_t v_b1c_1 = 0;

        if (~i - 1 <= 0)
        {
        label_4afe4a:
            void* valA38 = &a1[srcS1 * 5];
            *(valA38 + 8) = 0x100;
            *(valA38 + 0x10) = srcS1;
            *(valA38 + 0xc) = srcS1;
            return 1;
        }

        int32_t* objC3 = a1;
        void v_800;
        int32_t* v_b24_1 = &v_800;
        int32_t flagP1 = 1;
        int32_t* tmpD1 = objC3;
        void v_400;
        int32_t* v_b10_1 = &v_400;

        while (true)
        {
            int32_t dstD2 = *(&v_a00 + ctxB1) - 0x24;

            if (dstD2 > 0x59)
                goto label_4afe04;

            int32_t valA3 = 0;
            valA3 = lookup_table_4afea8[dstD2];
            int32_t v_b08;
            int32_t valA31;

            switch (valA3)
            {
                case 0:
                {
                    tmpD1[2] = 0x4000;
                    tmpD1[4] = 0xffffffff;
                    tmpD1[3] = flagP1;
                    break;
                }
                case 1:
                {
                    int32_t objC4 = v_b14_1;
                    tmpD1[2] = 0x8000;
                    *v_b24_1 = objC4;
                    tmpD1[4] = 0xffffffff;
                    tmpD1[3] = flagP1;
                    tmpD1[1] = v_b04_1;
                    v_b14_1 = v_b04_1;
                    *v_b10_1 = srcS1;
                    v_b04_1 += 1;
                    v_b30_1 += 1;
                    *tmpD1 = objC4;
                    v_b10_1 = &v_b10_1[1];
                    v_b24_1 = &v_b24_1[1];
                    break;
                }
                case 2:
                {
                    if (!v_b30_1)
                        return 0;

                    int32_t* valA13 = v_b10_1 - 4;
                    int32_t* objC6 = v_b24_1 - 4;
                    v_b10_1 = valA13;
                    int32_t valA14 = *valA13;
                    v_b24_1 = objC6;
                    int32_t objC7 = *objC6;
                    tmpD1[1] = v_b14_1;
                    v_b14_1 = objC7;
                    *tmpD1 = objC7;
                    v_b08 = valA14;
                    tmpD1[2] = 0x10000;
                    tmpD1[4] = 0xffffffff;
                    tmpD1[3] = flagP1;
                    a1[valA14 * 5 + 4] = flagP1;
                    v_b30_1 -= 1;
                    break;
                }
                case 3:
                {
                    if (flagP1 == 1)
                        return 0;

                    int32_t valA22 = tmpD1[-3];
                    tmpD1 -= 0x14;
                    srcS1 -= 1;
                    flagP1 -= 1;

                    if (valA22 >= 0x100 && !(valA22 & 0x11000))
                        return 0;

                    if (!(valA22 & 0x10000))
                    {
                        tmpD1[3] = srcS1;
                        int32_t valA27 = tmpD1[2];
                        *(&valA27 + 1) |= 2;
                        tmpD1[2] = valA27;
                        tmpD1[4] = flagP1;
                    }
                    else
                    {
                        tmpD1[3] = v_b08;
                        objC3[v_b08 * 5 + 2] |= 0x20000;
                        int32_t valA26 = tmpD1[2];
                        *(&valA26 + 1) |= 2;
                        tmpD1[2] = valA26;
                        tmpD1[4] = flagP1;
                    }
                    break;
                }
                case 4:
                {
                    tmpD1[2] = 0x1000;
                    tmpD1[4] = 0xffffffff;
                    tmpD1[3] = flagP1;
                    break;
                }
                case 5:
                {
                    ctxB1 += 1;
                label_4afe04:
                    valA31 = *(&v_a00 + ctxB1);
                label_4afe0c:
                    tmpD1[2] = valA31;
                    tmpD1[4] = 0xffffffff;
                    tmpD1[3] = flagP1;
                    break;
                }
                case 6:
                {
                    if (flagP1 == 1)
                        return 0;

                    int32_t valA18 = tmpD1[-3];
                    tmpD1 -= 0x14;
                    srcS1 -= 1;
                    flagP1 -= 1;

                    if (valA18 & 0x10000)
                        objC3[v_b08 * 5 + 2] |= 0x20000;

                    tmpD1[3] = flagP1;
                    tmpD1[4] = flagP1;
                    tmpD1[2] |= 0x40000;
                    break;
                }
                case 7:
                {
                    ctxB1 += 1;
                    char v_b00[0x9];
                    __builtin_memset(&v_b00, 0, 0x100);
                    int32_t v_b18_1 = 0;
                    int32_t v_b2c_1 = ctxB1;

                    if (*(&v_a00 + ctxB1) == 0x7e)
                    {
                        ctxB1 += 1;
                        v_b18_1 = 1;
                        v_b2c_1 = ctxB1;
                    }

                    char i_1 = *(&v_a00 + ctxB1);

                    while (i_1 != 0x5d)
                    {
                        if (ctxB1 >= ~i - 1)
                            return 0;

                        void v_9ff;

                        if (i_1 == 0x5c)
                        {
                            int32_t dstD6 = *(&v_9ff + ctxB1);
                            ctxB1 += 1;

                            if (dstD6 > 0x74)
                                v_b00[dstD6] = 1;
                            else
                            {
                                int32_t objC11 = 0;
                                objC11 = lookup_table_4aff18[dstD6];

                                switch (objC11)
                                {
                                    case 0:
                                    {
                                        return 0;
                                        break;
                                    }
                                    case 1:
                                    {
                                        char v_af6_1 = 1;
                                        break;
                                    }
                                    case 2:
                                    {
                                        char v_af3_1 = 1;
                                        break;
                                    }
                                    case 3:
                                    {
                                        char v_af7_1 = 1;
                                        break;
                                    }
                                    case 4:
                                    {
                                        v_b00[dstD6] = 1;
                                        break;
                                    }
                                }
                            }
                        }
                        else if (i_1 == 0x2f)
                        {
                            int32_t valA29 = *(&v_9ff + ctxB1);
                            ctxB1 += 1;
                            v_b00[valA29] = 1;
                        }
                        else if (*(&v_9ff + ctxB1) != 0x2d)
                            v_b00[i_1] = 1;
                        else
                        {
                            char v_9fe[0x1fe];
                            int32_t objC12 = v_9fe[ctxB1];
                            ctxB1 += 2;
                            int32_t i_4 = i_1;

                            if (i_4 >= objC12)
                                return 0;

                            srcS1 = v_b1c_1;
                            int32_t saved_dst;
                            __builtin_memset(
                                __builtin_memset(&saved_dst + i_4 + 0x40, 0x1010101,
                                    (objC12 - i_4 + 1) & 0xfffffffc),
                                1, (objC12 - i_4 + 1) & 3);
                        }

                        i_1 = *(&v_9ff + ctxB1);
                        ctxB1 += 1;
                        v_b2c_1 = ctxB1;
                    }

                    if (v_b18_1)
                    {
                        for (int32_t i_2 = 0; i_2 < 0x100; i_2 += 1)
                            v_b00[i_2] = !v_b00[i_2];

                        srcS1 = v_b1c_1;
                    }

                    int32_t dstD9 = v_b28;
                    valA31 = 0;

                    if (dstD9 > 0)
                    {
                        int32_t* dstD10 = a2;
                        int32_t* v_b18_2 = dstD10;

                        do
                        {
                            int32_t i_3 = 0x40;
                            char (* srcS3)[0x9] = &v_b00;
                            bool cond_6_1 = true;

                            while (i_3)
                            {
                                int32_t f0_1 = *srcS3;
                                int32_t f1_1 = *dstD10;
                                cond_6_1 = f0_1 == f1_1;
                                srcS3 = &(*srcS3)[4];
                                dstD10 = &dstD10[1];
                                i_3 -= 1;

                                if (f0_1 != f1_1)
                                    break;
                            }

                            if (cond_6_1)
                                break;

                            valA31 += 1;
                            dstD10 = &v_b18_2[0x40];
                            v_b18_2 = dstD10;
                        } while (valA31 < v_b28);

                        if (valA31 >= 0x20)
                            return 0;

                        ctxB1 = v_b2c_1;
                        srcS1 = v_b1c_1;
                        dstD9 = v_b28;
                    }

                    if (valA31 == dstD9)
                    {
                        memcpy(&a2[dstD9 * 0x40], &v_b00, 0x100);
                        srcS1 = v_b1c_1;
                        v_b28 += 1;
                    }

                    *(&valA31 + 1) |= 0x10;
                    goto label_4afe0c;
                }
                case 8:
                {
                    tmpD1[2] = 0x2000;
                    tmpD1[4] = 0xffffffff;
                    tmpD1[3] = flagP1;
                    break;
                }
                case 9:
                {
                    if (v_b20_1)
                        return 0;

                    if (v_b30_1)
                        return 0;

                    tmpD1[2] = 0x400;
                    tmpD1[4] = flagP1;
                    tmpD1[3] = flagP1;
                    v_b20_1 = 1;
                    break;
                }
                case 0xa:
                {
                    if (v_b20_1 != 1)
                        return 0;

                    if (v_b30_1)
                        return 0;

                    tmpD1[2] = 0x800;
                    tmpD1[4] = flagP1;
                    tmpD1[3] = flagP1;
                    v_b20_1 = 0;
                    break;
                }
                case 0xb:
                {
                    goto label_4afe04;
                }
            }

            ctxB1 += 1;
            srcS1 += 1;
            flagP1 += 1;
            tmpD1 = &tmpD1[5];
            v_b1c_1 = srcS1;

            if (ctxB1 >= ~i - 1)
                break;

            objC3 = a1;
        }

        if (!v_b20_1 && !v_b30_1)
            goto label_4afe4a;
    }

    return 0;
}
