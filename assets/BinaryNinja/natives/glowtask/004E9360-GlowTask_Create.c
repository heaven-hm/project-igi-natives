#include "GlowTask_Create.h"

int32_t GlowTask_Create(void* pThis)

{
    g_a5ec74 = pThis;
    *(pThis + 0x2c) = 0xff;
    *(g_a5ec74 + 0x20) = 0;
    *(g_a5ec74 + 0x24) = 0;
    *(g_a5ec74 + 0x28) = 0;
    return SoundSys_LoadSoundDef_13(pThis);
}
