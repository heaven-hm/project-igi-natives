#include "0044E000-AIFunction_GetRandomValue.h"
/* 0x0044e000 AIFunction_GetRandomValue full linked: callers=0 callees=4 */
int32_t AIFunction_GetRandomValue(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: float AIFunction_GetRandomValue(float max)
// Note: RETURNS a random value below 'max' (returns Real per retail table).
// Param: max = upper bound. Use for randomized behaviour delays/targets in AI
// scripts.
{
    float var_2c = 0f;
    float var_30 = a3;
    Profile_ValueSet(var_30, var_2c);
    long double x87_r0_1 = sub_4b4770(Level_SetMission_5()) * a1;
    char* var_8 = &g_567c74;
    int32_t var_18 = x87_r0_1;
    double var_10 = x87_r0_1;
    memcpy(a2, &var_18, 0x18);
    return a2;
}
