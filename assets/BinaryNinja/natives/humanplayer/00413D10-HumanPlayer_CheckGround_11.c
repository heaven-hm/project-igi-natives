// IGI native provenance: HumanPlayer_CheckGround_11 - 0x00413D10 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00413D10-HumanPlayer_CheckGround_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_CheckGround_11.h"
void* HumanPlayer_CheckGround_11(int32_t context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, void* param_7, int32_t param_8, int32_t param_9)

{
    if (*(param_7 + 0x6d4) == 0x181)
        return param_7;

    int32_t item_30 = context;
    int32_t item_28_1 = param_3;
    int32_t item_20_1 = param_5;
    int32_t item_c_1 = param_8;
    int32_t item_2c_1 = param_2;
    int32_t item_4_1 = param_9;
    int32_t entity_6 = 0;
    entity_6 = g_5391ae;
    int32_t item_24_1 = param_4;
    int32_t item_1c_1 = param_6;
    int32_t source_1 = 0;
    source_1 = *(param_7 + 0x6d4);
    void* item_10_1 = param_7;
    int32_t item_8_1 = *(param_7 + 0x6e0);
    int32_t item_14_1 = 0;
    int32_t item_18_1 = 0;
    return (*(((entity_6 * 0x180 + source_1) << 2) + &g_a96ae0))(0, &item_30);
}
