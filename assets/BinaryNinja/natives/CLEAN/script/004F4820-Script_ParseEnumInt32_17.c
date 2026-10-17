// IGI native provenance: Script_ParseEnumInt32_17 - 0x004F4820 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F4820-Script_ParseEnumInt32_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumInt32_17.h"
int32_t* Script_ParseEnumInt32_17(void* context)

{
    int32_t* result = *(context + 0xe8);

    if (result)
    {
        result = QTask_FindType(result);
        *(context + 0xe8) = 0;
    }

    return result;
}
