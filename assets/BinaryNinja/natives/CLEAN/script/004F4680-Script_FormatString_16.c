// IGI native provenance: Script_FormatString_16 - 0x004F4680 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F4680-Script_FormatString_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_FormatString_16.h"
int32_t Script_FormatString_16(uint32_t context)

{
    Script_ParseEnumInt32_28(context);
    CarGun_ConstructPath(context);
    memset(context + 0x720, 0, 0x20);
    *(context + 0x744) = 0;
    *(context + 0x745) = 1;
    return 0;
}
