#include "0048B6E0-FX_DebrisSpawn_18.h"
/* 0x0048b6e0 FX_DebrisSpawn_18 full linked: callers=2 callees=5 */
int32_t sub_48b6e0(float a1, void* a2)

{
    double var_30[0x2];
    sub_4f9770(&var_30, a1);
    double var_20;
    double var_20_1 = *(*(a2 + 0x3b6c) + 0x80) * 4096.0 + var_20;
    double var_18[0x3];
    sub_451380(&var_18, a2);
    int32_t var_34 = *(a2 + 0x14);
    char var_38 = 1;
    char eax_1 = Level_LoadObjects_4();
    int16_t result = sub_4ce410(Level_StartMission_4(), &var_30, &var_18, eax_1, &var_38,
        0xffffffff, 0xffffffff, &a1);

    if (result)
    {
        result = 1;
        return result;
    }

    long double x87_r7_3 = a1;
    long double temp0 = 0.790000021f;
    x87_r7_3 - temp0;
    result = (x87_r7_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        result = 0;
        return result;
    }

    result = 1;
    return result;
}
