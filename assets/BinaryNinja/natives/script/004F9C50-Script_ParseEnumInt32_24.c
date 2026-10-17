// IGI native provenance: Script_ParseEnumInt32_24 - 0x004F9C50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F9C50-Script_ParseEnumInt32_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumInt32_24.h"
int32_t Script_ParseEnumInt32_24(int32_t* context)

{
    Script_ParseEnumReal32_24(Script_ExecuteLevelScript_23(context[5], context[2]), context);
    Script_ParseEnumReal32_24(Script_ExecuteLevelScript_23(context[5], context[3]), context);
    void* data_4 = context[5];
    *(data_4 + 0x60) -= 1;
    Camera_ApplyHandiCam_33(context);
    return Sys_ExecuteBytecode_2(context);
}
