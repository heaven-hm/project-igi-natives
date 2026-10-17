// IGI native provenance: Script_FormatString_19 - 0x004F7120 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F7120-Script_FormatString_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_FormatString_19.h"
void* Script_FormatString_19(void* context, int32_t param_2)

{
    int32_t temp_val = *(context + 0x2ca8);

    if (temp_val)
    {
        if (temp_val - 1 != param_2)
        {
            int32_t source_2 = *(context + (param_2 << 2) + 0x2b4c);
            *(context + (param_2 << 2) + 0x2b4c) = *(context + (temp_val << 2) + 0x2b48);
            *(context + (*(context + 0x2ca8) << 2) + 0x2b48) = source_2;
        }

        *(context + 0x2ca8) -= 1;
    }

    return context;
}
