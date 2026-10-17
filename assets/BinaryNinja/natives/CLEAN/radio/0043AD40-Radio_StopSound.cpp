// IGI native provenance: Radio_StopSound - 0x0043AD40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043AD40-Radio_StopSound.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Radio_StopSound.h"

int32_t Radio_StopSound(void* pThis)

{
    Script_Isexists(pThis + 0x38, pThis);
    return 0;
}
