#include "PatrolPath_Find.h"
void* const PatrolPath_Find(int32_t a1)

{
    int32_t* i_1 = g_5bda70;

    for (int32_t* i = *i_1; i; i = *i)
    {
        void* const result = AI_CheckVisibility_5(i_1);

        if (*(result + 0x28) == a1)
            return result;

        i_1 = i;
    }

    return nullptr;
}
