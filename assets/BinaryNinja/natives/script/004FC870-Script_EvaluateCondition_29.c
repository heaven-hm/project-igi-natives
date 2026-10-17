// Original IGI.EXE function: Script_EvaluateCondition_29 (VA 0x004FC870; static CFG gate PASS, CFG score 1.000).
#include "Script_EvaluateCondition_29.h"
int32_t Script_EvaluateCondition_29(float* a1, void* a2, float* a3, float* a4 @ 0x14)

{
    float v_c;
    SoundSys_SetMasterVolume_17(&v_c, a2, a3);
    float v_8;
    float v_4;
    long double x87_r7_3 = v_4 * a1[2] + v_8 * a1[1] + v_c * *a1;
    *a4 = x87_r7_3;
    long double f0 = 1f;
    x87_r7_3 - f0;

    if (!(*(&((x87_r7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0) ? 1 : 0) << 0xa
            | (x87_r7_3 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        return 0;

    long double f1 = -1f;
    x87_r7_3 - f1;

    if (!(*(&((x87_r7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f1 ? 1 : 0) << 0xe) + 1) & 0x41))
        return 1;

    return 2;
}
