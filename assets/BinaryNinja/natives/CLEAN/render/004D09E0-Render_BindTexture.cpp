// IGI native provenance: Render_BindTexture - 0x004D09E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D09E0-Render_BindTexture.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_BindTexture.h"
void** Render_BindTexture(void** context, void* param_2, int32_t param_3, char* param_4)

{
    void** result = DynObj_Missing(param_4);

    if (result)
    {
        result = *result;

        if (result)
        {
            int32_t* entity_3 = *(*(result[3] + 0xc) + 0x88) + (param_3 << 4);
            result = context;
            *result = *entity_3;
            result[1] = entity_3[1];
            result[2] = entity_3[2];
            *result = *(param_2 + 0x98) * *result;
            result[1] = *(param_2 + 0x9c) * result[1];
            result[2] = *(param_2 + 0xa0) * result[2];
        }
    }

    return result;
}
