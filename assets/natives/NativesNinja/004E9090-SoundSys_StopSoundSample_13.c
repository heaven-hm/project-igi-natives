#include "004E9090-SoundSys_StopSoundSample_13.h"
/* 0x004e9090 SoundSys_StopSoundSample_13 full linked: callers=1 callees=1 */
int32_t* sub_4e9090(void* a1)

{
    *(a1 + 0x20) = 0;
    *(a1 + 0x24) = 0;
    *(a1 + 0x28) = 0;
    *(a1 + 0x2c) = 0xff;
    return sub_497570(a1 + 0x30, 1);
}
