// Original IGI.EXE function: AIFunction_SetSecondaryAlarmViewLength (VA 0x0044DE80; static CFG gate FAIL, CFG score 0.833).
#include "AIFunction_SetSecondaryAlarmViewLength.h"
int32_t AIFunction_SetSecondaryAlarmViewLength(long double a1 @ fp0, int32_t a2, float a3 @ 0xc)

// Sig: void AIFunction_SetSecondaryAlarmViewLength(int length)
// Note: Sets secondary view length during alarms. Param: length = distance in
// engine units.
{
    Profile_ValueSet(a3, 0f);
    void* objC = g_5bda58;
    int32_t v_18 = 1;
    *(objC + 0xd8) = a1 * 4096.0;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a2, &v_18, 0x18);
    return a2;
}
