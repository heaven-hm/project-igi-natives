// IGI native provenance: Render_DrawSplineMesh_3 - 0x004D0E60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D0E60-Render_DrawSplineMesh_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawSplineMesh_3.h"
void Render_DrawSplineMesh_3(void* context, void* param_2)

{
    void* temp_val = param_2;

    if (!temp_val)
        return;

    int32_t i = 0;
    void* data_val = *(context + 0xc);

    if (*(data_val + 0x10) <= 0)
        return;

    int32_t entity_2 = 0;

    do
    {
        i += 1;
        temp_val += 4;
        int32_t data_2 = *(*(data_val + 0x14) + entity_2 + 4);
        entity_2 += 0x14;
        *(temp_val - 4) = data_2;
        data_val = *(context + 0xc);
    } while (i < *(data_val + 0x10));
}
