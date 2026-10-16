#include "SoundSys_EvaluateTrigger_12.h"
int32_t SoundSys_EvaluateTrigger_12(void* a1, int32_t a2)

{
    *(a1 + 0xbc) = a2;
    return a2;
}
