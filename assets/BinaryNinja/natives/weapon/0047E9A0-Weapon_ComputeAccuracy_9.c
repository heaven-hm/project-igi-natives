// IGI native provenance: Weapon_ComputeAccuracy_9 - 0x0047E9A0 - CFG score 96.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047E9A0-Weapon_ComputeAccuracy_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_ComputeAccuracy_9.h"
struct status_msg* Weapon_ComputeAccuracy_9(int32_t* context, int32_t* param_2, uint32_t param_3, uint32_t param_4)

{
    int32_t kind;
    kind = g_5c1144;
    struct status_msg* result = QTask_HandleInput(Script_FormatString(), kind, 0);
    int32_t* item_10 = context;
    result->head[0x10] = param_3;
    result->head[0xf] = param_4;
    memcpy(&result->head[8], context, 0x18);
    uint32_t item_c = param_3;
    int32_t i = 0;

    if (*AI_CombatTarget_18() > 0)
    {
        int32_t source_1 = 8;
        int32_t* data_10;

        do
        {
            int32_t temp_1 = 0;
            temp_1 = *(*(AI_CombatTarget_18() + source_1) + 0x1c);
            uint32_t data_6 = Weapon_ReloadClip_9();
            (*(((temp_1 + data_6 * 0x180) << 2) + &g_a96ae0))(*(AI_CombatTarget_18() + source_1), &item_10);
            i += 1;
            source_1 += 4;
            data_10 = AI_CombatTarget_18();
        } while (i < *data_10);
    }

    if (param_2 && *param_2)
    {
        uint32_t data_12 = Weapon_CheckAmmo_8();
        int32_t temp_3 = 0;
        temp_3 = *(*param_2 + 0x1c);

        if (*(((data_12 * 0x180 + temp_3) << 2) + &g_a96ae0))
        {
            int32_t data_16 = g_5c1148;
            item_10 = param_2;
            int32_t source_3 = *param_2;
            int32_t item_8_1 = data_16 + 0x18;
            int32_t item_c_1 = 0;
            int32_t item_4_1 = 0x45000000;
            uint32_t data_19 = Weapon_CheckAmmo_8();
            int32_t temp_4 = 0;
            temp_4 = *(source_3 + 0x1c);
            (*(((data_19 * 0x180 + temp_4) << 2) + &g_a96ae0))(source_3, &item_10);
        }
    }

    return result;
}
