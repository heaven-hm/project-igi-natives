// IGI native provenance: Script_ParseEnumString_28 - 0x004FB980 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FB980-Script_ParseEnumString_28.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumString_28.h"
void* Script_ParseEnumString_28(void* context)

{
    *(context + 0x1b4) = 0;
    return SoundSys_EvaluateTrigger_16(context + 0xf0);
}
