// IGI native provenance: HumanPlayer_TakeDamage_7 - 0x0040F180 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 0040F180-HumanPlayer_TakeDamage_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_TakeDamage_7.h"
int32_t HumanPlayer_TakeDamage_7(void* context, void* param_2)

{
    int32_t source_val = *(param_2 + 0x4ec);
    int32_t item_38 = 0;
    void* item_3c = param_2 + 0x4c4;
    void* data_1 = Table_GetAt(item_3c, item_38);
    *(param_2 + 0x4d0) = 0;
    void* item_24 = param_2;
    void item_20;
    memcpy(&item_20, source_val + 0x208, 0x1c);
    char item_3 = g_56e214;
    uint32_t data_3 = AI_SelectTarget_17();
    int32_t data_4 = 0;
    data_4 = *(data_1 + 0x1c);
    (*(((data_3 * 0x180 + data_4) << 2) + &g_a96ae0))(data_1, &item_24);
    char result;

    if (!result)
        return result;

    *(param_2 + 0x4d0) = 1;
    int32_t temp_3 = *(context + 0x10);
    *(context + 0x10) = 1;
    void* entity_2 = *(context + 4);
    *(context + 0xc) = temp_3;
    item_3c = context;
    int32_t entity_3 = *(entity_2 + 4);
    *(context + 0x14) = entity_3;
    return entity_3(item_3c, param_2);
}
