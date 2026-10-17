// IGI native provenance: Sys_ResolveSymbol_19 - 0x004B7490 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7490-Sys_ResolveSymbol_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol_19.h"
void* Sys_ResolveSymbol_19(void* context)

{
    if (context)
    {
        int32_t temp_1 = *(context + 4);

        if (temp_1)
        {
            int32_t data_1 = *(context + 8);
            int32_t entity_2 = ~(data_1 - 1);

            if ((entity_2 & data_1) != data_1)
                g_a43e5c = 1;
            else
            {
                void* data_3 = (data_1 + 0x13) & entity_2;

                if (data_3 < temp_1)
                    return data_3 + context;
            }
        }
    }

    return 0;
}
