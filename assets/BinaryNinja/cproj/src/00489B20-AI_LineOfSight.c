#include "gi_platform.h"
#include "00489B20-AI_LineOfSight.h"
int32_t AI_LineOfSight(float a1, double* a2, int32_t a3, double* a4)

{
    float valA = a1;
    float v_c = valA;
    float v_8 = valA;
    int32_t v_4 = a3;
    char valA2 = FX_TrailUpdate_12();
    char v_10;
    int16_t result = DynObj_RegisterSymbol_12(Level_StartMission_4(), a2, a4, valA2, &v_10, 0xffffffff,
        0xffffffff, &a1);

    if (result)
    {
        result = 1;
        return result;
    }

    long double fpu7 = a1;
    long double f0 = 0.790000021.0f;
    fpu7 - f0;
    result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        result = 0;
        return result;
    }

    result = 1;
    return result;
}
