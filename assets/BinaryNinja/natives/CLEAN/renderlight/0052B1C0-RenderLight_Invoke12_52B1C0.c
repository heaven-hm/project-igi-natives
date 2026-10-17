// IGI native provenance: RenderLight_Invoke12_52B1C0 - 0x0052B1C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052B1C0-RenderLight_Invoke12_52B1C0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RenderLight_Invoke12_52B1C0.h"

int32_t RenderLight_Invoke12_52B1C0(void* arg1)

{
    return Render_TransformVertices_12(*(arg1 + 0x20));
}
