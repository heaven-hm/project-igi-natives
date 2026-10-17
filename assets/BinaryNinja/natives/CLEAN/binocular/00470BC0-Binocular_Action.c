// IGI native provenance: Binocular_Action - 0x00470BC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00470BC0-Binocular_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Binocular_Action.h"
int32_t* Binocular_Action(void* context, int32_t param_2)

{
    int32_t* result = *(context + 0x1b0);

    if (result)
    {
        Weapon_UpdateMuzzleFlash_2(**(context + 0x1c0), context + 0x150);
        result = Weapon_UpdateBarrel_2(**(context + 0x1c0), context + 0x168);
        int32_t* i = *(context + 8);

        if (*i && i)
        {
            int32_t entity_3 = g_afa7e0;

            do
            {
                int32_t* temp_3 = *i;
                void* data_5;

                if (!temp_3)
                    data_5 = nullptr;
                else
                {
                    int32_t data_2 = *temp_3;
                    int32_t data_3 = -(data_2);
                    data_5 = (data_3 - data_3) & temp_3;
                }

                *((entity_3 << 2) + &g_afa6e0) = data_5;
                g_afa7e0 = entity_3 + 1;
                uint32_t data_7 = FX_DebrisSpawn_8();
                int32_t entity_5 = 0;
                entity_5 = i[7];
                result = *(((data_7 * 0x180 + entity_5) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, param_2);

                entity_3 = g_afa7e0 - 1;
                g_afa7e0 = entity_3;
                i = *((entity_3 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
