// IGI native provenance: DynObj_RegisterSymbol_12 - 0x004CE410 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CE410-DynObj_RegisterSymbol_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_RegisterSymbol_12.h"
int32_t DynObj_RegisterSymbol_12(float context, double* param_2, double* param_3, char param_4, float param_5, int32_t param_6, int32_t param_7, float* param_8)

{
    g_a44394 += 1;
    int16_t data_2;
    data_2 = param_4;
    double* item_8c = param_2;
    double* item_88 = param_3;
    char item_84 = data_2;
    float item_80 = param_5;
    float item_7c = context;
    char item_78 = 0;
    float item_74 = 1.0f;

    for (int32_t i = 0; i < 6; i += 1)
    {
        if ((i == 1 || !i || i == 4 || i == 5) && param_7 & DynObj_InvalidDyncubetree(i))
            DynObj_ParseConfigFile_9(context, 8, &item_8c, param_2, param_3, 1, param_6, i);
    }

    long double fpu7 = item_74;
    long double f0 = 0.0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40) && param_6 & 0x80000000)
    {
        void item_70;
        DynObj_FindSymbol_11(context, &item_70, param_2, param_3, 1, 0xff, nullptr, 0x80000000);
        int32_t item_18;

        if (item_18)
        {
            item_74 = 0.0f;
            item_78 = 1;
        }
    }

    if (param_8)
        *param_8 = item_74;

    int32_t result = 0;
    result = !item_78;
    return result;
}
