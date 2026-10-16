#include "AI_TakeCover_28.h"
void* AI_TakeCover_28(int32_t a1)

{
    void* result = AI_CombatTarget_28();
    *(result + 0x38) = a1;
    return result;
}
