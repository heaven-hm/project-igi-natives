// IGI native provenance: Weapon_EjectShell_7 - 0x0047C560 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047C560-Weapon_EjectShell_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_EjectShell_7.h"
int32_t Weapon_EjectShell_7(void* context)

{
    int32_t context_val = 0;
    int32_t data_val = *(context + 0x9c);

    if (data_val > 0)
    {
        int32_t* dest_1 = context + 0x900;

        if (0 >= data_val)
            goto label_47c5d3;

        while (true)
        {
            void* data_1 = *dest_1;

            if (!*(data_1 + 0x34))
            {
                if (*(data_1 + 0xc0))
                    Weapon_UpdateMuzzleFlash_7(context, context_val);

                *(*dest_1 + 0x30) = 0;
                int32_t entity_2 = *(context + 0x9c) - 1;
                *(context + 0x9c) = entity_2;
                *dest_1 = *(context + (entity_2 << 2) + 0x900);
                *(context + (*(context + 0x9c) << 2) + 0x900) = 0;

                if (context_val < *(context + 0x9c))
                    continue;
            }

        label_47c5d3:
            context_val += 1;
            dest_1 = &dest_1[1];

            if (context_val >= *(context + 0x9c))
                break;
        }
    }

    int32_t result = *(context + 0x9c);
    int32_t entity_4 = 0;

    if (result > 0)
    {
        int32_t* temp_2 = context + 0x900;

        do
        {
            void* data_6 = *temp_2;
            temp_2 = &temp_2[1];
            entity_4 += 1;
            *(data_6 + 0x34) -= 1;
            result = *(context + 0x9c);
        } while (entity_4 < result);
    }

    return result;
}
