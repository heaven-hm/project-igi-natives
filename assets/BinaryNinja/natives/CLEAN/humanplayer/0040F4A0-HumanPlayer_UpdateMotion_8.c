// IGI native provenance: HumanPlayer_UpdateMotion_8 - 0x0040F4A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040F4A0-HumanPlayer_UpdateMotion_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_UpdateMotion_8.h"
int32_t HumanPlayer_UpdateMotion_8(void* context, void* param_2)

{
    int32_t dest_val = *(param_2 + 0x4ec);
    void* data_1;
    int32_t entity_val;
    data_1 = Table_GetAt(param_2 + 0x4c4, 0);
    int32_t temp_val;
    void* data_2 = HumanPlayer_LoadParameters_13(data_1, temp_val, entity_val, data_1);
    *(param_2 + 0x4d2) = 1;
    int32_t result = Bones_PlayAnimation(dest_val + 0x68, 0, *(data_2 + 0x688), 0, 0.0f);
    *(context + 0x14) = sub_40fd70;
    return result;
}
