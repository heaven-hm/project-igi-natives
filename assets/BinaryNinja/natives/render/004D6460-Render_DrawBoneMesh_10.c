// IGI native provenance: Render_DrawBoneMesh_10 - 0x004D6460 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D6460-Render_DrawBoneMesh_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawBoneMesh_10.h"
int32_t Render_DrawBoneMesh_10(void* context, int32_t param_2)

{
    void* entity_2 = *(context + 8) + param_2 * 0x84;
    int32_t temp_3 = *(entity_2 + 4);

    if (temp_3 & 0x20000)
    {
        void* i = *(entity_2 + 0x80);

        if (i)
        {
            do
            {
                if (!(temp_3 & 0x10000))
                    return *(*(i + 0x20) + 0x10);

                if (*(i + 0x24) == 1)
                    return *(*(i + 0x28) + 0x10);

                i = *(i + 0x28);
            } while (i);
        }
    }

    return 0;
}
