// Original IGI.EXE function: TypeWriterBox_LoadParameters (VA 0x0041A6D0; static CFG gate PASS, CFG score 1.000).
#include "TypeWriterBox_LoadParameters.h"
int32_t TypeWriterBox_LoadParameters(void* a1)

{
    long double x87_r7_1 = (Menu_FormatScreen_4(*(a1 + 0x44)) - 8) * 0.125f;
    long double f2 = 0f;
    x87_r7_1 - f2;
    float v_128;

    v_128 = *(&((x87_r7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2) ? 1 : 0) << 0xa
        | (x87_r7_1 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0f : x87_r7_1;

    void* ctxB = *(a1 + 0x64);
    int32_t objC = *(a1 + 0x5c);
    void* v_114 = ctxB;

    if ((ctxB - 1) % objC != *(a1 + 0x60))
    {
        int32_t* v_120_1 = ctxB - 1;
        int32_t* valA34;

        do
        {
            int32_t objC1 = ctxB % objC * 9;
            int32_t tmpD4 = *(a1 + 0x58);
            int32_t* flagP1 = tmpD4 + (objC1 << 2);
            int32_t* srcS = *(a1 + (*(tmpD4 + (objC1 << 2) + 0xc) << 2) + 0x78);

            if (srcS)
            {
                int32_t ctxB1 = *flagP1;
                int32_t valA12 = flagP1[2] * 0xc;
                float v_12c_1 = *(valA12 + 0x53b778);
                float v_11c_1 = *(valA12 + 0x53b780);
                float v_124_1 = *(valA12 + 0x53b77c);
                float v_118_1 = v_128;

                if (flagP1[1] != 0xffffffff)
                {
                    if (*(a1 + 0x74))
                    {
                        int32_t valA16 = *(a1 + 0x6c);

                        if (valA16 < 0x10)
                            v_118_1 = valA16 * v_128 * 0.0625f;

                        if (valA16 < 0x20)
                        {
                            int32_t tmpD6 = 0;
                            tmpD6 = valA16 - 0x10 < 0;
                            long double x87_r7_7 = ((tmpD6 - 1) & (valA16 - 0x10)) * 0.0625f;
                            v_12c_1 = (v_12c_1 - 128f) * x87_r7_7 + 128f;
                            v_124_1 = (v_124_1 - 128f) * x87_r7_7 + 128f;
                            v_11c_1 = (v_11c_1 - 128f) * x87_r7_7 + 128f;
                        }
                    }

                    Sys_FreeMemory_18(srcS, flagP1[8]);
                    int32_t v_130_3;

                    if (!ctxB1)
                    {
                        int32_t valA19 = Sys_CheckHeap_21(srcS);
                        v_130_3 = (*(a1 + 0x28) - valA19) >> 1;
                    }
                    else if (ctxB1 >= 0)
                        v_130_3 = ctxB1 + 8;
                    else
                    {
                        int32_t valA20 = Sys_CheckHeap_21(srcS);
                        v_130_3 = ctxB1 + *(a1 + 0x28) - valA20 - 8;
                    }

                    int32_t objC8 = srcS[9] | 0x80000;
                    srcS[1] = *(a1 + 0x20) + v_130_3;
                    long double x87_r7_12 = *(a1 + 0x24) + flagP1[1];
                    srcS[9] = objC8;
                    srcS[4] = v_118_1;
                    srcS[5] = v_12c_1;
                    srcS[6] = v_124_1;
                    srcS[7] = v_11c_1;
                    srcS[2] = x87_r7_12;

                    if (v_114 == *(a1 + 0x60))
                    {
                        char v_100[0x100];
                        Camera_ApplyLineFilter_5(&v_100, flagP1[8], *(a1 + 0x68));
                        v_100[*(a1 + 0x68)] = 0;
                        Sys_FreeMemory_18(srcS, &v_100);
                        Sys_CloseFileStream_18(srcS);

                        if (*(a1 + 0x70) & 8)
                        {
                            int32_t valA28 = Sys_CheckHeap_21(srcS) + srcS[1];
                            int32_t v_110_1 = srcS[2];
                            int32_t valA30 = Sys_AllocateMemory_22(srcS);
                            float v_15c_1 = v_124_1;
                            float v_160_1 = v_124_1;
                            float v_164_1 = v_124_1;
                            float v_168_1 = v_124_1;
                            Sys_ExecuteBytecode_14(valA28, v_110_1, (valA30 * 3) >> 2, valA30, v_12c_1,
                                v_124_1, v_11c_1, v_118_1, 0x80000, 0);
                        }
                    }
                    else
                        Sys_CloseFileStream_18(srcS);
                }
            }

            objC = *(a1 + 0x5c);
            ctxB = v_114 + 1;
            valA34 = v_120_1 + 1;
            v_114 = ctxB;
            v_120_1 = valA34;
        } while (valA34 % objC != *(a1 + 0x60));
    }

    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(a1);
    return Menu_DrawWidget_14(a1, 0.5f, v_128, 0);
}
