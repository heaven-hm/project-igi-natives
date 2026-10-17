// Original IGI.EXE function: Script_FormatString_29 (VA 0x004FC8E0; static CFG gate PASS, CFG score 1.000).
#include "Script_FormatString_29.h"
float Script_FormatString_29(float a1, float* a2, float a3, float* a4, float a5, float a6 @ 0x1c) __location("valA")

{
    float srcS = a1;
    float valA = *(srcS + 4);
    float v_28;
    Sys_PushStack_12(&v_28, *(srcS + 0xc), *(srcS + 0x10), *(srcS + 0x14));
    float* tmpD1 = a3;
    long double x87_r7_2 = a4[1] * tmpD1[2] - tmpD1[1] * a4[2];
    long double x87_r6_5 = -((*a4 * tmpD1[2] - *tmpD1 * a4[2]));
    long double x87_r5_4 = tmpD1[1] * *a4 - *tmpD1 * a4[1];
    float v_34 = x87_r7_2 * *a2 + x87_r5_4 * a2[6] + x87_r6_5 * a2[3];
    float v_30 = x87_r7_2 * a2[1] + x87_r5_4 * a2[7] + x87_r6_5 * a2[4];
    long double x87_r7_6 = x87_r7_2 * a2[2] + x87_r5_4 * a2[8] + x87_r6_5 * a2[5];
    float v_24;
    float v_20;
    float v_40 = v_20 * x87_r7_6 + v_24 * v_30 + v_28 * v_34;
    float v_1c;
    float v_18;
    float v_14;
    float v_3c = v_14 * x87_r7_6 + v_18 * v_30 + v_1c * v_34;
    float v_10;
    float v_c;
    float v_8;
    long double x87_r7_9 = x87_r7_6 * v_8 + v_c * v_30 + v_10 * v_34;
    float v_34_1 = v_3c * a2[1] + v_40 * *a2 + x87_r7_9 * a2[2];
    float v_30_1 = v_3c * a2[4] + v_40 * a2[3] + x87_r7_9 * a2[5];
    long double x87_r7_11 = v_3c * a2[7] + v_40 * a2[6] + x87_r7_9 * a2[8];
    long double x87_r5_37 = -((v_34_1 * a4[2] - x87_r7_11 * *a4)) * tmpD1[1]
        + (v_30_1 * a4[2] - x87_r7_11 * a4[1]) * *tmpD1;
    long double x87_r7_16 = -(((a6 + 1f) * a5))
        / (x87_r5_37 + (v_34_1 * a4[1] - v_30_1 * *a4) * tmpD1[2] + valA);
    float v_40_3 = *tmpD1 * x87_r7_16;
    float v_3c_2 = tmpD1[1] * x87_r7_16;
    float v_38_1 = tmpD1[2] * x87_r7_16;
    long double x87_r7_20 = v_38_1 * a4[1] - v_3c_2 * a4[2];
    long double x87_r6_56 = -((v_38_1 * *a4 - v_40_3 * a4[2]));
    long double x87_r5_44 = v_3c_2 * *a4 - v_40_3 * a4[1];
    float v_30_2 = x87_r5_44 * a2[7] + x87_r6_56 * a2[4] + x87_r7_20 * a2[1];
    long double x87_r7_24 = x87_r7_20 * a2[2] + x87_r5_44 * a2[8] + x87_r6_56 * a2[5];
    long double x87_r6_59 =
        x87_r5_44 * a2[6] + x87_r6_56 * a2[3] + x87_r7_20 * *a2 + *(srcS + 0x30);
    a3 = x87_r6_59;
    *(srcS + 0x30) = x87_r6_59;
    long double x87_r6_61 = v_30_2 + *(srcS + 0x34);
    a1 = x87_r6_61;
    *(srcS + 0x34) = x87_r6_61;
    long double x87_r7_25 = x87_r7_24 + *(srcS + 0x38);
    *(srcS + 0x38) = x87_r7_25;
    *(srcS + 0x48) = x87_r7_25 * v_20 + a1 * v_24 + a3 * v_28;
    *(srcS + 0x4c) = x87_r7_25 * v_14 + a1 * v_18 + a3 * v_1c;
    *(srcS + 0x50) = x87_r7_25 * v_8 + a1 * v_c + a3 * v_10;
    long double x87_r7_36 =
        a2[4] * *(srcS + 0x4c) + *(srcS + 0x50) * a2[5] + *(srcS + 0x48) * a2[3];
    long double x87_r7_39 = a2[7] * *(srcS + 0x4c) + *(srcS + 0x50) * a2[8];
    long double x87_r6_85 = *(srcS + 0x48) * a2[6];
    *(srcS + 0x48) = a2[1] * *(srcS + 0x4c) + *a2 * *(srcS + 0x48) + a2[2] * *(srcS + 0x50);
    *(srcS + 0x4c) = x87_r7_36;
    long double x87_r7_42 = v_40_3 * *(srcS + 4);
    long double x87_r6_87 = v_3c_2 * *(srcS + 4);
    *(srcS + 0x50) = x87_r7_39 + x87_r6_85;
    float v_34_5 = v_40_3;
    float v_2c_3 = v_38_1 * *(srcS + 4);
    float objC5 = *(srcS + 0x20);
    long double x87_r7_45 = *(srcS + 0x1c) + x87_r6_87;
    *(srcS + 0x18) = *(srcS + 0x18) + x87_r7_42;
    *(srcS + 0x1c) = x87_r7_45;
    *(srcS + 0x20) = objC5 + v_2c_3;
    return SoundSys_InitSoundSys_17(srcS);
}
