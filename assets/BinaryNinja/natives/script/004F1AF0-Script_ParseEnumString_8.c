// IGI native provenance: Script_ParseEnumString_8 - 0x004F1AF0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004F1AF0-Script_ParseEnumString_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumString_8.h"
int32_t Script_ParseEnumString_8(int32_t context, int32_t param_2, char param_3, int32_t param_4)

{
    return (*(((param_2 * 0x13 + param_3) << 2) + &g_a758e8))(context, param_4);
}
