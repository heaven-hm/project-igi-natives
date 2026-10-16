#include "0044D260-AIAction_Dead.h"
/* 0x0044d260 AIAction_Dead full linked: callers=0 callees=3 */
int32_t AIAction_Dead(int32_t a1, float a2 @ 0xc)

// Sig: void AIAction_Dead(int param)
// Note: Runs the DEATH handling action for the AI (plays death, releases
// tasks). Param: param = death context value passed by retail scripts. Use in
// AIEVENT_DEAD handler.
{
    int32_t eax_1 = sub_4b8a20(a2, 0);
    int32_t var_30 = 0;
    sub_450e10(sub_48ab70, var_30, eax_1);
    int32_t var_18 = 1;
    int32_t var_10 = 0;
    int32_t var_c = 0x3ff00000;
    char* var_8 = &g_567c74;
    memcpy(a1, &var_18, 0x18);
    return a1;
}
