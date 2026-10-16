#include "004E8250-SoundSys_StopSoundSample_12.h"
/* 0x004e8250 SoundSys_StopSoundSample_12 full linked: callers=6 callees=0 */
int32_t sub_4e8250(void* a1, char a2)

{
    int32_t result = a2;
    *(a1 + 0xc0) = result;
    return result;
}
