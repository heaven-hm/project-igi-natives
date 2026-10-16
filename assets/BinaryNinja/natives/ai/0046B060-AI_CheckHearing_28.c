#include "AI_CheckHearing_28.h"
void* AI_CheckHearing_28(int32_t a1)

{
    void* result = AI_CombatTarget_28();
    *(result + 0x20) = a1;
    return result;
}
