// IGI native provenance: Script_EvaluateCondition_4 - 0x004F1050 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1050-Script_EvaluateCondition_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_EvaluateCondition_4.h"
int32_t Script_EvaluateCondition_4(int32_t context)

{
    int32_t result = 0;

    for (int32_t* i = &g_a71890; i < &g_a75890; )
    {
        int32_t* temp_1 = *i;

        if (temp_1 && *temp_1 == context)
            return result;

        i = &i[1];
        result += 1;
    }

    return 0xffffffff;
}
