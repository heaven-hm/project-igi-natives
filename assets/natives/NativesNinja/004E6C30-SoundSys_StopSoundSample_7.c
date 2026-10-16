#include "004E6C30-SoundSys_StopSoundSample_7.h"
/* 0x004e6c30 SoundSys_StopSoundSample_7 full linked: callers=56 callees=0 */
int32_t sub_4e6c30(void* a1, int32_t a2)

{
    int32_t eax = 0;
    int32_t edx = 0;
    eax = g_548816;
    edx = *(a1 + 0x1c);
    return (*(((eax * 0x180 + edx) << 2) + &g_a96ae0))(a1, a2);
}
