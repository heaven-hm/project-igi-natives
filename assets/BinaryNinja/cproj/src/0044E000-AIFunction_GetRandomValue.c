#include "gi_platform.h"
#include "0044E000-AIFunction_GetRandomValue.h"
int32_t AIFunction_GetRandomValue(long double a1 , int32_t a2, float a3 )

// Sig: float AIFunction_GetRandomValue(float max)
// Note: RETURNS a random value below 'max' (returns Real per retail table).
// Param: max = upper bound. Use for randomized behaviour delays/targets in AI
// scripts.
{
    float v_2c = 0.0f;
    float v_30 = a3;
    Profile_ValueSet(v_30, v_2c);
    long double x87_r0_1 = Sys_AllocateMemory_14(Level_SetMission_5()) * a1;
    char* v_8 = &g_567c74;
    int32_t v_18 = x87_r0_1;
    double v_10 = x87_r0_1;
    memcpy(a2, &v_18, 0x18);
    return a2;
}
