// IGI native provenance: RenderLight_Invoke13 - 0x00531200 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00531200-RenderLight_Invoke13.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_Invoke13.h"

int32_t RenderLight_Invoke13(void* arg1)

{
    return Render_DrawBoneMesh_13(arg1 + 0x20, arg1 + 0x68, *(arg1 + 0x74));
}
