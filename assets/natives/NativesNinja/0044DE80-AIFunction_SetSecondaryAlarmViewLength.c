#include "0044DE80-AIFunction_SetSecondaryAlarmViewLength.h"
/* 0x0044de80 AIFunction_SetSecondaryAlarmViewLength full linked: callers=0 callees=2 */
int32_t AIFunction_SetSecondaryAlarmViewLength(long double a1 @ st0, int32_t a2, float a3 @ 0xc)

// Sig: void AIFunction_SetSecondaryAlarmViewLength(int length)
// Note: Sets secondary view length during alarms. Param: length = distance in
// engine units.
{
    Profile_ValueSet(a3, 0f);
    struct ai_ctx* ecx = g_5bda58;
    int32_t var_18 = 1;
    ecx->pad[0xd8] = a1 * 4096.0;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a2, &var_18, 0x18);
    return a2;
}
