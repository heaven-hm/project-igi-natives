#include "gi_platform.h"
#include "004E7830-SoundSys_EvaluateTrigger_10.h"
int32_t SoundSys_EvaluateTrigger_10(void* a1, char a2)

{
    int32_t result = a2;
    (*(int32_t*)(uintptr_t)(a1 + 4)) = result;
    return result;
}
