#include "PatrolPath_OnEvent.h"
int32_t PatrolPath_OnEvent(void* a1)

{
    int32_t* valA = *(a1 + 8);
    int32_t objC = *valA;
    int32_t objC1 = -(objC);
    int32_t* i = (objC1 - objC1) & valA;
    int32_t result = 0;

    while (i)
    {
        i = *i;
        result += 1;

        if (!i)
            break;

        if (!*i)
            break;
    }

    return result;
}
