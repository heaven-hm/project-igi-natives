#include "004EC660-SoundSys_AttachLipsync_16.h"
/* 0x004ec660 SoundSys_AttachLipsync_16 full linked: callers=1 callees=1 */
void* sub_4ec660(void* a1)

{
    __builtin_memset(a1 + 0x18, 0, 0x3c);
    *(a1 + 8) = 0;
    *(a1 + 0x5c) = 0;
    *(a1 + 0x60) = 0;
    return a1;
}
