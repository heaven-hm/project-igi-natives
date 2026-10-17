// Original IGI.EXE function: AI_UpdateOrders_5 (VA 0x00453FB0; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateOrders_5.h"
int32_t AI_UpdateOrders_5(void* a1, void* a2)

{
    void* valA1;
    int32_t objC;
    valA1 = Table_GetAt(a2 + 0x4c4, 0);
    int32_t tmpD;
    HumanPlayer_LoadParameters_13(valA1, tmpD, objC, valA1);
    void v_8;
    Script_ParseEnumReal32_13(valA1, &v_8);
    int32_t tmpD1 = *(a1 + 8);

    if (!(tmpD1 & 4))
    {
        void* valA2 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 8;
        int32_t valA3 = *(valA2 + 0x20);
        *(a1 + 0x14) = valA3;
        return valA3(a1, a2);
    }

    if (tmpD1 & 0x10000)
    {
        void* valA5 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 9;
        int32_t valA6 = *(valA5 + 0x24);
        *(a1 + 0x14) = valA6;
        return valA6(a1, a2);
    }

    if (tmpD1 & 0x20000)
    {
        void* valA8 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0xa;
        int32_t valA9 = *(valA8 + 0x28);
        *(a1 + 0x14) = valA9;
        return valA9(a1, a2);
    }

    long double fpu7 = *(a2 + 0x1c8);
    long double f0 = 0f;
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
        *(a2 + 0x4d1) = 1;

    if (!(tmpD1 & 1) || *(&tmpD1 + 1) & 2)
        return result;

    *(a1 + 0xc) = *(a1 + 0x10);

    if (!(tmpD1 & 0x200000))
    {
        void* valA14 = *(a1 + 4);
        *(a1 + 0x10) = 7;
        int32_t valA15 = *(valA14 + 0x1c);
        *(a1 + 0x14) = valA15;
        return valA15(a1, a2);
    }

    void* valA11 = *(a1 + 4);
    *(a1 + 0x10) = 5;
    int32_t valA12 = *(valA11 + 0x14);
    *(a1 + 0x14) = valA12;
    return valA12(a1, a2);
}
