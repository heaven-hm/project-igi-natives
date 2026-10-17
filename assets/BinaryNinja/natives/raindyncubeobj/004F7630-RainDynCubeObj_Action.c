// Original IGI.EXE function: RainDynCubeObj_Action (VA 0x004F7630; static CFG gate PASS, CFG score 1.000).
#include "RainDynCubeObj_Action.h"
int32_t RainDynCubeObj_Action(void* a1)

{
    void* dstD = *(a1 + 0xc);
    int32_t result_1 = 7;
    double* srcS = dstD + 0x70;
    float v_44 = *(dstD + 0x2c60) * 0.00787401572f;
    float v_40 = *(dstD + 0x2c64) * 0.00787401572f;
    float v_3c = *(dstD + 0x2c68) * 0.00787401572f;
    int32_t result;
    bool cond_2_1;

    do
    {
        int32_t v_50_1 = 7;
        bool cond_1_1;

        do
        {
            int32_t v_54_1 = 7;
            bool cond_0_1;

            do
            {
                if (*(srcS + 0x14))
                {
                    int32_t v_58_1 = 0;

                    if (*(dstD + 0x2ca8) > 0)
                    {
                        double* v_48_1 = srcS;
                        float** ctxB1 = dstD + 0x2b4c;
                        bool cond_3_1;

                        do
                        {
                            float* valA3 = *ctxB1;
                            int32_t objC;
                            int32_t v_6c_1 = objC;
                            double v_20 = *valA3 + srcS[-1];
                            long double x87_r7_8 = *srcS;
                            double v_18_1 = valA3[1] + x87_r7_8;
                            double v_10_1 = valA3[2] + srcS[1];
                            double v_38 = *valA3 + srcS[-1];
                            double v_30_1 = valA3[1] + x87_r7_8;
                            double v_28_1 = valA3[2] + srcS[1];
                            v_38 = valA3[6] + v_38;
                            double v_30_2 = valA3[7] + v_30_1;
                            long double x87_r7_17 = valA3[8] + v_28_1;
                            v_38 = v_38 - *(dstD + 0x2c54);
                            double v_30_3 = v_30_2 - *(dstD + 0x2c58);
                            double v_28_2 = x87_r7_17 - *(dstD + 0x2c5c);
                            SoundSys_LoadSoundDef(&v_20, &v_38, &v_44, 0f, &v_44, valA3[9] * srcS[2]);
                            objC = *(dstD + 0x2ca8);
                            ctxB1 = &ctxB1[1];
                            cond_3_1 = v_58_1 + 1 < objC;
                            v_58_1 += 1;
                        } while (cond_3_1);
                    }
                }

                srcS = &srcS[4];
                cond_0_1 = v_54_1 != 1;
                v_54_1 -= 1;
            } while (cond_0_1);
            cond_1_1 = v_50_1 != 1;
            v_50_1 -= 1;
        } while (cond_1_1);
        result = result_1 - 1;
        cond_2_1 = result_1 != 1;
        result_1 = result;
    } while (cond_2_1);
    return result;
}
