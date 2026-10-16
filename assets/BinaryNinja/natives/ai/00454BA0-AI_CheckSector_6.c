#include "AI_CheckSector_6.h"
int32_t* AI_CheckSector_6(void* a1, int32_t* a2)

{
    int32_t dstD1 = *(a1 + 8) & 0xffc3e01c;
    int32_t* valA1 = *(a2[0x1c] + 4);

    if (*(&valA1 + 1) & 1)
        dstD1 |= 1;

    if (valA1 & 0x10000)
        dstD1 |= 2;

    valA1 = a2[0x340];
    int32_t dstD2;

    dstD2 = !valA1 ? dstD1 & 0xfffbffff : dstD1 | 0x40000;

    long double fpu7 = a2[0x6e];
    long double f0 = 0f;
    fpu7 - f0;
    valA1 = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&valA1 + 1) & 0x40))
        dstD2 |= 0x20;

    long double x87_r7_1 = a2[0x6f];
    long double f1 = 0f;
    x87_r7_1 - f1;
    valA1 = (x87_r7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1) ? 1 : 0) << 0xa
        | (x87_r7_1 == f1 ? 1 : 0) << 0xe;

    if (!(*(&valA1 + 1) & 0x40))
        dstD2 |= 0x40;

    long double x87_r7_2 = a2[0x70];
    long double f2 = 0f;
    x87_r7_2 - f2;
    valA1 = (x87_r7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2) ? 1 : 0) << 0xa
        | (x87_r7_2 == f2 ? 1 : 0) << 0xe;

    if (!(*(&valA1 + 1) & 0x40))
        dstD2 |= 0x80;

    long double x87_r7_3 = a2[0x71];
    long double f3 = 0f;
    x87_r7_3 - f3;
    valA1 = (x87_r7_3 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f3) ? 1 : 0) << 0xa
        | (x87_r7_3 == f3 ? 1 : 0) << 0xe;

    if (!(*(&valA1 + 1) & 0x40))
        dstD2 |= 0x100;

    long double x87_r7_4 = a2[0x72];
    long double f4 = 0f;
    x87_r7_4 - f4;
    valA1 = (x87_r7_4 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f4) ? 1 : 0) << 0xa
        | (x87_r7_4 == f4 ? 1 : 0) << 0xe;

    if (!(*(&valA1 + 1) & 0x40))
        dstD2 |= 0x200;

    long double x87_r7_5 = a2[0x73];
    long double f5 = 0f;
    x87_r7_5 - f5;
    valA1 = (x87_r7_5 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f5) ? 1 : 0) << 0xa
        | (x87_r7_5 == f5 ? 1 : 0) << 0xe;

    if (!(*(&valA1 + 1) & 0x40))
        dstD2 |= 0x400;

    long double x87_r7_6 = a2[0x74];
    long double f6 = 0f;
    x87_r7_6 - f6;
    valA1 = (x87_r7_6 < f6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f6) ? 1 : 0) << 0xa
        | (x87_r7_6 == f6 ? 1 : 0) << 0xe;

    if (!(*(&valA1 + 1) & 0x40))
        dstD2 |= 0x800;

    long double x87_r7_7 = a2[0x75];
    long double f7 = 0f;
    x87_r7_7 - f7;
    valA1 = (x87_r7_7 < f7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f7) ? 1 : 0) << 0xa
        | (x87_r7_7 == f7 ? 1 : 0) << 0xe;

    if (!(*(&valA1 + 1) & 0x40))
        dstD2 |= 0x1000;

    long double x87_r7_8 = a2[0x81];
    long double f8 = 0f;
    x87_r7_8 - f8;
    valA1 = (x87_r7_8 < f8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f8) ? 1 : 0) << 0xa
        | (x87_r7_8 == f8 ? 1 : 0) << 0xe;

    if (!(*(&valA1 + 1) & 0x40))
    {
        dstD2 |= 0x80000;
        a2[0x343] = a2[0x81];
    }

    long double x87_r7_10 = a2[0x82];
    long double f9 = 0f;
    x87_r7_10 - f9;
    valA1 = (x87_r7_10 < f9 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f9) ? 1 : 0) << 0xa
        | (x87_r7_10 == f9 ? 1 : 0) << 0xe;

    if (!(*(&valA1 + 1) & 0x40))
    {
        dstD2 |= 0x100000;
        a2[0x344] = a2[0x82];
        valA1 = AI_CheckVisibility_7(a2);
        a2[0x82] = 0;
    }

    long double x87_r7_12 = a2[0x83];
    long double f10 = 0f;
    x87_r7_12 - f10;
    valA1 = (x87_r7_12 < f10 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, f10) ? 1 : 0) << 0xa
        | (x87_r7_12 == f10 ? 1 : 0) << 0xe;

    if (!(*(&valA1 + 1) & 0x40))
        dstD2 |= 0x200000;

    long double x87_r7_13 = a2[0x84];
    long double f11 = 0f;
    x87_r7_13 - f11;
    valA1 = (x87_r7_13 < f11 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, f11) ? 1 : 0) << 0xa
        | (x87_r7_13 == f11 ? 1 : 0) << 0xe;

    if (!(*(&valA1 + 1) & 0x40))
    {
        int32_t v_8_3 = a2[0x84];
        int32_t* valA2 = HumanPlayer_UpdateMotion_11(a2, v_8_3);

        if (valA2)
        {
            void* valA3 = Script_ExecuteLevelScript_12(&a2[0x131], nullptr, valA2);
            *(a1 + 8) = dstD2;
            return valA3;
        }

        int32_t v_1c_4 = v_8_3;
        int32_t v_20_3 = Script_EvaluateCondition_4(a2);
        valA1 = Warning_Show("#%d is trying to change to invalid weapon #%d");
    }

    *(a1 + 8) = dstD2;
    return valA1;
}
