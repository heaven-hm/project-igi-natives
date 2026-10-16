#include "SoundSys_LoadSoundDef_9.h"
void* SoundSys_LoadSoundDef_9(void* a1, int32_t a2, int32_t a3)

{
    *(a1 + 0x18) = a2;
    *(a1 + 0x1c) = a3;
    return a1;
}
