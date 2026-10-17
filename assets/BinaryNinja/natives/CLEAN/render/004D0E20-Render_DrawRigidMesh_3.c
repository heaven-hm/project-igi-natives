// IGI native provenance: Render_DrawRigidMesh_3 - 0x004D0E20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D0E20-Render_DrawRigidMesh_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawRigidMesh_3.h"
int32_t* Render_DrawRigidMesh_3(void* context)

{
    int32_t* result = *(context + 0xc);
    int32_t i_1 = result[4];

    if (i_1)
    {
        result = result[5];

        if (i_1 > 0)
        {
            result = &result[2];
            int32_t i;

            do
            {
                int32_t source_1 = *result;
                int32_t context_1 = result[1];
                result = &result[5];
                i = i_1;
                i_1 -= 1;
                *(*(context + 0x10) + (source_1 << 2)) = context_1;
            } while (i != 1);
        }
    }

    return result;
}
