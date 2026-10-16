#include "0044D420-AIAction_Activate.h"
/* 0x0044d420 AIAction_Activate full linked: callers=0 callees=6 */
int32_t AIAction_Activate(int32_t a1, float a2 @ 0xc)

// Sig: void AIAction_Activate(int target, int param2, int flags)
// Note: Generic ACTIVATE action: sends the AI to activate/use an object
// (switch, door, alarm...). Params: target = object/task reference, param2 =
// secondary value (retail passes 0), flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).
// Use in AI handlers for alarm/objective responses.
{
    int32_t* eax_1 = sub_451030(g_5bda58);
    int32_t eax_2 = sub_4b8a20(a2, 0);
    int32_t var_30 = 1;
    eax_1[2] = eax_2;
    eax_1[5] = sub_4b8a20(a2, var_30);
    sub_450e10(sub_48e620, eax_1, sub_4b8a20(a2, 2));
    int32_t var_18 = 3;
    int32_t var_10 = 0;
    int32_t var_c = 0x40080000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
