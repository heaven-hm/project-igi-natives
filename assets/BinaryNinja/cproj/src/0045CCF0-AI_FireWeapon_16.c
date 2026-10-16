#include "gi_platform.h"
#include "0045CCF0-AI_FireWeapon_16.h"
int32_t* AI_FireWeapon_16(void* a1, int32_t* a2)

{
    int32_t dstD1 = (*(int32_t*)(uintptr_t)(a1 + 8)) & 0xf003e01c;
    int32_t* result = (*(int32_t*)(uintptr_t)(a2[0x1c] + 4));

    if (*(&result + 1) & 1)
        dstD1 |= 1;

    if (result & 0x10000)
        dstD1 |= 2;

    result = a2[0x340];
    int32_t dstD2;

    dstD2 = !result ? dstD1 & 0xfffbffff : dstD1 | 0x40000;

    long double fpu7 = a2[0x6e];
    long double f0 = 0.0f;
    fpu7 - f0;
    result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x20;

    long double x87_r7_1 = a2[0x6f];
    long double f1 = 0.0f;
    x87_r7_1 - f1;
    result = (x87_r7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1) ? 1 : 0) << 0xa
        | (x87_r7_1 == f1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x40;

    long double x87_r7_2 = a2[0x70];
    long double f2 = 0.0f;
    x87_r7_2 - f2;
    result = (x87_r7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2) ? 1 : 0) << 0xa
        | (x87_r7_2 == f2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x80;

    long double x87_r7_3 = a2[0x71];
    long double f3 = 0.0f;
    x87_r7_3 - f3;
    result = (x87_r7_3 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f3) ? 1 : 0) << 0xa
        | (x87_r7_3 == f3 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x100;

    long double x87_r7_4 = a2[0x72];
    long double f4 = 0.0f;
    x87_r7_4 - f4;
    result = (x87_r7_4 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f4) ? 1 : 0) << 0xa
        | (x87_r7_4 == f4 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x200;

    long double x87_r7_5 = a2[0x73];
    long double f5 = 0.0f;
    x87_r7_5 - f5;
    result = (x87_r7_5 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f5) ? 1 : 0) << 0xa
        | (x87_r7_5 == f5 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x400;

    long double x87_r7_6 = a2[0x74];
    long double f6 = 0.0f;
    x87_r7_6 - f6;
    result = (x87_r7_6 < f6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f6) ? 1 : 0) << 0xa
        | (x87_r7_6 == f6 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x800;

    long double x87_r7_7 = a2[0x75];
    long double f7 = 0.0f;
    x87_r7_7 - f7;
    result = (x87_r7_7 < f7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f7) ? 1 : 0) << 0xa
        | (x87_r7_7 == f7 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x1000;

    long double x87_r7_8 = a2[0x81];
    long double f8 = 0.0f;
    x87_r7_8 - f8;
    result = (x87_r7_8 < f8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f8) ? 1 : 0) << 0xa
        | (x87_r7_8 == f8 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x80000;

    long double x87_r7_9 = a2[0x82];
    long double f9 = 0.0f;
    x87_r7_9 - f9;
    result = (x87_r7_9 < f9 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f9) ? 1 : 0) << 0xa
        | (x87_r7_9 == f9 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x100000;

    long double x87_r7_10 = a2[0x83];
    long double f10 = 0.0f;
    x87_r7_10 - f10;
    result = (x87_r7_10 < f10 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f10) ? 1 : 0) << 0xa
        | (x87_r7_10 == f10 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        dstD2 |= 0x200000;
        a2[0x343] = a2[0x83];
    }

    long double x87_r7_12 = a2[0x84];
    long double f11 = 0.0f;
    x87_r7_12 - f11;
    result = (x87_r7_12 < f11 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, f11) ? 1 : 0) << 0xa
        | (x87_r7_12 == f11 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        dstD2 |= &__dos_header;
        result = AI_CheckSector_18(a2);

        if (result != 0x24)
        {
            a2[0x344] = a2[0x84];
            result = AI_UpdateOrders_12(a2);
            a2[0x84] = 0;
        }
    }

    long double x87_r7_14 = a2[0x85];
    long double f12 = 0.0f;
    x87_r7_14 - f12;
    result = (x87_r7_14 < f12 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f12) ? 1 : 0) << 0xa
        | (x87_r7_14 == f12 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x800000;

    long double x87_r7_15 = a2[0x86];
    long double f13 = 0.0f;
    x87_r7_15 - f13;
    result = (x87_r7_15 < f13 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, f13) ? 1 : 0) << 0xa
        | (x87_r7_15 == f13 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x1000000;

    long double x87_r7_16 = a2[0x87];
    long double f14 = 0.0f;
    x87_r7_16 - f14;
    result = (x87_r7_16 < f14 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, f14) ? 1 : 0) << 0xa
        | (x87_r7_16 == f14 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x2000000;

    long double x87_r7_17 = a2[0x88];
    long double f15 = 0.0f;
    x87_r7_17 - f15;
    result = (x87_r7_17 < f15 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, f15) ? 1 : 0) << 0xa
        | (x87_r7_17 == f15 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        int32_t v_8_3 = a2[0x88];
        int32_t* valA1 = HumanPlayer_UpdateMotion_11(a2, v_8_3);

        if (!valA1)
        {
            int32_t v_1c_3 = v_8_3;
            int32_t v_20_3 = Script_EvaluateCondition_4(a2);
            result = Warning_Show("#%d is trying to change to invalid weapon #%d");
        }
        else
            result = Script_ExecuteLevelScript_12(&a2[0x131], nullptr, valA1);
    }

    long double x87_r7_19 = a2[0x89];
    long double f16 = 0.0f;
    x87_r7_19 - f16;
    result = (x87_r7_19 < f16 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_19, f16) ? 1 : 0) << 0xa
        | (x87_r7_19 == f16 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x4000000;

    long double x87_r7_20 = a2[0x8a];
    long double f17 = 0.0f;
    x87_r7_20 - f17;
    result = (x87_r7_20 < f17 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_20, f17) ? 1 : 0) << 0xa
        | (x87_r7_20 == f17 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        dstD2 |= 0x8000000;

    (*(int32_t*)(uintptr_t)(a1 + 8)) = dstD2;
    return result;
}
