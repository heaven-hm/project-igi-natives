// Original IGI.EXE function: Graph_Update (VA 0x004F9180; static CFG gate PASS, CFG score 1.000).
#include "Graph_Update.h"
int32_t Graph_Update(void* a1)

{
    int32_t dstD;
    dstD = *(*(a1 + 0x14) + 0x1c);
    bool cond_0 = !TaskType_IsDerivedFrom(dstD, DynObj_LookupHashItem_5());
    char valA3 = *(a1 + 0x64);
    double v_18[0x3];

    if (cond_0)
    {
        if (valA3)
        {
            Script_SpawnNewTask_23(&v_18, a1);
            *(a1 + 0x64) = 0;
            Script_ParseEnumInt32_23(a1, &v_18);
        }
    }
    else if (!valA3)
    {
        Script_SpawnNewTask_23(&v_18, a1);
        *(a1 + 0x64) = 1;
        Script_ParseEnumInt32_23(a1, &v_18);
    }
    int32_t result = Script_EvaluateCondition_4(a1);
    *(a1 + 0x50) = result;
    return result;
}
