// IGI native provenance: HumanPlayer_LoadParameters_13 - 0x00413C80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00413C80-HumanPlayer_LoadParameters_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_LoadParameters_13.h"
int32_t HumanPlayer_LoadParameters_13(int32_t context, int32_t param_2, int32_t param_3, void* param_4)

{
    int32_t result = param_3;
    int32_t entity_val = 0;
    entity_val = g_5391b1;
    int32_t source_val = 0;
    source_val = *(param_4 + 0x1c);
    result = 0;
    int32_t entity_4 = *(((entity_val * 0x180 + source_val) << 2) + &g_a96ae0);

    if (!entity_4)
        return 0;

    entity_4(param_4, &result);
    return result;
}
