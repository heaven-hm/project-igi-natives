#include "SoundDefSound_Init_2.h"

void SoundDefSound_Init_2(void* pThis)

{
    if (!data_54d9a2)
        return;

    int32_t eax_2 = SoundSys_LoadSoundDef_12(SoundSys_AttachLipsync_12());
    char* eax_4 = SoundSys_SetFrequency_12(SoundSys_AttachLipsync_12());
    Render_SkinBones_4(*(pThis + 0x20), eax_4, eax_2);
}
