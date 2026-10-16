#include "004E7660-SoundSys_InitSoundSys_10.h"
/* 0x004e7660 SoundSys_InitSoundSys_10 full linked: callers=1 callees=2 */
int32_t sub_4e7660(int32_t* a1)

{
    void* eax = *a1;

    if (eax)
    {
        sub_4b76d0(eax);
        *a1 = 0;
    }

    return sub_4b0d10(a1);
}
