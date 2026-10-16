#include "00489B20-AI_LineOfSight.h"
/* 0x00489b20 AI_LineOfSight full linked: callers=1 callees=3 */
int32_t sub_489b20(float a1, double* a2, int32_t a3, double* a4)

{
    float eax = a1;
    float var_c = eax;
    float var_8 = eax;
    int32_t var_4 = a3;
    char eax_2 = sub_489610();
    void var_10;
    int16_t result = sub_4ce410(Level_StartMission_4(), a2, a4, eax_2, &var_10, 0xffffffff,
        0xffffffff, &a1);

    if (result)
    {
        result = 1;
        return result;
    }

    long double x87_r7 = a1;
    long double temp0 = 0.790000021f;
    x87_r7 - temp0;
    result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        result = 0;
        return result;
    }

    result = 1;
    return result;
}
