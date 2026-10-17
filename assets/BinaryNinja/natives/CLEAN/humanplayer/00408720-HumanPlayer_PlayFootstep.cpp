// IGI native provenance: HumanPlayer_PlayFootstep - 0x00408720 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00408720-HumanPlayer_PlayFootstep.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_PlayFootstep.h"
int32_t HumanPlayer_PlayFootstep(void* context)

{
    int32_t item_8;
    int32_t data_val = Script_ParseEnumReal32_13(context, &item_8);
    int32_t item_4;
    int32_t temp_1 = item_8 + item_4;

    if (temp_1)
        return 1;

    return *(HumanPlayer_LoadParameters_13(data_val, temp_1, item_4, context) + 0x6dc);
}
