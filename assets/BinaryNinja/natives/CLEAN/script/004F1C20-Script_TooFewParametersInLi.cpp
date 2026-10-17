// IGI native provenance: Script_TooFewParametersInLi - 0x004F1C20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1C20-Script_TooFewParametersInLi.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_TooFewParametersInLi.h"
void Script_TooFewParametersInLi(int32_t* context, int32_t param_2)

{
    int32_t source_val = 0;
    int32_t context_val = *context;

    if (param_2 <= 0)
        return;

    while (true)
    {
        if (!Sys_AllocateMemory_24(context[1], source_val + context_val))
        {
            int32_t item_14_2 = context[2];
            int32_t item_18_2 = context[3];
            Error_Show("Too few parameters in line %d of file '%s'");

            while (true)
                /* nop */
        }
        else
        {
            source_val += 1;

            if (source_val >= param_2)
                break;
        }
    }
}
