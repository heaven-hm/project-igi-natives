// Original IGI.EXE function: Vehicle_LeftEcco2F2F2F2F (VA 0x00436DA0; static CFG gate PASS, CFG score 0.952).
#include "Vehicle_LeftEcco2F2F2F2F.h"
int32_t Vehicle_LeftEcco2F2F2F2F(void* a1)

{
    float* objC = a1 + 0x4c;
    int32_t i_3 = 4;
    float* v_14c = objC;
    int32_t i;

    do
    {
        long double x87_r7_2 = objC[-4] - 0.0111111114f;
        long double f0_1 = 0f;
        x87_r7_2 - f0_1;

        if (*(&((x87_r7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            x87_r7_2 = 0f;

        objC[-4] = x87_r7_2;
        long double x87_r7_5 = *objC - 0.0111111114f;
        long double f1_1 = 0f;
        x87_r7_5 - f1_1;

        if (*(&((x87_r7_5 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            x87_r7_5 = 0f;

        *objC = x87_r7_5;
        objC = &objC[1];
        i = i_3;
        i_3 -= 1;
    } while (i != 1);
    void* valA2 = g_57bdac;
    int32_t ctxB = 0;
    long double x87_r7_7 = *(valA2 + 8);
    long double fpu6 = *(valA2 + 0x14);
    int32_t objC1 = *(valA2 + 0x20);
    void* v_16c = nullptr;
    long double x87_r5_1 = v_16c - fpu6;
    int32_t v_150 = objC1;
    float v_170 = 0f;
    v_150 = 0;
    float v_164 = x87_r5_1;
    long double x87_r6_3 = v_16c - x87_r7_7;
    float v_178 = v_164;
    v_16c = valA2 + 0x28;
    float v_158 = v_164;
    int32_t i_1 = 0;
    float v_160 = -(x87_r6_3);
    float tmpD = v_160;
    v_178 = -(v_164);
    float v_154 = tmpD;
    float v_174_1 = -(tmpD);
    float v_170_1 = -(v_170);
    double v_148;

    do
    {
        int32_t saved_dst;
        double* tmpD1 = &saved_dst + i_1 + 0x70;
        memcpy(tmpD1, v_16c, 0x18);
        float* srcS2 = &v_158;
        int32_t objC4 = ctxB & 1;

        if (!objC4)
            srcS2 = &v_178;

        *(&v_148 + i_1) = *srcS2;
        float* srcS3 = &v_158;

        if (!objC4)
            srcS3 = &v_178;

        void v_140;
        *(&v_140 + i_1) = srcS3[1];
        float* objC5 = &v_158;

        if (!objC4)
            objC5 = &v_178;

        ctxB += 1;
        void v_138;
        *(&v_138 + i_1) = objC5[2];
        long double x87_r7_19 = *(&v_148 + i_1) * 40960.0;
        i_1 += 0x18;
        *(&v_160 + i_1) = x87_r7_19;
        *(&v_158 + i_1) = *(&v_158 + i_1) * 40960.0;
        *(&v_150 + i_1) = *(&v_150 + i_1) * 40960.0;
        *(&v_160 + i_1) = *(&v_160 + i_1) + *tmpD1;
        void v_128;
        *(&v_158 + i_1) = *(&v_128 + i_1) + *(&v_158 + i_1);
        void v_120;
        *(&v_150 + i_1) = *(&v_120 + i_1) + *(&v_150 + i_1);
    } while (i_1 < 0x30);

    int32_t v_168 = Level_InitTextures_5(0);
    void** v_190 = &v_16c;
    char valA5 = Level_LoadObjects_4();
    double v_118[0x6];
    double* v_1a0 = &v_118;
    int32_t v_1a8 = Level_StartMission_4();
    void v_e8;
    DynObj_FindSymbol_11(v_1a8, &v_e8, v_1a0, &v_148, 2, valA5, v_190, 0x20000000);
    int32_t i_2 = 0;
    void v_88;
    double* srcS4 = &v_88;

    do
    {
        if (srcS4[-1])
        {
            long double x87_r7_30 = *srcS4;
            long double f3_1 = 40960.0;
            x87_r7_30 - f3_1;

            if (*(&((x87_r7_30 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_30, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_30 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                v_178 = *srcS4 * 0.000244140625;
                float valA9 = v_178;
                int32_t objC6;

                if (valA9 <= 1)
                    objC6 = 0;
                else if (valA9 > 2)
                {
                    int32_t objC7 = 0;
                    objC7 = valA9 > 4;
                    objC6 = objC7 + 2;
                }
                else
                    objC6 = 1;

                if (!(i_2 & 1))
                {
                    long double x87_r7_37 = *(a1 + (objC6 << 2) + 0x4c) + 1f;
                    long double f4_1 = 1f;
                    x87_r7_37 - f4_1;

                    if (!(*(&((x87_r7_37 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_37, f4_1) ? 1 : 0) << 0xa
                            | (x87_r7_37 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        x87_r7_37 = 1f;

                    *(a1 + (objC6 << 2) + 0x4c) = x87_r7_37;
                }
                else
                {
                    long double x87_r7_34 = *(a1 + (objC6 << 2) + 0x3c) + 1f;
                    long double f5_1 = 1f;
                    x87_r7_34 - f5_1;

                    if (!(*(&((x87_r7_34 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_34, f5_1) ? 1 : 0) << 0xa
                            | (x87_r7_34 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        x87_r7_34 = 1f;

                    *(a1 + (objC6 << 2) + 0x3c) = x87_r7_34;
                }
            }
        }

        i_2 += 1;
        srcS4 = &srcS4[0xe];
    } while (i_2 < 2);

    v_190 = *(a1 + 0x48);
    v_1a0 = *(a1 + 0x40);
    v_1a8 = *(a1 + 0x3c);
    SoundSys_Update3DPosition_11("Left ecco: %.2f %.2f %.2f %.2f\n");
    v_190 = *(a1 + 0x58);
    v_1a0 = *(a1 + 0x50);
    v_1a8 = *v_14c;
    return SoundSys_Update3DPosition_11("Right ecco: %.2f %.2f %.2f %.2f\n");
}
