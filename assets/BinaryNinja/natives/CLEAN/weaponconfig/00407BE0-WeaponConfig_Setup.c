// IGI native provenance: WeaponConfig_Setup - 0x00407BE0 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00407BE0-WeaponConfig_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "WeaponConfig_Setup.h"
int32_t* WeaponConfig_Setup(void* context)

{
    int32_t* result = HumanPlayer_CheckCollision_10(*(context + 0x20));

    if (result)
    {
        int32_t temp_1 = result[0x1b8];
        void* item_8 = nullptr;
        int32_t flagP1 = result[0x1b9];
        int32_t item_4_1 = 0;
        item_8 = context;
        memcpy(result, context + 0x20, 0x6e8);
        result[0x1b8] = temp_1;
        result[0x1b9] = flagP1;
        int32_t* result_1 = result;

        if (AIConfig_RegisterConfig_2(*(context + 0x6f8)))
        {
            int32_t entity_1 = 0;
            entity_1 = *(context + 0x6f8);
            int32_t data_7 = *(((*g_5690d8 * 0x180 + entity_1) << 2) + &g_a96ae0);

            if (data_7)
                data_7(0, &item_8);
        }

        result = AIConfig_RegisterConfig_2(*(context + 0x6f4));

        if (result)
        {
            int32_t temp_3 = 0;
            temp_3 = *(context + 0x6f4);
            result = *(((*g_5690d8 * 0x180 + temp_3) << 2) + &g_a96ae0);

            if (result)
                return result(0, &item_8);
        }
    }

    return result;
}
