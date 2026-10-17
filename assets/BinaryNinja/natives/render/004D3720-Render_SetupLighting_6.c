// IGI native provenance: Render_SetupLighting_6 - 0x004D3720 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D3720-Render_SetupLighting_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_SetupLighting_6.h"
int32_t Render_SetupLighting_6(int32_t context, int32_t param_2) {
    return context + (param_2 << 3) + 0x1c;
}
