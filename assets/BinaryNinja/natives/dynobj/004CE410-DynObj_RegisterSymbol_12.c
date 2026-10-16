#include "DynObj_RegisterSymbol_12.h"
int32_t DynObj_RegisterSymbol_12(float a1, double* a2, double* a3, char a4, float a5, int32_t a6, int32_t a7, float* a8)

{
    g_a44394 += 1;
    int16_t valA2;
    valA2 = a4;
    double* v_8c = a2;
    double* v_88 = a3;
    char v_84 = valA2;
    float v_80 = a5;
    float v_7c = a1;
    char v_78 = 0;
    float v_74 = 1f;

    for (int32_t i = 0; i < 6; i += 1)
    {
        if ((i == 1 || !i || i == 4 || i == 5) && a7 & DynObj_InvalidDyncubetree(i))
            DynObj_ParseConfigFile_9(a1, 8, &v_8c, a2, a3, 1, a6, i);
    }

    long double fpu7 = v_74;
    long double f0 = 0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40) && a6 & 0x80000000)
    {
        void v_70;
        DynObj_FindSymbol_11(a1, &v_70, a2, a3, 1, 0xff, nullptr, 0x80000000);
        int32_t v_18;

        if (v_18)
        {
            v_74 = 0f;
            v_78 = 1;
        }
    }

    if (a8)
        *a8 = v_74;

    int32_t result = 0;
    result = !v_78;
    return result;
}
