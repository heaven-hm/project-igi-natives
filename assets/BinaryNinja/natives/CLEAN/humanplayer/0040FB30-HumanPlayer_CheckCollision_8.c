// IGI native provenance: HumanPlayer_CheckCollision_8 - 0x0040FB30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040FB30-HumanPlayer_CheckCollision_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_CheckCollision_8.h"
int32_t HumanPlayer_CheckCollision_8(void* context, void* param_2)

{
    int32_t dest_val = *(param_2 + 0x4ec);
    void* data_1;
    int32_t entity_val;
    data_1 = Table_GetAt(param_2 + 0x4c4, 0);
    int32_t temp_val;
    int32_t result = Bones_PlayAnimation(dest_val + 0x68, 0,
        *(HumanPlayer_LoadParameters_13(data_1, temp_val, entity_val, data_1) + 0x684), 0, 0.0f);
    *(param_2 + 0xd6c) = 0;
    *(context + 0x14) = sub_40fb90;
    return result;
}
