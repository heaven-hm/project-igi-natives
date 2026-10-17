// IGI native provenance: Script_UndefinedParameterTy - 0x004F1A80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1A80-Script_UndefinedParameterTy.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_UndefinedParameterTy.h"
int32_t* Script_UndefinedParameterTy(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4, char param_5, int32_t param_6)

{
    if (param_4 != 0xffffffff)
    {
        *((*context << 4) + context[2]) = param_3 - param_2;
        *((*context << 4) + context[2] + 4) = param_4;
        *((*context << 4) + context[2] + 8) = param_6;
        *((*context << 4) + context[2] + 0xc) = param_5;
        *context += 1;
        return context;
    }

    Error_Show("Undefined parameter type.");

    while (true)
        /* nop */
}
