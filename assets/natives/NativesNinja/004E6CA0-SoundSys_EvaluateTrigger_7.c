#include "004E6CA0-SoundSys_EvaluateTrigger_7.h"
/* 0x004e6ca0 SoundSys_EvaluateTrigger_7 full linked: callers=8 callees=0 */
int32_t sub_4e6ca0(void* a1, int32_t a2)

{
    int32_t edx = 0;
    a2 = a2;
    edx = *(a1 + 0x1c);
    return (*(((*g_548818 * 0x180 + edx) << 2) + &g_a96ae0))(a1, &a2);
}
