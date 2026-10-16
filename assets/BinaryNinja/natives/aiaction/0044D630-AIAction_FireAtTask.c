#include "AIAction_FireAtTask.h"
int32_t AIAction_FireAtTask(long double a1 @ fp0, long double a2 @ fp1, int32_t a3, float a4 @ 0xc)

// Sig: void AIAction_FireAtTask(int taskId, int p1, int p2, int p3, int p4)
// Note: Makes the AI fire AT a task/object entity. Params: taskId = target
// task/entity id, remaining 4 args = firing behaviour values (same layout
// family as FireAtNode). Use in combat handlers when target is an entity.
{
    int32_t* valA1 = AI_CheckVisibility_2(g_5bda58);
    int32_t v_30 = 0;
    valA1[2] = Script_GetArg(a4, v_30);
    Profile_ValueSet(a4, 1.40129846e-45f);
    valA1[3] = a1 * 30.0;
    Profile_ValueSet(a4, 2.80259693e-45f);
    valA1[4] = a2 * 30.0;
    valA1[6] = Script_GetArg(a4, 3);
    AI_SelectTarget(sub_48ede0, valA1, Script_GetArg(a4, 4));
    int32_t v_18 = 5;
    int32_t v_10 = 0;
    int32_t v_c = 0x40140000;
    char* v_8 = &g_567c74;
    memcpy(a3, &v_18, 0x18);
    return a3;
}
