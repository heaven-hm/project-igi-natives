// IGI native provenance: Script_ParseEnumString_12 - 0x004F2060 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F2060-Script_ParseEnumString_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumString_12.h"
int32_t Table_GetAt(int32_t context, int32_t param_2)

{
    return *(context + (param_2 << 2));
}
