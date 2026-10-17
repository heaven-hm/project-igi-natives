// IGI native provenance: Script_ParseEnumInt32_14 - 0x004F3B40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F3B40-Script_ParseEnumInt32_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumInt32_14.h"
char Script_ParseEnumInt32_14(long double context , int32_t param_2)

{
    if (Script_FormatString_6(param_2 + 0x200f8))
    {
        Script_SpawnNewTask_7(param_2 + 0x200f8, param_2);
        *(param_2 + 0x200f4) = context;
    }

    char result = *(param_2 + 0x200f4);

    if (!result)
        return result;

    return Script_FormatString_14(param_2, *(param_2 + 0x20154) + 1);
}
