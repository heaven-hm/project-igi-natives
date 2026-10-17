// Original IGI.EXE function: Script_EvaluateCondition_4 (VA 0x004F1050; static CFG gate PASS, CFG score 1.000).
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
