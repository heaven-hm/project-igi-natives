// IGI native provenance: Script_ParseEnumInt32_10 - 0x004F1D80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1D80-Script_ParseEnumInt32_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumInt32_10.h"
int32_t* Script_ParseEnumInt32_10(int32_t* context)

{
    int32_t* result = context;
    int32_t* i_1 = *result;

    for (int32_t* i = *i_1; i; i = *i)
    {
        Camera_ApplyHandiCam_33(i_1);
        result = Sys_ExecuteBytecode_2(i_1);
        i_1 = i;
    }

    return result;
}
