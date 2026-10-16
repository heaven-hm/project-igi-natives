#include "004E0810-SoundSys_PlaySoundSample.h"
/* 0x004e0810 SoundSys_PlaySoundSample full linked: callers=2 callees=1 */
int32_t sub_4e0810(int32_t a1, int32_t a2)

{
    memcpy(a1 + 0x70, a2, 0x28);
    return a1;
}
