#include "HumanPlayer_UpdateAnimation_8.h"
int32_t HumanPlayer_UpdateAnimation_8(void* a1, void* a2)

{
    void* valA1;
    int32_t objC;
    valA1 = Table_GetAt(a2 + 0x4c4, 0);
    int32_t tmpD;
    HumanPlayer_LoadParameters_13(valA1, tmpD, objC, valA1);
    void v_8;
    int32_t result = Script_ParseEnumReal32_13(valA1, &v_8);
    long double fpu7 = *(a2 + 0x1c8);
    long double f0 = 0f;
    fpu7 - f0;
    result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40) && *(a2 + 0x4e8) < 3)
        *(a2 + 0x4d1) = 1;

    result = *(a2 + 0x4d3);
    char ctxB = *(a1 + 8);

    if (result)
    {
        HumanPlayer_CheckCollision_9(a2, 1.12103877e-44f);
        result = *(a2 + 0x4e8) + 1;
        *(a2 + 0x4e8) = result;
    }

    if (!(ctxB & 1))
        return result;

    void* valA3 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 1;
    int32_t valA4 = *(valA3 + 4);
    *(a1 + 0x14) = valA4;
    return valA4(a1, a2);
}
