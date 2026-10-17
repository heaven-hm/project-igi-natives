// IGI native provenance: Menu_RequestScreen_19 - 0x00428610 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00428610-Menu_RequestScreen_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_RequestScreen_19.h"
void* Menu_RequestScreen_19(void* context)

{
    void* result = *(context + 0x890);

    if (!result)
        return result;

    return SoundSys_StopSoundSample_7(result, context + 0x20);
}
