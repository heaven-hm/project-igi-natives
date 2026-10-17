// Original IGI.EXE function: AI_CombatTarget_13 (VA 0x0045AB00; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatTarget_13.h"
int32_t AI_CombatTarget_13(void* a1, void* a2)

{
    void* valA1;
    int32_t objC;
    valA1 = Table_GetAt(a2 + 0x4c4, 0);
    int32_t tmpD;
    HumanPlayer_LoadParameters_13(valA1, tmpD, objC, valA1);
    void v_8;
    Script_ParseEnumReal32_13(valA1, &v_8);
    int32_t ctxB = *(a1 + 8);

    if (!(ctxB & 4))
    {
        void* valA2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1d;
        int32_t valA3 = *(valA2 + 0x74);
        *(a1 + 0x14) = valA3;
        return valA3(a1, a2);
    }

    if (ctxB & 0x10000)
    {
        void* tmpD2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1e;
        int32_t valA5 = *(tmpD2 + 0x78);
        *(a1 + 0x14) = valA5;
        return valA5(a1, a2);
    }

    if (ctxB & 0x20000)
    {
        void* objC2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x20;
        int32_t valA8 = *(objC2 + 0x80);
        *(a1 + 0x14) = valA8;
        return valA8(a1, a2);
    }

    Script_SpawnNewTask_13(valA1, 1);
    long double fpu7 = *(a2 + 0x1c8);
    long double f0 = 0f;
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(a2 + 0x4d1) = 1;

    if (!(*(a1 + 8) & 0x1000000))
    {
        if (!(ctxB & 0x40000))
        {
            void* tmpD4 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 2;
            int32_t valA13 = *(tmpD4 + 8);
            *(a1 + 0x14) = valA13;
            return valA13(a1, a2);
        }

        void* valA10 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 3;
        int32_t valA11 = *(valA10 + 0xc);
        *(a1 + 0x14) = valA11;
        return valA11(a1, a2);
    }

    if (!(ctxB & 0x80))
    {
        int32_t* objC4 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0;
        int32_t valA16 = *objC4;
        *(a1 + 0x14) = valA16;
        return valA16(a1, a2);
    }

    if (!(ctxB & 1) || *(&ctxB + 1) & 2)
        return result;

    void* valA18 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0x11;
    int32_t valA19 = *(valA18 + 0x44);
    *(a1 + 0x14) = valA19;
    return valA19(a1, a2);
}
