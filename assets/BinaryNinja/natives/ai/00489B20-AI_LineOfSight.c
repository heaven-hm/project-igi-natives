// Original IGI.EXE function: AI_LineOfSight (VA 0x00489B20; static CFG gate PASS, CFG score 1.000).
#include "AI_LineOfSight.h"
int32_t AI_LineOfSight(float context, double* param_2, int32_t param_3, double* param_4)

{
    float data_val = context;
    float item_c = data_val;
    float item_8 = data_val;
    int32_t item_4 = param_3;
    char data_2 = FX_TrailUpdate_12();
    void item_10;
    int16_t result = DynObj_RegisterSymbol_12(Level_StartMission_4(), param_2, param_4, data_2, &item_10, 0xffffffff,
        0xffffffff, &context);

    if (result)
    {
        result = 1;
        return result;
    }

    long double fpu7 = context;
    long double f0 = 0.790000021f;
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
