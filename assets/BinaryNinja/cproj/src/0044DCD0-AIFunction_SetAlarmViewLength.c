#include "gi_platform.h"
#include "0044DCD0-AIFunction_SetAlarmViewLength.h"
int32_t AIFunction_SetAlarmViewLength(long double a1 , int32_t a2, float a3 )

// Sig: void AIFunction_SetAlarmViewLength(int length)
// Note: Sets view length WHILE AN ALARM IS ON (separate stat from normal
// vision). Param: length = distance in engine units. Use in AI init.
{
    Profile_ValueSet(a3, 0.0f);
    void* objC = g_5bda58;
    int32_t v_18 = 1;
    *(objC + 0xb8) = a1 * 4096.0;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}
