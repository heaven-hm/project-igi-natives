#include "004E6030-SoundSys_SetMasterVolume_4.h"
/* 0x004e6030 SoundSys_SetMasterVolume_4 full linked: callers=1 callees=1 */
int32_t Timer_SetLimit(int32_t a1)

{
    g_limit_a = a1;
    return Timer_Commit(a1);
}
