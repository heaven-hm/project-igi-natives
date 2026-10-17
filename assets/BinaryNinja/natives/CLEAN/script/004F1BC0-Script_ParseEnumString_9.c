// IGI native provenance: Script_ParseEnumString_9 - 0x004F1BC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1BC0-Script_ParseEnumString_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumString_9.h"
int32_t Script_ParseEnumString_9(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t* i = &g_a758e4;
    int32_t dest_val = 0;
    *(((context * 0x13 + param_2) << 2) + &g_a758e8) = param_3;
    int32_t result;

    do
    {
        result = i[0x11];

        if (result && *i == context)
            result = Script_ParseEnumString_9(dest_val, param_2, param_3);

        i = &i[0x13];
        dest_val += 1;
    } while (i < &g_a76be4);

    return result;
}
