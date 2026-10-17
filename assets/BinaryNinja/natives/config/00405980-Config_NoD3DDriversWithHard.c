// Original IGI.EXE function: Config_NoD3DDriversWithHard (VA 0x00405980; static CFG gate FAIL, CFG score 0.733).
#include "Config_NoD3DDriversWithHard.h"
int32_t Config_NoD3DDriversWithHard()

{
    int32_t result = g_bc2380;
    int32_t* ctxB;
    int32_t* v_18 = ctxB;
    int32_t result_1 = 0;

    if (result > 0)
    {
        int32_t* tmpD1 = &g_bc2394;
        int32_t* v_c_1 = &g_bc2394;

        while (true)
        {
            int32_t flagP1 = g_567c90;

            if (!flagP1)
            {
                Error_Show("No D3D drivers with hardware acceleration found.");

                while (true)
                    /* nop */
            }
            else
            {
                int32_t v_14_1 = 0;
                int32_t objC10;

                if (flagP1 <= 0)
                {
                label_405a07:
                    int32_t dstD2 = 0x567d18;
                    int32_t i = 0xffffffff;

                    while (i)
                    {
                        bool cond_2_1 = 0 != *dstD2;
                        dstD2 += 1;
                        i -= 1;

                        if (!cond_2_1)
                            break;
                    }

                    int32_t objC2 = ~i;
                    int32_t srcS3;
                    int32_t dstD5;
                    dstD5 = memcpy(tmpD1 + 0x113, dstD2 - objC2, objC2 & 0xfffffffc);
                    memcpy(dstD5, srcS3, objC2 & 3);
                    void* dstD6 = &g_567c98;
                    int32_t i_1 = 0xffffffff;

                    while (i_1)
                    {
                        bool cond_3_1 = 0 != *dstD6;
                        dstD6 += 1;
                        i_1 -= 1;

                        if (!cond_3_1)
                            break;
                    }

                    int32_t objC6 = ~i_1;
                    int32_t srcS5;
                    int32_t dstD9;
                    dstD9 = memcpy(tmpD1 + 0x13, dstD6 - objC6, objC6 & 0xfffffffc);
                    memcpy(dstD9, srcS5, objC6 & 3);
                    objC10 = 0;
                }
                else
                {
                    char* dstD1 = &g_567c98;

                    while (true)
                    {
                        char* srcS1 = dstD1;
                        char* valA = tmpD1 + 0x13;
                        int32_t valA2;

                        while (true)
                        {
                            char ctxB1 = *valA;
                            char f1_1 = *srcS1;
                            bool c_1 = ctxB1 < f1_1;

                            if (ctxB1 == f1_1)
                            {
                                if (!ctxB1)
                                {
                                    valA2 = 0;
                                    break;
                                }

                                ctxB1 = valA[1];
                                char f4_1 = srcS1[1];
                                c_1 = ctxB1 < f4_1;

                                if (ctxB1 == f4_1)
                                {
                                    valA = &valA[2];
                                    srcS1 = &srcS1[2];

                                    if (ctxB1)
                                        continue;

                                    valA2 = 0;
                                    break;
                                }
                            }

                            valA2 = valA - valA + 1;
                            break;
                        }

                        if (!valA2)
                        {
                            objC10 = v_14_1;
                            break;
                        }

                        dstD1 = &dstD1[0x404];
                        bool cond_5_1 = v_14_1 + 1 < flagP1;
                        v_14_1 += 1;

                        if (!cond_5_1)
                            goto label_405a07;
                    }
                }

                ctxB = nullptr;
                int32_t valA12 = objC10 * 0x404;
                int32_t dstD10 = 0x7fffffff;
                int32_t* srcS6 = valA12 + 0x567d98;
                int32_t valA13 = *(valA12 + &g_568098);

                if (valA13 > 0)
                {
                    int32_t v_14_2 = valA13;
                    bool cond_6_1;

                    do
                    {
                        int32_t valA16;
                        int32_t tmpD2;
                        tmpD2 = HIGHD(srcS6[2] - tmpD1[2]);
                        valA16 = LOWD(srcS6[2] - tmpD1[2]);
                        int32_t valA19;
                        int32_t tmpD4;
                        tmpD4 = HIGHD(srcS6[1] - tmpD1[1]);
                        valA19 = LOWD(srcS6[1] - tmpD1[1]);
                        int32_t valA24;
                        int32_t tmpD5;
                        tmpD5 = HIGHD(*srcS6 - *tmpD1);
                        valA24 = LOWD(*srcS6 - *tmpD1);
                        int32_t objC17 = (((valA16 ^ tmpD2) - tmpD2) << 0x18) + (valA19 ^ tmpD4)
                            - tmpD4 + (valA24 ^ tmpD5) - tmpD5;

                        if (objC17 < dstD10)
                        {
                            ctxB = srcS6;
                            dstD10 = objC17;
                        }

                        srcS6 = &srcS6[3];
                        cond_6_1 = v_14_2 != 1;
                        v_14_2 -= 1;
                    } while (cond_6_1);
                    tmpD1 = v_c_1;
                }

                int32_t valA29 = ctxB[1];
                *tmpD1 = *ctxB;
                int32_t objC19 = ctxB[2];
                tmpD1[1] = valA29;
                tmpD1[2] = objC19;
                result = result_1 + 1;
                tmpD1 = &tmpD1[0x159];
                result_1 = result;
                v_c_1 = tmpD1;

                if (result >= g_bc2380)
                    break;
            }
        }
    }

    return result;
}
