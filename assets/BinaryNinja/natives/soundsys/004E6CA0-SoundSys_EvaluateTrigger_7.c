#include "SoundSys_EvaluateTrigger_7.h"
int32_t SoundSys_EvaluateTrigger_7(void* a1, int32_t a2)

{
    int32_t tmpD = 0;
    a2 = a2;
    tmpD = *(a1 + 0x1c);
    return (*(((*g_548818 * 0x180 + tmpD) << 2) + &g_a96ae0))(a1, &a2);
}
