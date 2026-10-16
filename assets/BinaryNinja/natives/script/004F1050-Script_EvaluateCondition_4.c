#include "Script_EvaluateCondition_4.h"
int32_t Script_EvaluateCondition_4(int32_t a1)

{
    int32_t result = 0;

    for (int32_t* i = &g_a71890; i < &g_a75890; )
    {
        int32_t* tmpD1 = *i;

        if (tmpD1 && *tmpD1 == a1)
            return result;

        i = &i[1];
        result += 1;
    }

    return 0xffffffff;
}
