// IGI native provenance: Render_BindTexture_2 - 0x004D0DC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D0DC0-Render_BindTexture_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_BindTexture_2.h"
int32_t Render_BindTexture_2(void* context, int32_t param_2, int32_t param_3)

{
    int32_t result = *(*(context + 0xc) + 0x14);
    *(result + param_2 * 0x14 + 4) = param_3;
    return result;
}
