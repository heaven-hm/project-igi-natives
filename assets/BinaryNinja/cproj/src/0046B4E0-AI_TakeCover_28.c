#include "gi_platform.h"
#include "0046B4E0-AI_TakeCover_28.h"
void* AI_TakeCover_28(int32_t a1)

{
    void* result = AI_CombatTarget_28();
    *(result + 0x38) = a1;
    return result;
}
