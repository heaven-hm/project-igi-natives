#include "FX_DebrisSpawn_18.h"
int32_t FX_DebrisSpawn_18(float a1, void* a2)

{
    double v_30[0x2];
    Script_CallNativeHandler_23(&v_30, a1);
    double v_20;
    double v_20_1 = *(*(a2 + 0x3b6c) + 0x80) * 4096.0 + v_20;
    double v_18[0x3];
    AI_UpdatePatrol_3(&v_18, a2);
    int32_t v_34 = *(a2 + 0x14);
    char v_38 = 1;
    char valA1 = Level_LoadObjects_4();
    int16_t result = DynObj_RegisterSymbol_12(Level_StartMission_4(), &v_30, &v_18, valA1, &v_38,
        0xffffffff, 0xffffffff, &a1);

    if (result)
    {
        result = 1;
        return result;
    }

    long double x87_r7_3 = a1;
    long double f0 = 0.790000021f;
    x87_r7_3 - f0;
    result = (x87_r7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0) ? 1 : 0) << 0xa
        | (x87_r7_3 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        result = 0;
        return result;
    }

    result = 1;
    return result;
}
