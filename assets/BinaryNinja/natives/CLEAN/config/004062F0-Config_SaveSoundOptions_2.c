// IGI native provenance: Config_SaveSoundOptions_2 - 0x004062F0 - CFG score 49.1% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004062F0-Config_SaveSoundOptions_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_SaveSoundOptions_2.h"
int32_t Config_SaveSoundOptions_2(int32_t context)

{
    *(Config_GetActivePlayerProfileRecord() + 4) = context;
    /* tailcall */
    return Config_Language_2();
}
