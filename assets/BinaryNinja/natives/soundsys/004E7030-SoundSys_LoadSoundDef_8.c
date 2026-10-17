// Original IGI.EXE function: SoundSys_LoadSoundDef_8 (VA 0x004E7030; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_LoadSoundDef_8.h"
int32_t* SoundSys_LoadSoundDef_8(int32_t* a1, int32_t* a2, float a3)

{
    long double fpu7 = a3;
    long double f0 = 1.0;
    fpu7 - f0;
    int32_t valA;
    valA = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&valA + 1) & 1))
    {
        *a1 = a2[0xa];
        return a2;
    }

    long double x87_r7_1 = a3;
    long double f1 = 0.0;
    x87_r7_1 - f1;
    valA = (x87_r7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1) ? 1 : 0) << 0xa
        | (x87_r7_1 == f1 ? 1 : 0) << 0xe;

    if (*(&valA + 1) & 0x41)
    {
        *a1 = *a2;
        return a2;
    }

    int32_t* tmpD2 = a2;
    int32_t objC2 = a3 * 10f;
    float v_10 = objC2 * 0.100000001f;
    float v_c_2 = (objC2 + 1) * 0.100000001f;
    a2 = tmpD2[objC2];
    long double x87_r7_10 = v_10;
    long double f2 = a3;
    x87_r7_10 - f2;
    valA = (x87_r7_10 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f2) ? 1 : 0) << 0xa
        | (x87_r7_10 == f2 ? 1 : 0) << 0xe;

    if (*(&valA + 1) & 0x40)
    {
        int32_t valA3 = tmpD2[objC2];
        *a1 = valA3;
        return valA3;
    }

    long double x87_r7_11 = v_c_2;
    long double f3 = a3;
    x87_r7_11 - f3;
    valA = (x87_r7_11 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f3) ? 1 : 0) << 0xa
        | (x87_r7_11 == f3 ? 1 : 0) << 0xe;

    if (!(*(&valA + 1) & 0x40))
    {
        *a1 = (tmpD2[objC2 + 1] - a2) / (v_c_2 - v_10) * (a3 - v_10) + a2;
        return valA;
    }

    *a1 = tmpD2[objC2 + 1];
    return a1;
}
