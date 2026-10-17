// IGI native provenance: RenderLight_Invoke13_531220 - 0x00531220 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00531220-RenderLight_Invoke13_531220.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_Invoke13_531220.h"

int32_t RenderLight_Invoke13_531220(void* arg1)

{
    return Render_DrawSplineMesh_13(arg1 + 0x20, arg1 + 0x68, *(arg1 + 0x74), arg1 + 0x78,
        *(arg1 + 0x84));
}
