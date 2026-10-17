// Original IGI.EXE function: AIFunction_SetAlarmControlID (VA 0x0044E2D0; static CFG gate FAIL, CFG score 0.833).
#include "AIFunction_SetAlarmControlID.h"
int32_t AIFunction_SetAlarmControlID(int32_t a1, float a2 @ 0xc)

// Sig: void AIFunction_SetAlarmControlID(int id)
// Note: Binds the ALARM CONTROL (the raised-alarm device) this AI uses. Param:
// id = alarm control id from the level. Retail template:
// AIFunction_SetAlarmControlID(xx).
{
    int32_t valA1 = Script_GetArg(a2, 0);
    void* objC = g_5bda58;
    int32_t v_18 = 1;
    *(objC + 0x3ac4) = valA1;
    int32_t v_10 = 0;
    int32_t v_c = 0x3ff00000;
    char* v_8 = &g_567c74;
    memcpy(a1, &v_18, 0x18);
    return a1;
}
