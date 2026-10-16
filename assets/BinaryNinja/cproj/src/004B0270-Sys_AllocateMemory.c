#include "gi_platform.h"
#include "004B0270-Sys_AllocateMemory.h"
int32_t Sys_AllocateMemory(int32_t* a1, int32_t* a2, int32_t a3, int32_t* a4, int32_t a5, int32_t a6)

{
    int32_t dstD = a3;
    int32_t i = 0xffffffff;
    g_9422e0 = 0;
    g_9422e4 = 0;
    void* tmpD = nullptr;
    int32_t srcS = 0;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    void* v_24;
    __builtin_memset(&v_24, 0, 0x18);
    void* v_8 = nullptr;

    if (a2)
        *a2 = 0;

    if (a1)
        *a1 = 0xffffffff;

    int32_t* dstD1 = a4;
    int32_t v_1c;

    while (true)
    {
        int32_t v_20;

        if (v_20 < 0x200)
        {
            if (srcS != 0xffffffff)
                goto label_4b034a;

            int32_t v_18;
            int32_t v_4;

            if (Sys_ReadFileBlock(0x93dae0, &v_20, &v_4, &v_24, &v_1c, &v_18))
            {
                int32_t v_38_2 = v_20;
                void* v_3c_2 = v_24;
                int32_t valA4 = Sys_CloseFileStream(dstD1, v_4, 0);
                int32_t v_10_1 = v_1c;
                tmpD = v_24;
                srcS = valA4;
                int32_t v_14_1 = 0;
    label_4b034a: ;
                int32_t* objC3 = &dstD1[srcS * 5];
                a4 = objC3;
                int32_t valA6 = objC3[2];

                if (valA6 == 0x100)
                    break;

                if (valA6 != 0x800)
                {
                    int32_t v_40_2;

                    if (valA6 != 0x2000)
                    {
                        if (valA6 == 0x4000)
                        {
                            if (tmpD < ~i - 1)
                            {
    label_4b0506: ;
                                int32_t v_38_12 = v_20;
                                goto label_4b0507;
                            }

                            int32_t v_38_6 = v_20;
                            void* v_3c_5 = tmpD;
                            v_40_2 = 1;
                            goto label_4b050b;
                        }

                        if (*(&valA6 + 1) & 0x80)
                        {
                            v_14_1 = 0;
                            *((objC3[1] << 2) + &g_93d2e0) = 0;

                            if (objC3[2] & 0x20000)
                            {
                                Sys_OpenFileStream(0x93dae0, &v_20, srcS, tmpD, v_1c, v_18);
                                tmpD = v_24;
                            }

                            int32_t v_38_8 = v_20;
                            void* v_3c_7 = tmpD;
                            int32_t valA17 = Sys_CloseFileStream(dstD1, srcS, 1);
                            tmpD = v_24;
                            srcS = valA17;
                            v_18 += 1;
                            continue;
                        }
                        else if (valA6 & 0x10000)
                        {
                            int32_t valA20 = *objC3;
                            int32_t flagP1 = objC3[1];

                            if (valA20 >= 0)
                                *((valA20 << 2) + &g_93d2e0) += v_14_1;

                            int32_t v_40_4;

                            if (v_14_1)
                            {
    label_4b0489: ;
                                int32_t v_38_10 = v_20;
                                void* v_3c_9 = tmpD;
                                v_40_4 = 1;
                            }
                            else
                            {
                                int32_t valA21 = *((flagP1 << 2) + &g_93d2e0);
                                v_14_1 = valA21;

                                if (valA21)
                                    goto label_4b0489;

                                int32_t v_38_9 = v_20;
                                void* v_3c_8 = tmpD;
                                v_40_4 = 0;
                            }

                            int32_t valA23 = Sys_CloseFileStream(dstD1, srcS, v_40_4);
                            tmpD = v_24;
                            srcS = valA23;
                            v_18 -= 1;
                            continue;
                        }
                        else if (valA6 != 0x400)
                        {
                            if (tmpD < ~i - 1)
                            {
                                int32_t flagP5 = (*(int32_t*)(uintptr_t)(tmpD + a3));
                                int32_t ctxB1;

                                if (*(&valA6 + 1) & 0x10)
                                {
                                    int32_t valA33 = Sys_FreeMemory(flagP5, a5, valA6 & 0xff);
                                    tmpD = v_24;
                                    objC3 = a4;
                                    ctxB1 = valA33;
                                }
                                else if (!a6)
                                {
                                    ctxB1 = 0;
                                    ctxB1 = (valA6 & 0xff) == flagP5;
                                }
                                else
                                {
                                    int32_t v_38_14 = valA6 & 0xff;
                                    uint32_t valA35;
                                    int32_t objC13;
                                    valA35 = Camera_ApplyWideScreen_28(objC3);
                                    int32_t v_3c_13 = flagP5;
                                    uint32_t valA36 = Camera_ApplyWideScreen_28(objC13);
                                    tmpD = v_24;
                                    int32_t objC14 = 0;
                                    objC14 = valA35 == valA36;
                                    ctxB1 = objC14;
                                    objC3 = a4;
                                }

                                if (*(&objC3[2] + 1) & 2 && ctxB1)
                                {
                                    Sys_OpenFileStream(0x93dae0, &v_20, srcS, tmpD, v_1c, v_18);
                                    tmpD = v_24;
                                    objC3 = a4;
                                }

                                if (objC3[2] & 0x40000 && ctxB1)
                                {
                                    Sys_OpenFileStream(0x93dae0, &v_20, srcS, tmpD, v_1c, v_18);
                                    tmpD = v_24;
                                }

                                int32_t v_38_17 = v_20;
                                void* v_3c_16 = tmpD;
                                srcS = Sys_CloseFileStream(dstD1, srcS, ctxB1);

                                if (!ctxB1)
                                {
                                    tmpD = v_24;
                                    continue;
                                }
                                else
                                {
                                    tmpD = v_24 + 1;
                                    v_14_1 += 1;
                                    v_24 = tmpD;
                                    continue;
                                }
                            }

                            goto label_4b0506;
                        }
                    }
                    else
                    {
                        if (tmpD)
                        {
                            int32_t v_38_4 = v_20;
    label_4b0507: ;
                            void* v_3c_11 = tmpD;
                            v_40_2 = 0;
                            goto label_4b050b;
                        }

                        int32_t v_38_5 = v_20;
                        int32_t v_3c_4 = 0;
                        v_40_2 = 1;
    label_4b050b: ;
                        int32_t valA31 = Sys_CloseFileStream(dstD1, srcS, v_40_2);
                        tmpD = v_24;
                        srcS = valA31;
                        continue;
                    }
                    int32_t valA26 = v_1c;
                    *((valA26 << 3) + &g_93aa88) = tmpD;
                    *((valA26 << 3) + &g_93aa8c) = 0;
                    int32_t v_38_11 = v_20;
                    void* v_3c_10 = tmpD;
                    srcS = Sys_CloseFileStream(dstD1, srcS, 1);
                    bool cond_4_1 = v_1c + 1 >= 0xa;
                    v_10_1 += 1;
                    v_1c += 1;

                    if (!cond_4_1)
                    {
                        tmpD = v_24;
                        continue;
                    }
                }
                else
                {
                    int32_t v_38_3 = v_20;
                    void* v_3c_3 = tmpD;
                    srcS = Sys_CloseFileStream(dstD1, srcS, 1);
                    bool cond_2_1 = v_10_1 - 1 < 0;
                    v_10_1 -= 1;

                    if (!cond_2_1)
                    {
                        int32_t valA10 = v_1c;
                        tmpD = v_24;
                        *((valA10 << 3) + &g_93aa84) = tmpD - *((valA10 << 3) + &g_93aa80) + 1;
                        continue;
                    }
                }
            }
        }

        return 0;
    }

    if (tmpD >= 0)
        v_8 = tmpD;

    if (a2)
        *a2 = v_1c;

    int32_t tmpD5 = v_1c;
    g_9422e0 = &g_93aa88;
    g_9422e4 = tmpD5;

    if (a1)
        *a1 = v_8;

    return 1;
}
