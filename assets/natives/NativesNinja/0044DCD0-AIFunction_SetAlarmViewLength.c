#include "0044DCD0-AIFunction_SetAlarmViewLength.h"
/* 0x0044dcd0 AIFunction_SetAlarmViewLength full linked: callers=0 callees=2 */
int32_t AIFunction_SetAlarmViewLength(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void AIFunction_SetAlarmViewLength(int length)
// Note: Sets view length WHILE AN ALARM IS ON (separate stat from normal
// vision). Param: length = distance in engine units. Use in AI init.
{
    Profile_ValueSet(a3, 0f);
    struct ai_ctx* ecx = g_5bda58;
    int32_t var_18 = 1;
    ecx->pad[0xb8] = a1 * 4096.0;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}
