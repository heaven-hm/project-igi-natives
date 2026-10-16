#include "SoundSys_EvaluateTrigger_10.h"
int32_t SoundSys_EvaluateTrigger_10(void* a1, char a2)

{
    int32_t result = a2;
    *(a1 + 4) = result;
    return result;
}
