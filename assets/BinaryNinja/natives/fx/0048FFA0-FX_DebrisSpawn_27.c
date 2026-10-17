// IGI native provenance: FX_DebrisSpawn_27 - 0x0048FFA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048FFA0-FX_DebrisSpawn_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_DebrisSpawn_27.h"
int32_t* FX_DebrisSpawn_27()

{
    int32_t* entity_1 = g_5c8e14;

    if (entity_1)
    {
        int32_t* data_1 = g_5c8e1c;

        if (data_1)
        {
            (*(*data_1 + 0x20))(data_1);
            int32_t* data_2 = g_5c8e1c;
            (*(*data_2 + 8))(data_2);
            entity_1 = g_5c8e14;
            g_5c8e1c = 0;
        }

        (*(*entity_1 + 8))(entity_1);
        g_5c8e14 = 0;
    }

    return FX_UnableToRemoveWinpro(sub_48fed0);
}
