#include "SoundSys_AttachLipsync_16.h"
void* SoundSys_AttachLipsync_16(void* a1)

{
    __builtin_memset(a1 + 0x18, 0, 0x3c);
    *(a1 + 8) = 0;
    *(a1 + 0x5c) = 0;
    *(a1 + 0x60) = 0;
    return a1;
}
