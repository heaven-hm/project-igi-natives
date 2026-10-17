// IGI native provenance: Script_FormatString_17 - 0x004F4910 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F4910-Script_FormatString_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_FormatString_17.h"
int32_t Script_FormatString_17(int32_t context, int32_t param_2, int32_t param_3) {
    int32_t data_val = param_3;

    if (data_val < 0)
        data_val = 0;

    if (data_val < param_2)
        return context + (data_val << 3);

    return context + (param_2 << 3) - 8;
}
