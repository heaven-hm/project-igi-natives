#include "004F1050-Script_EvaluateCondition_4.h"
/* 0x004f1050 Script_EvaluateCondition_4 full linked: callers=56 callees=0 */
int32_t sub_4f1050(int32_t a1)

{
    int32_t result = 0;

    for (int32_t* i = &g_a71890; i < &g_a75890; )
    {
        int32_t* edx_1 = *i;

        if (edx_1 && *edx_1 == a1)
            return result;

        i = &i[1];
        result += 1;
    }

    return 0xffffffff;
}
