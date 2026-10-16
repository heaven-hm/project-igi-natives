#include "0044D630-AIAction_FireAtTask.h"
/* 0x0044d630 AIAction_FireAtTask full linked: callers=0 callees=8 */
int32_t AIAction_FireAtTask(long double a1 @ st0, long double a2 @ st1, int32_t a3, float a4 @ 0xc)

// Sig: void AIAction_FireAtTask(int taskId, int p1, int p2, int p3, int p4)
// Note: Makes the AI fire AT a task/object entity. Params: taskId = target
// task/entity id, remaining 4 args = firing behaviour values (same layout
// family as FireAtNode). Use in combat handlers when target is an entity.
{
    int32_t* eax_1 = sub_451030(g_5bda58);
    int32_t var_30 = 0;
    eax_1[2] = sub_4b8a20(a4, var_30);
    Profile_ValueSet(a4, 1.40129846e-45f);
    eax_1[3] = a1 * 30.0;
    Profile_ValueSet(a4, 2.80259693e-45f);
    eax_1[4] = a2 * 30.0;
    eax_1[6] = sub_4b8a20(a4, 3);
    sub_450e10(sub_48ede0, eax_1, sub_4b8a20(a4, 4));
    int32_t var_18 = 5;
    int32_t var_10 = 0;
    int32_t var_c = 0x40140000;
    char* var_8 = &g_567c74;
    memcpy(a3, &var_18, 0x18);
    return a3;
}
