#include "AI_CombatTarget_21.h"
int32_t AI_CombatTarget_21(void* a1)

{
    int32_t* objC = *(a1 + 0x7b4);

    if (!objC)
        return 0;

    return *objC;
}
