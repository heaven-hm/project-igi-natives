// Original IGI.EXE function: AI_UpdateOrders_13 (VA 0x0045B060; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdateOrders_13.h"
int32_t AI_UpdateOrders_13(void* a1, void* a2)

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
        *(a1 + 0x10) = 0x1d;
        int32_t valA3 = *(valA2 + 0x74);
        *(a1 + 0x14) = valA3;
        return valA3(a1, a2);
    }

    if (tmpD1 & 0x10000)
    {
        void* valA5 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1e;
        int32_t valA6 = *(valA5 + 0x78);
        *(a1 + 0x14) = valA6;
        return valA6(a1, a2);
    }

    if (tmpD1 & 0x20000)
    {
        void* valA8 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x20;
        int32_t valA9 = *(valA8 + 0x80);
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

    if (!(tmpD1 & 0x2000000))
    {
        void* valA14 = *(a1 + 4);
        *(a1 + 0x10) = 0xc;
        int32_t valA15 = *(valA14 + 0x30);
        *(a1 + 0x14) = valA15;
        return valA15(a1, a2);
    }

    void* valA11 = *(a1 + 4);
    *(a1 + 0x10) = 0xa;
    int32_t valA12 = *(valA11 + 0x28);
    *(a1 + 0x14) = valA12;
    return valA12(a1, a2);
}
