// IGI native provenance: Render_ComputeNormals_2 - 0x004D0D90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D0D90-Render_ComputeNormals_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ComputeNormals_2.h"
int32_t Render_ComputeNormals_2(void* context)

{
    return *(*(context + 0xc) + 0x10);
}
