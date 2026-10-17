// IGI native provenance: SoundDefSound_Init_2 - 0x004E8310 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E8310-SoundDefSound_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundDefSound_Init_2.h"

void SoundDefSound_Init_2(void* pThis)

{
    if (!data_54d9a2)
        return;

    int32_t result_val_2 = SoundSys_LoadSoundDef_12(SoundSys_AttachLipsync_12());
    char* result_val_4 = SoundSys_SetFrequency_12(SoundSys_AttachLipsync_12());
    Render_SkinBones_4(*(pThis + 0x20), result_val_4, result_val_2);
}
