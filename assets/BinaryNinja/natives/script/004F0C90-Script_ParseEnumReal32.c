// IGI native provenance: Script_ParseEnumReal32 - 0x004F0C90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0C90-Script_ParseEnumReal32.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumReal32.h"
int32_t Script_ParseEnumReal32(int32_t* context)

{
    Qtask_UpdateList(context[2]);
    Camera_ApplyHandiCam_33(context);
    return Sys_ExecuteBytecode_2(context);
}
