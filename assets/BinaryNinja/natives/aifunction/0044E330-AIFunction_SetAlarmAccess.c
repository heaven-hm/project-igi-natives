#include "AIFunction_SetAlarmAccess.h"
int32_t AIFunction_SetAlarmAccess(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetAlarmAccess(int access)
// Note: Sets HOW the AI treats the alarm route. Param: access = AIALARMACCESS
// enum: BEFORECOMBAT=0 (run for the alarm first), AFTERCOMBAT=1 (fight first,
// raise alarm after). Retail template:
// AIFunction_SetAlarmAccess(AIALARMACCESS_BEFORECOMBAT).
{
    int32_t valA1 = Script_GetArg(a2, 0);
    void* objC = g_5bda58;
    int32_t v_18 = 1;
    *(objC + 0x3acc) = valA1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
