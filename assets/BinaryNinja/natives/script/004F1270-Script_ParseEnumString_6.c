// IGI native provenance: Script_ParseEnumString_6 - 0x004F1270 - CFG score 90.5% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F1270-Script_ParseEnumString_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumString_6.h"
int32_t Script_ParseEnumString_6(char* context, void* param_2)

{
    uint32_t data_1 = Script_EvaluateCondition_5();
    int32_t entity_val = 0;
    entity_val = *(param_2 + 0x1c);

    if (!*(((data_1 * 0x180 + entity_val) << 2) + &g_a96ae0))
    {
        int32_t saved_edi_2 = Script_EvaluateCondition_4(param_2);
        int32_t saved_edi_1 = saved_edi_2;
        saved_edi_2 = *(param_2 + 0x1c);
        int32_t item_4c_2 = QTask_RegisterEventCallback_2(saved_edi_2);
        return Game_DataSymbolLoad(context, "%s_%d");
    }

    uint32_t data_6 = Script_EvaluateCondition_5();
    int32_t data_7 = 0;
    data_7 = *(param_2 + 0x1c);
    void item_40;
    (*(((data_6 * 0x180 + data_7) << 2) + &g_a96ae0))(param_2, &item_40);
    void* dest_val = &item_40;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_2 = ~i;
    int32_t source_2;
    int32_t dest_3;
    dest_3 = memcpy(context, dest_val - entity_2, entity_2 & 0xfffffffc);
    memcpy(dest_3, source_2, entity_2 & 3);
    return 0;
}
