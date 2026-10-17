// IGI native provenance: FX_DebrisSpawn_2 - 0x00482580 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00482580-FX_DebrisSpawn_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_DebrisSpawn_2.h"
int32_t FX_DebrisSpawn_2(void* context)

{
    int32_t* data_val = *(context + 0x68);

    if (data_val)
    {
        void* source_1 = *data_val;
        int16_t data_1 = HumanPlayer_LoadParameters_12();
        int32_t entity_val;
        entity_val = *(source_1 + 0x1c);

        if (TaskType_IsDerivedFrom(entity_val, data_1))
        {
            int32_t* data_3 = *(source_1 + 0xde8);

            if (data_3 && *data_3)
                return 1;
        }
    }

    return 0;
}
