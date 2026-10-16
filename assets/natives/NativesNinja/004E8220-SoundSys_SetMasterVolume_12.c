#include "004E8220-SoundSys_SetMasterVolume_12.h"
/* 0x004e8220 SoundSys_SetMasterVolume_12 full linked: callers=8 callees=0 */
int32_t sub_4e8220(int32_t a1, int32_t a2, char a3)

{
    *(a1 + a2 + 0xb1) = a3;
    return a3;
}
