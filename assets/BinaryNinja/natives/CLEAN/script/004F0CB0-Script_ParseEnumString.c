// IGI native provenance: Script_ParseEnumString - 0x004F0CB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0CB0-Script_ParseEnumString.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumString.h"
struct status_msg* Script_ParseEnumString(void* context)

{
    int32_t kind;
    kind = g_54dd0c;
    return QTask_HandleInput(context, kind, 0);
}
