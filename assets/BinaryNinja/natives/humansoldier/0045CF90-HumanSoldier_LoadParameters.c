// IGI native provenance: HumanSoldier_LoadParameters - 0x0045CF90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045CF90-HumanSoldier_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanSoldier_LoadParameters.h"
int32_t HumanSoldier_LoadParameters(void* context)

{
    int32_t data_2 = *(*(context + 0x800) + 0x3d38) - 5;

    if (data_2 > 0x17)
        *(context + 0x338) = 0x53ed10;
    else
    {
        int32_t entity_1 = 0;
        entity_1 = lookup_table_45d010[data_2];

        switch (entity_1)
        {
            case 0:
            {
                *(context + 0x338) = &g_53ef70;
                break;
            }
            case 1:
            {
                *(context + 0x338) = &g_53f0a0;
                break;
            }
            case 2:
            {
                *(context + 0x338) = &g_53ee40;
                break;
            }
            case 3:
            {
                *(context + 0x338) = 0x53ed10;
                break;
            }
        }
    }

    return (*((AI_UpdateOrders_17() << 2) + &g_a970e0))(context);
}
