// IGI native provenance: Script_FormatString_12 - 0x004F2310 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004F2310-Script_FormatString_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_FormatString_12.h"
int32_t Script_FormatString_12(void* context, int32_t param_2, int32_t param_3)

{
    int32_t item_8 = param_2;
    int32_t data_1 = 0;
    data_1 = g_a76c09;
    int32_t entity_1 = 0;
    entity_1 = *(context + 0x1c);
    return (*(((data_1 * 0x180 + entity_1) << 2) + &g_a96ae0))(context, &item_8, item_8, param_3);
}
