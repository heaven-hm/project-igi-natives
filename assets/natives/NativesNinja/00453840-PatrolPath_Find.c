#include "00453840-PatrolPath_Find.h"
/* 0x00453840 PatrolPath_Find full linked: callers=1 callees=1 */
void* const sub_453840(int32_t a1)

{
    int32_t* i_1 = g_5bda70;

    for (int32_t* i = *i_1; i; i = *i)
    {
        void* const result = sub_453870(i_1);

        if (*(result + 0x28) == a1)
            return result;

        i_1 = i;
    }

    return nullptr;
}
