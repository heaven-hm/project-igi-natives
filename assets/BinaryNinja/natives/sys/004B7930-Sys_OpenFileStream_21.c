#include "Sys_OpenFileStream_21.h"
int32_t Sys_OpenFileStream_21(float a1, float a2, float a3, float a4, float a5, float a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10)

{
    int32_t* ctxB = a1;
    int32_t* dstD = ctxB[2];
    int32_t valA = Sys_CloseFileStream_17(dstD);
    int32_t valA1 = Sys_ExecuteBytecode_17(dstD);
    float v_20 = a3;
    int32_t valA3 = *ctxB;
    int32_t srcS = 0;

    if (!valA3)
    {
        int32_t objC1 = 0;
        int32_t v_18_1 = 0;
        a3 = 0f;

        if (*(ctxB + 6) > 0)
        {
            int32_t srcS2 = a9 & 0x80;
            int32_t v_10_1 = srcS2;
            int32_t valA15;

            do
            {
                if (srcS2)
                {
                    int32_t valA5;
                    int32_t tmpD2;
                    tmpD2 = HIGHD(*(ctxB[3] + (objC1 << 1)));
                    valA5 = LOWD(*(ctxB[3] + (objC1 << 1)));
                    a1 = a2 - ((valA5 - tmpD2) >> 1);
                }
                else if (!(a9 & 0x100))
                    a1 = a2;
                else
                    a1 = a2 - *(ctxB[3] + (objC1 << 1));

                int32_t v_1c_1 = 0;

                if (ctxB[1] > 0)
                {
                    bool cond_6_1;

                    do
                    {
                        char valA8 = *(a3 + ctxB + 0x10);

                        if (valA8)
                        {
                            Sys_AllocateMemory_15(dstD, a1, v_20, a4, a5, a6, a7, a8, valA8 - 1,
                                a9, a10);
                            objC1 = v_18_1;
                        }

                        a1 = valA + a1;
                        a3 += 1;
                        cond_6_1 = v_1c_1 + 1 < ctxB[1];
                        v_1c_1 += 1;
                    } while (cond_6_1);
                    srcS2 = v_10_1;
                }

                valA15 = *(ctxB + 6);
                objC1 += 1;
                v_18_1 = objC1;
                v_20 = valA1 + v_20;
            } while (objC1 < valA15);

            return valA15;
        }
    }
    else if (valA3 == 1)
    {
        valA3 = Sys_DispatchOpcode_17(dstD);
        int32_t v_14_1 = valA3;
        int32_t v_18_2 = 0;
        a3 = 0f;

        if (*(ctxB + 6) > 0)
        {
            int32_t objC5 = a9;
            int32_t flagP3 = objC5 & 0x80;
            int32_t v_10_2 = flagP3;

            do
            {
                if (flagP3)
                {
                    int32_t valA17;
                    int32_t tmpD9;
                    tmpD9 = HIGHD(*(ctxB[3] + (srcS << 1)));
                    valA17 = LOWD(*(ctxB[3] + (srcS << 1)));
                    a1 = a2 - ((valA17 - tmpD9) >> 1);
                }
                else if (!(*(&objC5 + 1) & 1))
                    a1 = a2;
                else
                    a1 = a2 - *(ctxB[3] + (srcS << 1));

                float v_1c_2 = 0f;

                if (ctxB[1] > 0)
                {
                    bool cond_7_1;

                    do
                    {
                        char valA20 = *(a3 + ctxB + 0x10);

                        if (!valA20)
                            a1 = v_14_1 + a1;
                        else
                        {
                            uint32_t srcS5 = valA20 - 1;
                            Sys_AllocateMemory_15(dstD, a1, v_20, a4, a5, a6, a7, a8, srcS5,
                                objC5, a10);
                            srcS = v_18_2;
                            objC5 = a9;
                            a1 = *(dstD[2] + srcS5 * 0x24 + 0x10) + a1;
                        }

                        a3 += 1;
                        cond_7_1 = v_1c_2 + 1 < ctxB[1];
                        v_1c_2 += 1;
                    } while (cond_7_1);
                    flagP3 = v_10_2;
                }

                valA3 = *(ctxB + 6);
                srcS += 1;
                v_18_2 = srcS;
                v_20 = valA1 + v_20;
            } while (srcS < valA3);
        }
    }

    return valA3;
}
