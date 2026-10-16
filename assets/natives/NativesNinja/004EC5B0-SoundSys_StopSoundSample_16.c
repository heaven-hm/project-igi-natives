#include "004EC5B0-SoundSys_StopSoundSample_16.h"
/* 0x004ec5b0 SoundSys_StopSoundSample_16 full linked: callers=1 callees=1 */
void* sub_4ec5b0(void* a1, int32_t a2)

{
    *(a1 + 0x58) = a2;

    if (a2 <= 0)
    {
        *(a1 + 0x54) = 0;
        return a2;
    }

    void* eax_2 = Mem_Alloc(a2 * 0x18, 4);
    *(a1 + 0x54) = eax_2;
    return eax_2;
}
