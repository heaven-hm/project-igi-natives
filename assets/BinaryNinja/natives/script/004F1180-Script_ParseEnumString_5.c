// IGI native provenance: Script_ParseEnumString_5 - 0x004F1180 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1180-Script_ParseEnumString_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumString_5.h"
void* Script_ParseEnumString_5(int32_t context)

{
    int32_t* data_val = Script_ExecuteLevelScript_5(context);

    if (!data_val)
        return &g_567c74;

    return &data_val[3];
}
