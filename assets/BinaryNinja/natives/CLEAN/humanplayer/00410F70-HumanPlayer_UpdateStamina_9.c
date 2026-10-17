// IGI native provenance: HumanPlayer_UpdateStamina_9 - 0x00410F70 - CFG score 95.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 00410F70-HumanPlayer_UpdateStamina_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_UpdateStamina_9.h"
int32_t* HumanPlayer_UpdateStamina_9(void* context)

{
    int32_t* result = AI_FireWeapon_19(context);

    if (!result)
    {
        void* item_20 = context;
        void item_18;
        memcpy(&item_18, context + 0x20, 0x18);
        int32_t i = 0;
        result = Level_LoadObjects_5();

        if (*result > 0)
        {
            int32_t source_2 = 8;

            do
            {
                int32_t entity_1 = 0;
                entity_1 = *(*(Level_LoadObjects_5() + source_2) + 0x1c);
                uint32_t data_3 = Level_LoadObjects_3();
                int32_t* item_30 = &item_20;
                (*(((entity_1 + data_3 * 0x180) << 2) + &g_a96ae0))(
                    *(Level_LoadObjects_5() + source_2), item_30);
                i += 1;
                source_2 += 4;
                result = Level_LoadObjects_5();
            } while (i < *result);
        }
    }

    return result;
}
