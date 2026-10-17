// IGI native provenance: AIAction_FireAtTask - 0x0044D630 - CFG score 95.8% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044D630-AIAction_FireAtTask.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIAction_FireAtTask.h"
int32_t AIAction_FireAtTask(long double context , long double param_2 , int32_t param_3, float param_4 )

// Sig: void AIAction_FireAtTask(int taskId, int p1, int p2, int p3, int p4)
// Note: Makes the AI fire AT a task/object entity. Params: taskId = target
// task/entity id, remaining 4 args = firing behaviour values (same layout
// family as FireAtNode). Use in combat handlers when target is an entity.
{
    int32_t* data_1 = AI_CheckVisibility_2(g_5bda58);
    int32_t item_30 = 0;
    data_1[2] = Script_GetArg(param_4, item_30);
    Profile_ValueSet(param_4, 1.40129846e-45.0f);
    data_1[3] = context * 30.0;
    Profile_ValueSet(param_4, 2.80259693e-45.0f);
    data_1[4] = param_2 * 30.0;
    data_1[6] = Script_GetArg(param_4, 3);
    AI_SelectTarget(sub_48ede0, data_1, Script_GetArg(param_4, 4));
    int32_t item_18 = 5;
    int32_t item_10 = 0;
    int32_t item_c = 0x40140000;
    char* item_8 = &g_567c74;
    memcpy(param_3, &item_18, 0x18);
    return param_3;
}
