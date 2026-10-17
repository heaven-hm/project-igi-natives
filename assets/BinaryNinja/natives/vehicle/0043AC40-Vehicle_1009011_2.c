// IGI native provenance: Vehicle_1009011_2 - 0x0043AC40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043AC40-Vehicle_1009011_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_1009011_2.h"
struct status_msg* Vehicle_1009011_2(void* context)

{
    struct status_msg* result = Script_ExecuteLevelScript_4(*(context + 0xc0));
    struct status_msg* result_1 = result;

    if (result_1)
    {
        int32_t entity_1 = 0;
        entity_1 = result_1->head[7];
        result = *((entity_1 << 2) + &g_a994e0);

        if (result)
        {
            int32_t item_8_1 = 0;
            double item_58[0xa];
            result(result_1, &item_58);

            if (*(context + 0xc8))
                WeaponType_CycleWeapon(result_1, &item_58);

            void* item_94_1 = context + 0xa0;
            void* item_98_1 = context + 0xa0;
            return FX_SmokeEmit(&item_58, 1, *(context + 0x94) * 30.0f, *(context + 0x90),
                *(context + 0x88) * 4096.0f, *(context + 0x8c) * 4096.0f, 0x45c00000, *(context + 0x98),
                *(context + 0x9c), nullptr, "1009_01_1", context + 0xa0, 0xffffffff, 0, 0x47c80000, 0);
        }
    }

    return result;
}
