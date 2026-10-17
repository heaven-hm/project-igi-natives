// IGI native provenance: Script_ExecuteLevelScript_31 - 0x004FE610 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FE610-Script_ExecuteLevelScript_31.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ExecuteLevelScript_31.h"
double* Script_ExecuteLevelScript_31(void* context, double* param_2)

{
    int32_t i = 0;
    double* result = *(context + 0xf0);

    if (result > 0)
    {
        do
        {
            i += 1;
            result = *(*(context + 0x6c) + (i << 2) - 4);
            *result = *result + *param_2;
            result[1] = param_2[1] + result[1];
            result[2] = result[2] + param_2[2];
        } while (i < *(context + 0xf0));
    }

    return result;
}
