// Original IGI.EXE function: SoundDefSound_Init_2 (VA 0x004E8310; static CFG gate PASS, CFG score 1.000).
#include "SoundDefSound_Init_2.h"

void SoundDefSound_Init_2(void* pThis)

{
    if (!data_54d9a2)
        return;

    int32_t result_val_2 = SoundSys_LoadSoundDef_12(SoundSys_AttachLipsync_12());
    char* result_val_4 = SoundSys_SetFrequency_12(SoundSys_AttachLipsync_12());
    Render_SkinBones_4(*(pThis + 0x20), result_val_4, result_val_2);
}
