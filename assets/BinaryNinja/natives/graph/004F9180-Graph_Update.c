// Original IGI.EXE function: Graph_Update (VA 0x004F9180; static CFG gate PASS, CFG score 1.000).
#include "Graph_Update.h"
int32_t Graph_Update(void* context)

{
    int32_t dest_val;
    dest_val = *(*(context + 0x14) + 0x1c);
    bool flag_0 = !TaskType_IsDerivedFrom(dest_val, DynObj_LookupHashItem_5());
    char data_3 = *(context + 0x64);
    double item_18[0x3];

    if (flag_0)
    {
        if (data_3)
        {
            Script_SpawnNewTask_23(&item_18, context);
            *(context + 0x64) = 0;
            Script_ParseEnumInt32_23(context, &item_18);
        }
    }
    else if (!data_3)
    {
        Script_SpawnNewTask_23(&item_18, context);
        *(context + 0x64) = 1;
        Script_ParseEnumInt32_23(context, &item_18);
    }
    int32_t result = Script_EvaluateCondition_4(context);
    *(context + 0x50) = result;
    return result;
}
