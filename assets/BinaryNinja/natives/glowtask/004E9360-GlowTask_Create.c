// IGI native provenance: GlowTask_Create - 0x004E9360 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E9360-GlowTask_Create.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
