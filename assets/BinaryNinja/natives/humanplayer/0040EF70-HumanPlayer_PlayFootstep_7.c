#include "HumanPlayer_PlayFootstep_7.h"
void** HumanPlayer_PlayFootstep_7(void* a1, void* a2)

{
    void* valA1;
    int32_t objC;
    valA1 = Table_GetAt(a2 + 0x4c4, 0);
    int32_t tmpD;
    void* valA2 = HumanPlayer_LoadParameters_13(valA1, tmpD, objC, valA1);
    void** result_1;
    Script_ParseEnumReal32_13(valA1, &result_1);
    int16_t valA4;
    valA4 = *(a2 + 0xd44);
    int16_t ctxB = *(a1 + 8);

    if (valA4)
    {
        int32_t* valA5 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0;
        int32_t valA6 = *valA5;
        *(a1 + 0x14) = valA6;
        return valA6(a1, a2);
    }

    long double fpu7 = *(a2 + 0x1c8);
    long double f0 = 0f;
    fpu7 - f0;
    void** result;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double x87_r7_1 = *(a2 + 0x1d0);
        long double f1_1 = 0f;
        x87_r7_1 - f1_1;
        result = result_1;
        int32_t v_4;

        if ((!(*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40) || !result) && v_4
            && result < *(valA2 + 0x648))
        {
            Human_TaskViewReset(*(a2 + 0x4ec));
            void* tmpD3 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 3;
            int32_t valA13 = *(tmpD3 + 0xc);
            *(a1 + 0x14) = valA13;
            return valA13(a1, a2);
        }
    }
    else
    {
        result = result_1;

        if (!result && ctxB & 1)
        {
            void* tmpD2 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 0xc;
            int32_t valA8 = *(tmpD2 + 0x30);
            *(a1 + 0x14) = valA8;
            return valA8(a1, a2);
        }

        *(a2 + 0x4d1) = 1;
    }

    result = *(a2 + 0x4d3);

    if (result)
        result = HumanPlayer_CheckCollision_9(a2, 8.40779079e-45f);

    if (!(ctxB & 1) || *(&ctxB + 1) & 2)
        return result;

    void* objC2 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 1;
    int32_t valA11 = *(objC2 + 4);
    *(a1 + 0x14) = valA11;
    return valA11(a1, a2);
}
