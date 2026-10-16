#include "Render_DrawSplineMesh_11.h"
int32_t* Render_DrawSplineMesh_11(int32_t* a1)

{
    int32_t* result = a1;
    int32_t dstD = *(result * 0xc + &g_a542f0);
    int32_t v_54 = dstD;

    if (dstD > 0)
    {
        int32_t valA1 = result * 0x28;
        int32_t objC1 = *(valA1 + 0xa53914);
        result = *(valA1 + &g_a538f4);

        if (objC1 > 0)
        {
            int32_t* result_1 = result;
            int32_t v_60_1 = objC1;
            bool cond_1_1;

            do
            {
                void* valA2 = *result;

                if (valA2 && dstD > 0)
                {
                    int32_t* ctxB2 = *(valA2 + 0xc) + 4;
                    int32_t v_68_1 = dstD;
                    bool cond_3_1;

                    do
                    {
                        int32_t srcS1 = ctxB2[-1];
                        int32_t v_6c_1 = srcS1;

                        if (srcS1 > 1 && !ctxB2[1])
                        {
                            int32_t flagP1 = srcS1 << 3;
                            ctxB2[1] = Mem_Alloc(flagP1, 4);

                            if (g_a54678)
                                ctxB2[2] = Mem_Alloc(flagP1, 4);

                            int32_t flagP2 = 0;

                            if (srcS1 > 0)
                            {
                                float* dstD1 = nullptr;

                                do
                                {
                                    int32_t f1_1 = (flagP2 + 1) % srcS1;

                                    if (f1_1 || *(valA2 + 7) & 0x80)
                                    {
                                        int32_t valA14 = *ctxB2;
                                        a1 = nullptr;
                                        float v_3c = *(dstD1 + valA14);
                                        float v_38_1 = *(dstD1 + valA14 + 4);
                                        float v_34_1 = *(dstD1 + valA14 + 8);
                                        int32_t v_2c_1 = 0;
                                        float v_30_1 = *(dstD1 + valA14 + 0xc);
                                        int32_t tmpD5 = ctxB2[1];
                                        int32_t srcS3 = f1_1 * 0x34;
                                        float v_50 = *(srcS3 + valA14);
                                        float v_4c_1 = *(srcS3 + valA14 + 4);
                                        float v_48_1 = *(srcS3 + valA14 + 8);
                                        float* valA15 = tmpD5 + (flagP2 << 3);
                                        float v_44_1 = *(srcS3 + valA14 + 0xc);
                                        int32_t v_40_1 = 0;
                                        Sys_CloseFileStream_13(&a1, valA15, &valA15[1], &v_3c, &v_50);

                                        if (a1)
                                        {
                                            int32_t valA17 = ctxB2[1];
                                            *(valA17 + (flagP2 << 3)) =
                                                *(valA17 + (flagP2 << 3)) + 6.28318548f;
                                        }

                                        if (g_a54678)
                                        {
                                            int32_t valA20 = *ctxB2;
                                            float v_14 = *(dstD1 + valA20 + 0x14);
                                            float v_10_1 = *(dstD1 + valA20 + 0x18);
                                            float v_c_1 = *(dstD1 + valA20 + 0x1c);
                                            int32_t v_4_1 = 0;
                                            float v_8_1 = *(dstD1 + valA20 + 0x20);
                                            float v_28 = *(srcS3 + valA20 + 0x24);
                                            float v_24_1 = *(srcS3 + valA20 + 0x28);
                                            float v_20_1 = *(srcS3 + valA20 + 0x2c);
                                            int32_t v_18_1 = 0;
                                            float v_1c_1 = *(srcS3 + valA20 + 0x30);
                                            float* valA21 = ctxB2[2] + (flagP2 << 3);
                                            Sys_CloseFileStream_13(&a1, valA21, &valA21[1], &v_14, &v_28);

                                            if (a1)
                                            {
                                                int32_t objC5 = ctxB2[2];
                                                *(objC5 + (flagP2 << 3)) =
                                                    *(objC5 + (flagP2 << 3)) + 6.28318548f;
                                            }
                                        }

                                        srcS1 = v_6c_1;
                                    }
                                    else
                                    {
                                        *(ctxB2[1] + (flagP2 << 3)) = 0;
                                        *(ctxB2[1] + (flagP2 << 3) + 4) = 0;

                                        if (g_a54678)
                                        {
                                            *(ctxB2[2] + (flagP2 << 3)) = 0;
                                            *(ctxB2[2] + (flagP2 << 3) + 4) = 0;
                                        }
                                    }

                                    flagP2 += 1;
                                    dstD1 = &dstD1[0xd];
                                } while (flagP2 < srcS1);

                                dstD = v_54;
                            }
                        }

                        ctxB2 = &ctxB2[4];
                        cond_3_1 = v_68_1 != 1;
                        v_68_1 -= 1;
                    } while (cond_3_1);
                }

                result = &result_1[1];
                cond_1_1 = v_60_1 != 1;
                result_1 = result;
                v_60_1 -= 1;
            } while (cond_1_1);
        }
    }

    return result;
}
