// IGI native provenance: SoundSys_FormatSoundDef - 0x004E8900 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E8900-SoundSys_FormatSoundDef.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_FormatSoundDef.h"

void* SoundSys_FormatSoundDef(void* pThis)

{
    *(pThis + 0xde) = 1;
    return pThis;
}
