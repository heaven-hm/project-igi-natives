// IGI native provenance: PhysicsTerrain_Invoke4_4F3CA0 - 0x004F3CA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F3CA0-PhysicsTerrain_Invoke4_4F3CA0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_Invoke4_4F3CA0.h"

int32_t* PhysicsTerrain_Invoke4_4F3CA0(void* arg1, int32_t* arg2)

{
    void* result_val = Script_ExecuteLevelScript_4(*(arg1 + 0x2014c));

    if (!result_val)
    {
        *arg2 = 0xe8;
        return result_val;
    }

    uint32_t eax_2 = Script_EvaluateCondition_15();
    int32_t eax_3 = 0;
    eax_3 = *(result_val + 0x1c);

    if (!*(((eax_2 * 0x180 + eax_3) << 2) + &g_a96ae0))
    {
        *arg2 = 0xe8;
        return arg2;
    }

    uint32_t eax_6 = Script_EvaluateCondition_15();
    int32_t edx_3 = 0;
    edx_3 = *(result_val + 0x1c);
    (*(((eax_6 * 0x180 + edx_3) << 2) + &g_a96ae0))(result_val, arg2);
    int32_t eax_9 = *arg2 + 0xe8;
    *arg2 = eax_9;
    return eax_9;
}
