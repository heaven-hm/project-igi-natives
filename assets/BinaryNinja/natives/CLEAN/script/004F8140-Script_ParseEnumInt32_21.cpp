// IGI native provenance: Script_ParseEnumInt32_21 - 0x004F8140 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F8140-Script_ParseEnumInt32_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumInt32_21.h"
void* Script_ParseEnumInt32_21(int32_t context, int32_t param_2, int32_t* param_3)

{
    *param_3 = 0;
    void* result;

    for (int32_t* i = &g_a76ca4; i < &g_a76cc4; i = &i[1])
    {
        result = *i;

        if (result)
        {
            *(context + (*param_3 << 2)) = result + 0x2d18;
            *(param_2 + (*param_3 << 2)) = *(result + 0x4288);
            result = *param_3 + 1;
            *param_3 = result;
        }
    }

    return result;
}
